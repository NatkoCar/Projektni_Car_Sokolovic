#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

struct Igrac
{
    char ime[50];
    int bodovi;
    int pitanja;
};

struct Pitanja
{
    string pitanje;
    string tocanOdgovor;
    string odgovor1;
    string odgovor2;
    string odgovor3;
};

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
    cout << "Na koliko pitanja želite odgovoriti? (1-120) ";
    bool z;
    do
    {
        z = false;
        cin >> brPitanja;
        if (!(brPitanja >= 1 && brPitanja <= 120))
        {
            z = true;
            cout << "Pogrešan unos. Unesite ponovno: ";
        }
    } while (z);
    cin.ignore();
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

void leaderboard(int &izbor_L, int brIgraca30, int brIgraca60, int brIgraca90, int brIgraca120, int &izbor)
{
    struct Igrac igrac[41];
    cout << "Koju ljestvicu želite pogledati?" << endl;
    cout << "1. 1-30 pitanja" << endl;
    cout << "2. 31-60 pitanja" << endl;
    cout << "3. 61-90 pitanja" << endl;
    cout << "4. 91-120 pitanja" << endl;
    cout << "0. Izlaz" << endl;
    bool z;
    do
    {
        z = false;
        cin >> izbor_L;
        if (!(izbor_L >= 0 && izbor_L <= 4))
        {
            z = true;
            cout << "Pogrešan unos. Unesite ponovno: ";
        }
    } while (z);

    if (izbor_L == 1)
    {
        int t = brIgraca120 + brIgraca90 + brIgraca60;
        for (int i = 0; i < brIgraca30; i++)
        {
            cout << igrac[i + t].ime << "\t" << igrac[i + t].bodovi << "/" << igrac[i + t].pitanja << endl;
        }
        if (brIgraca30 == 0)
        {
            cout << "Na ljestvici trenutno nema igrača." << endl;
        }
    }

    if (izbor_L == 2)
    {
        int t = brIgraca120 + brIgraca90;
        for (int i = 0; i < brIgraca60; i++)
        {
            cout << igrac[i + t].ime << "\t" << igrac[i + t].bodovi << "/" << igrac[i + t].pitanja << endl;
        }
        if (brIgraca60 == 0)
        {
            cout << "Na ljestvici trenutno nema igrača." << endl;
        }
    }

    if (izbor_L == 3)
    {
        int t = brIgraca120;
        for (int i = 0; i < brIgraca90; i++)
        {
            cout << igrac[i + t].ime << "\t" << igrac[i + t].bodovi << "/" << igrac[i + t].pitanja << endl;
        }
        if (brIgraca90 == 0)
        {
            cout << "Na ljestvici trenutno nema igrača." << endl;
        }
    }

    if (izbor_L == 4)
    {
        for (int i = 0; i < brIgraca120; i++)
        {
            cout << igrac[i].ime << "\t" << igrac[i].bodovi << "/" << igrac[i].pitanja << endl;
        }
        if (brIgraca120 == 0)
        {
            cout << "Na ljestvici trenutno nema igrača." << endl;
        }
    }

    if (izbor_L == 0)
    {
        izbor = 0;
    }
}

int main()
{
    srand(time(0));
    int izbor = 0, brPitanja = 0, brIgraca = 0, brIgraca30 = 0, brIgraca60 = 0, brIgraca90 = 0, brIgraca120 = 0, t = 0, tocnihZaredom = 0, bodovi = 0;
    string ime, pitanje, tocan, odgovor, unos;
    struct Igrac igrac[41];

    // datoteke - leaderboard
    {
        fstream lead120("leaderboard_120.bin", ios::binary | ios::in);
        while (lead120.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca120++;
        }
        lead120.close();

        fstream lead90("leaderboard_90.bin", ios::binary | ios::in);
        while (lead90.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca90++;
        }
        lead90.close();

        fstream lead60("leaderboard_60.bin", ios::binary | ios::in);
        while (lead60.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca60++;
        }
        lead60.close();

        fstream lead30("leaderboard_30.bin", ios::binary | ios::in);
        while (lead30.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca30++;
        }
        lead30.close();
    }

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
            struct Pitanja pita[brPitanja];

            // datoteke - pitanja
            {
                fstream pit("pitanja.txt", ios::in);
                while (pit.read((char *)&pitanje, sizeof(pitanje)))
                {
                    pita[index[t]].pitanje = pitanje;
                    t++;
                    if (t == brPitanja)
                        break;
                }
                pit.close();
                t = 0;
                fstream toc("tocni_odgovori.txt", ios::in);
                while (toc.read((char *)&tocan, sizeof(tocan)))
                {
                    pita[index[t]].tocanOdgovor = tocan;
                    t++;
                    if (t == brPitanja)
                        break;
                }
                toc.close();
                t = 0;
                fstream odg("odgovori.txt", ios::in);
                while (odg.read((char *)&odgovor, sizeof(odgovor)))
                {
                    if (t == 0)
                    {
                        pita[index[t]].odgovor1 = odgovor;
                        t++;
                    }
                    else if (t == 1)
                    {
                        pita[index[t]].odgovor2 = odgovor;
                        t++;
                    }
                    else if (t == 2)
                    {
                        pita[index[t]].odgovor3 = odgovor;
                        t = 0;
                    }
                }
            }

            for (int i = 0; i < brPitanja; i++)
            {
                cout << pita[i].pitanje << endl;
                cout << pita[i].odgovor1 << endl;
                cout << pita[i].odgovor2 << endl;
                cout << pita[i].odgovor3 << endl;
                cin >> unos;
                if (unos != pita[i].tocanOdgovor && tocnihZaredom >= 5)
                {
                    cout << "Posrećilo ti se ovaj put..." << endl;
                    tocnihZaredom = 0;
                }
                else if (unos != pita[i].tocanOdgovor)
                {
                    cout << "Žao nam je, to je netočan odgovor." << endl;
                    break;
                }
                else
                {
                    tocnihZaredom++;
                    bodovi++;
                }
            }
            prazanRed(3);
            cout << "Osvojili ste " << bodovi << " bodova u " << brPitanja << "!" << endl;
            double prosjek = (double)bodovi / (double)brPitanja;
        }

        else if (izbor == 9)
        {
            cout << "Doviđenja!" << endl;
            return 0;
        }

        else if (izbor != 2)
        {
            cout << "Pogrešan unos. Unesite ponovno: ";
        }

        while (izbor == 2) // Rekordi
        {
            int izbor_L;
            clearScreen();
            leaderboard(izbor_L, brIgraca30, brIgraca60, brIgraca90, brIgraca120, izbor);
        }
    }
}