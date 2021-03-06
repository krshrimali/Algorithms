//
// Created by kushashwa on 14/3/19.
// On reading character arrays
#include <iostream>
#include "Readstring.h"
#include <cstdio>

using namespace std;

/* @brief: Usage function to read string in way of char*. Faciliates reading Para/Line/Word.
 * Parameters: None
 * Returns: None
 */

void read_charstart() {
    int type;
    cout << "Type: (0) - Para, (1) - Line, (2) - Word" << endl;
    cin >> type;

    switch(type) {
        case 0: { // explicit block
            int N;
            cout << "Maximum length of Paragraph: ";
            cin >> N;
            cin.ignore(); // ignore new line character

            cout << "Reading" << endl;
            char* arr; // result
            Readstring read_s(N);
            arr = read_s.returnPara();

            cout << arr << endl;
            break;
        }
        case 1: { // explicit block
            int N;
            cout << "Maximum length of Line: ";
            cin >> N;
            cin.ignore(); // ignore new line character

            cout << "Reading" << endl;
            char* arr; // result
            Readstring read_s(N);

            arr = read_s.returnLine();
            cout << arr << endl;
            break;
        }
        case 2: { // explicit block
            int N;
            cout << "Maximum length of Word: ";
            cin >> N;
            cin.ignore(); // ignore new line character

            cout << "Reading" << endl;
            char* arr; // result
            Readstring read_s(N);
            arr = read_s.returnWord();

            cout << arr << endl;
            break;
        }
        default:
            cout << "Enter only 0, 1 or 2. Other than that, not accepted. Sorry! :)" << endl;
    }
}

/* @brief: Usage Function - Uses #include <cstring> library to use string class
 * Parameters: None
 * Returns: None
 */
void read_cstring() {
    Readstring_c type;
    string s = type.returnString();
    cout << "Read string: " << s << endl;
}

int main() {
    //TODO: Better way of showing these usage functions?
    read_charstart();
    read_cstring();
}