#include<iostream>
#include<vector>
#include<string>
using namespace std; 
// string ans = "";


string palindromString (int start,int end,string str) {

    string ans = "";

    while (start>=0 && end<str.length() && str[start]==str[end] ){

        // if (end != start && (end-start+1) < ans.length()) {
        //     break;
        // }
        // string check = "";

        // for (int i=start; i<=end; i++) {
        //     check.push_back(str[i]);
        // }
      
        // if (check.length() > ans.length() ) {
        //     ans = check;
        // }
        // cout << check << ":" << ans << " ";
        start --;
        end ++;
    }

    int i;
    int j;

    start < 0 ? i=0: i=start+1;
    end > str.length() ? j=str.length()-1: j=end-1;

    // cout << i << ":" << j  << " ";
        for (int n=i; str[i]==str[j] && n<=j; n++) {
            ans.push_back(str[n]);
        }

    return ans;
}

int test () {
    for (int i=0; i<12; i++) {

        for (int j=0; j<5; j++) {
            if (j==0) {
                break;;
            }
            cout << "j" << ":" << j;
        }
        // if (i==2) {
        //     return 100;
        // }
        cout << i;
    }
}

int main() {
    string str = "abc";
    str.push_back(4);

    int var = -2147483648;
    cout << "str is" << str;
    // test();
    return 0;

}