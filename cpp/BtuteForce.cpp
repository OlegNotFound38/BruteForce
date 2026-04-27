#include <iostream>
#include <string>

using namespace std;

int main(){
    const string SYMBOLS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; // ⁡⁢⁢⁢posible symbols⁡ ⁡⁢⁢⁣now 62⁡
    const int SYMBOL_COUNT = SYMBOLS.length();
    
    cout << "Enter Password:\n"; string password; cin >> password;
    cout << "Enter the maximum password length:\n"; int password_length; cin >> password_length;

    while (password_length > 0){
        for (int i = 0; i < password_length; i++){
            
        }

        password_length--;
    }
    
    return 0;
}