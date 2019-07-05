#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    char wybor;

    while (true)
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
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
    }
    return 0;
}
