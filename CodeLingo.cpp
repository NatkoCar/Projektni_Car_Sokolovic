#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

struct Igrac
{
    string ime;
    int bodovi;
    int pitanja;
    double prosjek;
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

void Zlatko(string &ime, int &brPitanja)
{
    if (ime == "Zlako Damijanić")
    {
        brPitanja = 10;
    }
}

void Zpitanja(int index[])
{
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
            index[i] = rand() % 120;
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
    ifstream lead30("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_30.bin", ios::binary | ios::out);
    ifstream lead60("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_60.bin", ios::binary | ios::out);
    ifstream lead90("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_90.bin", ios::binary | ios::out);
    ifstream lead120("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_120.bin", ios::binary | ios::out);

    if (lead30)
    {
        lead30.read((char *)&igrac[brIgraca30], sizeof(Igrac));
        brIgraca30++;
        while (!lead30.eof())
        {
            brIgraca30++;
            lead30.read((char *)&igrac[brIgraca30], sizeof(Igrac));
        }
        lead30.close();
    }

    if (lead60)
    {
        lead60.read((char *)&igrac[brIgraca60], sizeof(Igrac));
        brIgraca60++;
        while (!lead60.eof())
        {
            lead60.read((char *)&igrac[brIgraca60], sizeof(Igrac));
            brIgraca60++;
        }
        lead60.close();
    }

    if (lead90)
    {
        lead90.read((char *)&igrac[brIgraca90], sizeof(Igrac));
        brIgraca90++;
        while (!lead90.eof())
        {
            lead90.read((char *)&igrac[brIgraca90], sizeof(Igrac));
            brIgraca90++;
        }
        lead90.close();
    }

    if (lead120)
    {
        lead120.read((char *)&igrac[brIgraca120], sizeof(Igrac));
        brIgraca120++;
        while (!lead120.eof())
        {
            lead120.read((char *)&igrac[brIgraca120], sizeof(Igrac));
            brIgraca120++;
        }
        lead120.close();
    }

Ponovo:
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

    if (izbor != 0)
    {
        goto Ponovo;
    }
}

void zapisIgraca(int t, string ime, int bodovi, int brPitanja, double prosjek)
{
    struct Igrac igrac[41];
    igrac[t].ime = ime;
    igrac[t].bodovi = bodovi;
    igrac[t].pitanja = brPitanja;
    igrac[t].prosjek = prosjek;
}

void sortiranjeIgracaPitanja(int brIgraca30, int brIgraca60, int brIgraca90, int brIgraca120)
{
    struct Igrac igrac[41];
    int t = brIgraca120 + brIgraca90 + brIgraca60 + brIgraca30;
    for (int i = 0; i < t - 1; i++)
        for (int j = i + 1; j < t; j++)
            if (igrac[i].pitanja < igrac[j].pitanja)
                swap(igrac[i], igrac[j]);
}

void sortiranjeIgracaProsjek(int brIgraca, int t)
{
    struct Igrac igrac[41];
    for (int i = 0; i < brIgraca - 1; i++)
        for (int j = i + 1; j < brIgraca; j++)
            if (igrac[i + t].prosjek < igrac[j + t].prosjek)
                swap(igrac[i + t], igrac[j + t]);
}

bool provjeraUnosa(string u, string tocan)
{
    for (int i = 0; i < u.size(); i++)
    {
        u[i] = tolower(u[i]);
        if (!(u[i] == 'a' || u[i] == 'b' || u[i] == 'c'))
        {
            u.erase(i, 1);
            i--;
        }
    }
    if (u == tocan)
        return true;
    else
        return false;
}

int main()
{
    srand(time(0));
    int izbor = 0, brPitanja = 0, brIgraca = 0, brIgraca30 = 0, brIgraca60 = 0, brIgraca90 = 0, brIgraca120 = 0, t = 0, tocnihZaredom = 0, bodovi = 0;
    string ime, pitanje, tocan, odgovor, unos;
    struct Igrac igrac[41];

    // datoteke - leaderboard
    {
        fstream lead120("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_120.bin", ios::binary | ios::in);
        while (lead120.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca120++;
        }
        lead120.close();

        fstream lead90("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_90.bin", ios::binary | ios::in);
        while (lead90.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca90++;
        }
        lead90.close();

        fstream lead60("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_60.bin", ios::binary | ios::in);
        while (lead60.read((char *)&igrac[brIgraca], sizeof(igrac)))
        {
            brIgraca++;
            brIgraca60++;
        }
        lead60.close();

        fstream lead30("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_30.bin", ios::binary | ios::in);
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
            int *index = new int[120];
            for (int i = 0; i < brPitanja; i++)
                index[i] = 0;
            redoslijedPitanja(brPitanja, index);
            struct Pitanja pita[120];
            for (int i = 0; i < brPitanja; i++)
            {
                cout << index[i] << " ";
            }
            prazanRed(1);

            // datoteke - pitanja
            {
                t = 0;
                fstream pit("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\pitanja.txt", ios::in);
                while (getline(pit, pitanje))
                {
                    pita[t].pitanje = pitanje;
                    t++;
                    /*if (t == brPitanja)
                        break;*/
                }
                pit.close();
                t = 0;
                fstream toc("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\tocni_odgovori.txt", ios::in);
                while (getline(toc, tocan))
                {
                    pita[t].tocanOdgovor = tocan;
                    t++;
                    /*if (t == brPitanja)
                        break;*/
                }
                toc.close();
                t = 0;
                int priv = 0;
                fstream odg("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\odgovori.txt", ios::in);
                while (getline(odg, odgovor))
                {
                    if (priv == 0)
                    {
                        pita[t].odgovor1 = odgovor;
                        priv = 1;
                    }
                    else if (priv == 1)
                    {
                        pita[t].odgovor2 = odgovor;
                        priv = 2;
                    }
                    else if (priv == 2)
                    {
                        pita[t].odgovor3 = odgovor;
                        t++;
                        priv = 0;
                    }
                    /*if (t == brPitanja)
                        break;*/
                }
            }

            for (int i = 0; i < brPitanja; i++)
            {
                prazanRed(1);
                cout << pita[index[i]].pitanje << endl;
                prazanRed(1);
                cout << pita[index[i]].odgovor1 << endl;
                cout << pita[index[i]].odgovor2 << endl;
                cout << pita[index[i]].odgovor3 << endl;
                prazanRed(1);
                cin >> unos;
                if (!provjeraUnosa(unos, pita[index[i]].tocanOdgovor) && tocnihZaredom >= 5)
                {
                    prazanRed(1);
                    cout << "Posrećilo ti se ovaj put..." << endl;
                    tocnihZaredom = 0;
                }
                else if (!provjeraUnosa(unos, pita[index[i]].tocanOdgovor))
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
            cout << "Osvojili ste " << bodovi << " bodova u " << brPitanja << " pitanja!" << endl;
            double prosjek = (double)bodovi / (double)brPitanja;
            t = 0;
            if (brPitanja <= 30)
            {
                t = brIgraca120 + brIgraca90 + brIgraca60 + brIgraca30;
                zapisIgraca(t, ime, bodovi, brPitanja, prosjek);
                brIgraca30++;
            }
            else if (brPitanja <= 60)
            {
                t = brIgraca120 + brIgraca90 + brIgraca60;
                zapisIgraca(t, ime, bodovi, brPitanja, prosjek);
                brIgraca60++;
            }
            else if (brPitanja <= 90)
            {
                t = brIgraca120 + brIgraca90;
                zapisIgraca(t, ime, bodovi, brPitanja, prosjek);
                brIgraca90++;
            }
            else
            {
                zapisIgraca(brIgraca120, ime, bodovi, brPitanja, prosjek);
                brIgraca120++;
            }

            sortiranjeIgracaPitanja(brIgraca30, brIgraca60, brIgraca90, brIgraca120);
            t = brIgraca120 + brIgraca90 + brIgraca60;
            sortiranjeIgracaProsjek(brIgraca30, t);
            t = brIgraca120 + brIgraca90;
            sortiranjeIgracaProsjek(brIgraca60, t);
            t = brIgraca120;
            sortiranjeIgracaProsjek(brIgraca90, t);
            sortiranjeIgracaProsjek(brIgraca120, 0);
            fstream data120("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_120.bin", ios::binary | ios::out);
            fstream data90("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_90.bin", ios::binary | ios::out);
            fstream data60("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_60.bin", ios::binary | ios::out);
            fstream data30("C:\\Users\\sokol\\OneDrive\\Dokumenti\\GitHub\\Projektni_Car_Sokolovic\\leaderboard_30.bin", ios::binary | ios::out);
            t = brIgraca120 + brIgraca90 + brIgraca60 + brIgraca30;
            for (int i = 0; i < t; i++)
            {
                if (igrac[i].pitanja <= 30)
                {
                    data30.write((char *)&igrac[i], sizeof(igrac[i]));
                    if (data30.good())
                        cout << "dobarr" << endl;
                    else
                        cout << "sranjek" << endl;
                }
                else if (igrac[i].pitanja <= 60)
                {
                    data60.write((char *)&igrac[i], sizeof(igrac[i]));
                }
                else if (igrac[i].pitanja <= 90)
                {
                    data90.write((char *)&igrac[i], sizeof(igrac[i]));
                }
                else
                {
                    data120.write((char *)&igrac[i], sizeof(igrac[i]));
                }
            }
            data120.close();
            data90.close();
            data60.close();
            data30.close();
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