#include <iostream>
#include <Windows.h>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

   

    string input;
    cout << u8"Är du smyg? ja, nej: " << endl;
    cin >> input;
    if (input==("ja"))
    {
        cout << u8"är du glutenfri? ja, nej: " << endl;
        cin >> input;
        if (input == ("ja"))
        {
            cout << u8"du är extremt tron " << endl;
        }

        else if (input == ("nej"))
        {
            cout << u8"du är lite tron " << endl;
            return 0;
        }
    }
    if (input == ("nej"))
    {
        cout << u8"är du glutenfri? ja, nej: " << endl;
        cin >> input;
        if (input == ("ja"))
        {
            cout << u8"du är lite tron " << endl;
        }

        else if (input == ("nej"))
        {
            cout << u8"du är inte tron " << endl;
            return 0;
        }

    }
    
    cout << endl;;
    return 0;
}
