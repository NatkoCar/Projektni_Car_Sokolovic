#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

void clearScreen()
{
    printf("\033[2J"
           "\033[1;1H");
}

void prazanRed(int brojPraznihRedova)
{
    for (int i = 0; i < brojPraznihRedova; i++)
        cout << endl;
}

void startScreen()
{
    clearScreen();
    // cout << "Dobrodošli u CodeLingo!" << endl;
    cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << endl;
    cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << endl;
    cout << "⬛⬛⬛🟥🟥⬛⬛⬛⬛🟥🟥⬛⬛⬛🟥🟥🟥⬛⬛⬛🟥🟥🟥🟥⬛⬛🟥⬛⬛⬛⬛⬛🟥🟥🟥⬛⬛🟥⬛⬛⬛🟥⬛⬛⬛🟥🟥⬛⬛⬛⬛🟥🟥⬛⬛⬛" << endl;
    cout << "⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛⬛⬛⬛🟥⬛⬛⬛⬛⬛⬛🟥⬛⬛⬛🟥🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛🟥⬛⬛" << endl;
    cout << "⬛⬛⬜⬛⬛⬛⬛⬛⬜⬛⬛⬜⬛⬛⬜⬛⬛⬜⬛⬛⬜⬜⬜⬛⬛⬛⬜⬛⬛⬛⬛⬛⬛⬜⬛⬛⬛⬜⬛⬜⬛⬜⬛⬛⬜⬛⬛⬛⬛⬛⬜⬛⬛⬜⬛⬛" << endl;
    cout << "⬛⬛⬜⬛⬛⬛⬛⬛⬜⬛⬛⬜⬛⬛⬜⬛⬛⬜⬛⬛⬜⬛⬛⬛⬛⬛⬜⬛⬛⬛⬛⬛⬛⬜⬛⬛⬛⬜⬛⬛⬜⬜⬛⬛⬜⬛⬜⬜⬛⬛⬜⬛⬛⬜⬛⬛" << endl;
    cout << "⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛⬛⬛⬛🟦⬛⬛⬛⬛⬛⬛🟦⬛⬛⬛🟦⬛⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛🟦⬛⬛" << endl;
    cout << "⬛⬛⬛🟦🟦⬛⬛⬛⬛🟦🟦⬛⬛⬛🟦🟦🟦⬛⬛⬛🟦🟦🟦🟦⬛⬛🟦🟦🟦🟦⬛⬛🟦🟦🟦⬛⬛🟦⬛⬛⬛🟦⬛⬛⬛🟦🟦⬛⬛⬛⬛🟦🟦⬛⬛⬛" << endl;
    cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << endl;
    cout << "⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛" << endl;
    cout << "1. Igraj!" << endl;
    cout << "2. Rekordi" << endl;
    cout << "9. Izlaz" << endl;
    cout << "Unesite svoj izbor: ";
}

void unosIgraca(string &ime)
{
    cout << "Unesite svoje ime: ";
    getline(cin, ime);
}

void brojPitanja(int &brPitanja)
{
    cout << "Na koliko pitanja želite odgovoriti? ";
    cin >> brPitanja;
}

void redoslijedPitanja(int brPitanja, int index[])
{
    bool z;
    for (int i = 0; i < brPitanja; i++)
    {
        do
        {
            index[i] = rand() % brPitanja;
            z = false;
            for (int j = 0; j < i; j++)
            {
                if (index[i] == index[j])
                {
                    z = true;
                    break;
                }
            }
        } while (z);
    }
}

int main()
{
    srand(time(0));
    int izbor = 0, brPitanja = 0;
    string ime;

    while (1)
    {
        if (izbor == 0)
        {
            startScreen();
        }

        cin >> izbor;
        prazanRed(1);
        cin.ignore();

        if (izbor == 1) // Igraj!
        {
            unosIgraca(ime);
            prazanRed(1);
            brojPitanja(brPitanja);
            prazanRed(1);
            cout << "Uživajte!";
            prazanRed(3);
            int *index = new int[brPitanja];
            for (int i = 0; i < brPitanja; i++)
                index[i] = 0;
            redoslijedPitanja(brPitanja, index);
            for (int i = 0; i < brPitanja; i++)
                cout << index[i] << " ";
        }

        else if (izbor == 2) // Rekordi
        {
        }

        else if (izbor == 9)
        {
            cout << "Doviđenja!" << endl;
            return 0;
        }

        else
        {
            cout << "Greška. Unesite ponovno: ";
        }
    }
}