#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    system("color 0A");
    const string SYMBOLS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"; // ⁡⁢⁢⁢posible symbols⁡ ⁡⁢⁢⁣now 62⁡
    const int SYMBOL_COUNT = SYMBOLS.length();
    
    cout << "Enter Password:\n"; string correct_password; cin >> correct_password; // ⁡⁢⁢⁢The password that we will find⁡
    cout << "Enter the maximum password length:\n"; int password_length; cin >> password_length; // ⁡⁣⁢⁢here⁡

    const short max_password_length = 100; // ⁡⁢⁢⁢max posible password length, what user can enter ⁡⁣⁢⁢on 12th code str⁡ ⁡⁢⁢⁣now 100⁡
    short password_index[max_password_length];

    for (int i = 0; i <= password_length; ++i){
        password_index[i] = -1;
    }

    string password = "A";

    while (password_index[password_length] == -1){
        cout << password << "\t";

        if (password==correct_password){
            cout << endl << endl << "Password: " << password << endl;
            cin.get();
            return 0;
        }

        for (int i = 0; i < password_length; i++){
            password_index[i]++;
            if (password_index[i] < SYMBOL_COUNT){
                password[i] = SYMBOLS[password_index[i]];
                break;
            }
            //⁡⁢⁣⁣else⁡
            password_index[i] = 0;
            password[i] = 'A';

            if (password_index[i+1] == -1){
                password_index[i+1] = 0;
                password += "A";
                break;
            }
        }
    }

    if (correct_password == ""){
        cout << "Ты пароль почему не ввел?\n";
    }
    cout << "Password Not Found... like Oleg//\n good luck" << endl;
    cin.get();
    return 1;
}