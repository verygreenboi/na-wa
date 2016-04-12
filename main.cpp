#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

bool getVowel(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
            break;
        default:
            return false;
            break;

    }
}

bool isNumber(char c){
    // Checks if the char is equal to 0
    // Returns true without verifying
    if (c == '0'){
        return true;
    }

    // Converts char to int
    // If char isn't a number then it returns 0 and we need to deal with that
    int number = atoi(&c);

    // Initialize a new bool with false
    bool isNum = false;

    // Loop from 0-9 and compare converted char with those numbers
    // A match means that char is is a number and isNum bool is set to true
    for (int x = 0; x < 10; x++){
        if (x == number && number != 0){
            isNum = true;
        }
    }
    return isNum;
}

int main()
{

    char x;
    cout << "Enter a lower cased alphabet (a-z) :" << endl;
    cin >> x;
    if (isNumber(x)){
       cout << "==================================="  << endl;
       cout << "= You entered a number            =" << endl;
       cout << "= Hit any key to exit the program =" << endl;
       cout << "==================================="  << endl;
       return 0;
    } else{
        bool isVowel = getVowel(x);
        if (isVowel){
            cout << "==================================="  << endl;
            cout << "= You entered a vowel             =" << endl;
            cout << "= Hit any key to exit the program =" << endl;
            cout << "==================================="  << endl;
        } else {
            cout << "======================================"  << endl;
            cout << "= You entered a consonant            =" << endl;
            cout << "= Hit any key to exit the program    =" << endl;
            cout << "======================================"  << endl;
        }
    }
    return 0;
}
