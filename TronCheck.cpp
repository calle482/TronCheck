#include <iostream>
using namespace std;
    int main()
    {

        bool isSmyg;
        bool isGlutenfri;

        cout << "Du smyg? 0 = false, 1 = true: ";
        cin >> isSmyg;
        cout << "Du glutenfri? 0 = false, 1 = true: ";
        cin >> isGlutenfri;
        cout << endl;;

        if (isSmyg && isGlutenfri) {
            cout << "Du tron";
        }
        else if (isSmyg && !isGlutenfri) {
            cout << "Du typ tron, men inte helt tron";
        }
        else if (!isSmyg && isGlutenfri) {
            cout << "Du typ tron, men inte helt tron";
        }
        else if (!isSmyg && !isGlutenfri) {
            cout << "Du inte tron!!!";
        }
        cout << endl;;
        system("pause");
        return 0;
    }
