#include <iostream>
#include "NumberGuessingGame.h"

using namespace std;


int main() {
    NumberGuessingGame::init();
    NumberGuessingGame numberGuess(8);

    cout << "Welcome To Number Guessing Game......\n";
    cout << "Please Select An Action: \n";
    cout << "[1] Guess One Digit\n";
    cout << "[2] Guess One Number\n";
    cout << "[3] Guess A Password (characters)\n";
    cout << "[4] Guess A Complex Password (character + digits + symbols)\n";
    int choice; cin >> choice;
    int trails = 3;
    if(choice == 1){
        cout << "Enter the Interval(ex 1-10): ";
        int num1 ; char s ; int num2;
        cin >> num1 >> s >> num2;
        int number , num;
        num = numberGuess.GenerateDigits(num1, num2);

        do {

            cout << "Trails " << trails << endl;
            cout << "Guess The Number: ";
            int number;
            cin >> number;

            if(number < num){
                cout << "The Number Maybe Bigger\n";
                trails--;
                continue;
            }else if(number > num){
                cout << "The Number maybe Smaller\n";
                trails--;
                continue;


            }else{
                cout << "Correct !! , You won\n";
                break;
            }
        }while(trails != 0);

        if(trails <1){
            cout << "You Loose"<<endl;
            cout << "The number Was " << num << endl;
        }
    }

    else if(choice == 2){
        cout << "You will have to Guess A Number of 8 digits, there's no trails...\n";
        cout << "Enter Your Number: ";
        int num ; cin >> num;
        string number = numberGuess.GenerateDigits();
        if(to_string(num) == number){
            cout << "CORRECT , WOW You're Aweasom !!" << endl;
        }
        else{
            cout << "You loose , The Number was " << number << endl;
        }
    }

    else if(choice == 3){
        cout << "You will have to Guess A Password of 8 Characters from a-z, there's no trails...\n";
        cout << "Enter Your Password: ";
        string num ; cin >> num;
        string number = numberGuess.GenerateChars();
        if(num == number){
            cout << "CORRECT , WOW You're Aweasom !!" << endl;
        }
        else{
            cout << "You loose , The Number was " << number << endl;
        }
    }

    else if(choice == 4){
        cout << "You will have to Guess A Complex Password of(digits,chars,symbols) , there's no trails...\n";
        cout << "Enter Your Password: ";
        string num ; cin >> num;
        string number = numberGuess.GenerateComplix();
        if(num == number){
            cout << "CORRECT , WOW You're Aweasom !!" << endl;
        }
        else{
            cout << "You loose , The Number was " << number << endl;
        }
    }


}
