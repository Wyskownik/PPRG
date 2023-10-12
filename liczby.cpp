#include <iostream>
using namespace std;

int liczba;

int main ()
{

    cout << "Program sprawdzający czy liczba jest dodatnia, ujemna czy jest 0" << endl;
    cout << "Podaj liczbę: " << endl;
    cin >> liczba;

        if (liczba > 0) { // sprawdzanie czy liczba jest dodatnia 

            cout << "Liczba jest dodatnia" << endl;
            
        }
        else if (liczba < 0) { // sprawdzanie czy liczba jest ujemna
            
            cout << "Liczba jest ujemna" << endl;

        }
        else { // sprawdzanie czy liczba jest zerem

            cout << "Liczba jest zerem" << endl;

        }

    cout << "Dziękuję" << endl;

    return 0;
}