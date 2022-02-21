/*
Napisz program w którym użytkownik podaje rozmiar tablicy,
1. Program rezerwuje pamięć na tablicę o podanym przez użytkownika rozmiarze.
2. Wypełniamy tablicę liczbami podawanymi przez użytkownika.
3. Wypisujemy zawartość tablicy. oraz obliczoną średnią arytmetyczną liczb
zapisanych w tablicy
5, Zwalniamy pamięć
Przykład działania programu:
Podaj rozmiar tablicy:
5
Podaj liczbę 1:
2
Podaj liczbę 2:
3
Podaj liczbę 3:
4
Podaj liczbę 4:
5
Podaj liczbę 5:
5
W tablicy są następujące liczby:
2 3 4 5 5
Średnia wynosi: 3.8
*/
#include <iostream>

using namespace std;

int main()
{
    //deklaracja zmiennych - inicjalizacja zmiennej typu float
    int rozmiar, liczba;
    float total = 0;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> rozmiar;
    //utworzenie tablicy o rozmiarze podanym przez uzytkownika
    int* tablica = new int[rozmiar];

    //przypisanie liczb w kolejne miejsca tablicy
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj liczbe " << i + 1 <<":" <<endl;
        cin >> liczba;
        tablica[i] = liczba;
    }

    //odczyt liczb w tablicy - policzenie lacznego wyniku tablicy
    cout << "W tablicy sa nastepujace liczby:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        total += tablica[i];
        cout << tablica[i] << " ";
    }
    cout << endl<< "Srednia liczb wynosi: " << total / rozmiar;
    //zwolnienie zasobow
    delete tablica;
}


