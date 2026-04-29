#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    const string SYMBOLS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; // ⁡⁢⁢⁢posible symbols⁡ ⁡⁢⁢⁣now 62⁡
    const int SYMBOL_COUNT = SYMBOLS.length();
    
    cout << "Enter Password:\n"; string password; cin >> password;
    cout << "Enter the maximum password length:\n"; int password_length; cin >> password_length;
    cout << "Enter the minimum password length:\n"; int min_password_length; cin >> min_password_length;
    string res="";
    char m[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    bool flag=false;
    do{
        if(flag)
        {
            res="";
            for(int i=0;i<password_length;i++)
            {
                if(m[i]>=0)
                    res=res+SYMBOLS[m[i]];
                else break;
            }
            flag=false;
        }else res[0]=SYMBOLS[m[0]];
        if(res==password)
        {
            cout << res << endl;
            return 0;
        }
        for(int i=0;i<password_length;i++)
        {
            m[i]=m[i]+1;
            if(m[i]<SYMBOL_COUNT)break;
            m[i]=0;
            flag=true;
        }
    }while(password_length > min_password_length);
    cout << "Password Not Found... like Oleg//\n good luck" << endl;
    return 1;
}