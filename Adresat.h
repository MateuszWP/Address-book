#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string email;
    string numerTelefonu;
    string adres;

public:
    void ustawID(int noweID);
    void ustawIDUzytkownika(int noweIDUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawEmail(string nowyEmail);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawAdres(string nowyAdres);

    int pobierzID();
    int pobierzIDUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzEmail();
    string pobierzNumerTelefonu();
    string pobierzAdres();

};
#endif
