#include "Adresat.h"

void Adresat::ustawID(int noweID)
{
    if (noweID >= 0)
    id = noweID;
}

void Adresat::ustawIDUzytkownika(int noweIDUzytkownika)
{
    if (noweIDUzytkownika >= 0)
    idUzytkownika = noweIDUzytkownika;
}
void Adresat::ustawImie(string noweImie)
{
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko)
{
    nazwisko = noweNazwisko;
}

void Adresat::ustawEmail(string nowyEmail)
{
    email = nowyEmail;
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
{
    numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawAdres(string nowyAdres)
{
    adres = nowyAdres;
}

int Adresat::pobierzID()
{
    return id;
}

int Adresat::pobierzIDUzytkownika()
{
    return idUzytkownika;
}

string Adresat::pobierzImie()
{
    return imie;
}

string Adresat::pobierzNazwisko()
{
    return nazwisko;
}

string Adresat::pobierzEmail()
{
    return email;
}

string Adresat::pobierzNumerTelefonu()
{
    return numerTelefonu;
}

string Adresat::pobierzAdres()
{
    return adres;
}

