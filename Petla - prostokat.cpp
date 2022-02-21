/* Napisz program drukujący na ekranie prostokąt z literek x.Wysokość
i szerokość prostokąta wczytujemy z klawiatury :
Przykład:
Podaj szerokość prostokąta : 10
Podaj wysokość prostokąta : 5
xxxxxxxxxx
x        x
x        x
x        x
xxxxxxxxxx
*/

#include <iostream>

using namespace std;

int main()
{
    //utworz dwie zmienne do skladowania danych
    int height, width;

    // Pobranie szerokosci z klawiatury
    cout << "Podaj szerokosc prostokata : ";
    cin >> width;

    //Podanie wysokosci z klawiatury
    cout << endl << "Podaj wysokosc prostokata : ";
    cin >> height;
    cout << endl;

    // dwa fory - pierwszy dziala na wysokosci, drugi na szerokosci
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            // jesli pierwsza albo ostatnia iteracja wysokosci, wydrukuj X
            if (i == 1 || i == height)
                cout << "X";
            else
                //jesli pierwsza albo ostatnia iteracja szerokosci, wydrukuj X
                if (j == 1 || j == width)
                    cout << "X";
                // w innym wypadku wydrukuj spacje
                else
                    cout << " ";
        }
        //Stracenie do nowej linii, dzieki temu zaczynamy drukowac kolejna linie pod poprzednia
        cout << endl;
    }
}
