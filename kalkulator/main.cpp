#include <iostream>
#include <cmath>

using namespace std;
int i;
int main()

{

    while(1)
    {

    double x, y;
    cout << "Select a choice from 1 to 5";
    cout << " Adding - 1\n Subtracting - 2 \n Multiplying - 3\n Dividing - 4\n wyjdz - 5\n";
    cin >> i;



    switch(i)
    {
        case 1:
        cout << "Podaj pierwsza liczbe: ";
        cin >> x ;
        cout << "Podaj druga liczbe: ";
        cin >> y;

        cout << "Wynik: " << x + y << "\n";
        break;

        case 2:
        cout << "Podaj pierwsza liczbe: ";
        cin >> x ;
        cout << "Podaj druga liczbe: ";
        cin >> y;
        cout << "Wynik: " << x-y << "\n";
        break;
        case 3:
        cout << "Podaj pierwsza liczbe: ";
        cin >> x ;
        cout << "Podaj druga liczbe: ";
        cin >> y;
        cout<< "Wynik: " << x*y << "\n";
        break;

        case 4:
        cout << "Podaj pierwsza liczbe: ";
        cin >> x ;
        cout << "Podaj druga liczbe: ";
        cin >> y;
        ;
        cout << "Wynik: " << x/y << "\n";
        break;

        default:
        cout << "Koniec\n";
        return 1;

    }}


    return 0;
}
