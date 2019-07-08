#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt", "Adresaci_tymczasowo.txt");

    char wybor;

    while (true)
    {
        wybor = MetodyPomocnicze::wybierzOpcjeZMenuGlownego();

        switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
            break;
        case '2':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '3':
            ksiazkaAdresowa.logowanieUzytkownika();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':

                break;
            case '3':

                break;
            case '4':

                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                //edytujAdresata(adresaci);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowywanieUzytkownika();
                break;
            }
        }
    }

    /*while (true)
    {
        system("cls");
        cout << "    >>> MENU  GLOWNE <<<" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Wyswietl wszystkich uzytkownikow" << endl;
        cout << "2. Rejestracja" << endl;
        cout << "3. Logowanie" << endl;
        cout << "4. Dodaj adresata" << endl;
        cout << "5. Zmiana hasla uzytkownika" << endl;
        cout << "6. Wyloguj" << endl;
        cout << "7. Usun adresata" << endl;
        cout << "9. Koniec programu" << endl;
        cout << "---------------------------" << endl;
        cout << "Twoj wybor: ";

        cin >> wybor;

        switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
            system("pause");
            break;
        case '2':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '3':
            ksiazkaAdresowa.logowanieUzytkownika();
            break;
        case '4':
            ksiazkaAdresowa.dodajAdresata();
            break;
        case '5':
            ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
            break;
        case '6':
            ksiazkaAdresowa.wylogowywanieUzytkownika();
            break;
        case '7':
            ksiazkaAdresowa.usunAdresata();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
    }*/
    return 0;
}
