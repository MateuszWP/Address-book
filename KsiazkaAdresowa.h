#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;

    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    , NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami){
      adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowywanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    bool czyUzytkownikJestZalogowany();
    void usunAdresata();
    void edytujAdresata();
    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};
#endif
