#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void startScreen()
{
    cout << "Dobrodošli u CodeLingo!" << endl;
    cout << "1. Igraj!" << endl;
    cout << "2. Rekordi" << endl;
    cout << "9. Izlaz" << endl;
    cout << "Unesite svoj izbor: ";
}

int main()
{
    int izbor;
    while (1)
    {
        startScreen();
        cin >> izbor;
        cin.ignore();

        if (izbor == 1) // Igraj!
        {
        }

        if (izbor == 2) // Rekordi
        {
        }

        if (izbor == 9)
        {
            cout << "Doviđenja!" << endl;
            return 0;
        }
    }
}