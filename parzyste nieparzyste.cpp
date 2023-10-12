#include <iostream>

using namespace std;

int liczba;
int dzielenie;

int main()
{
    cout << "Program sprawdzajączy czy liczba jest parzysta, nieparzysta lub jest 0" << endl;
    cout << "Proszę podać liczbę: " << endl;

    cin >> liczba;

    dzielenie = liczba % 2;

    if (liczba == 0) {

        cout << "Liczba jest zerem." << endl;

    }
    else if(dzielenie == 0) {

        cout << "Liczba jest parzysta." << endl;

    }
    else {
        
        cout << "Liczba jest nieparzysta." << endl;

    }
    
    cout << "Dziękuję." << endl;

    return 0;

}