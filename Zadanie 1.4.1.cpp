#include <iostream>

using namespace std;

int liczba1;
int liczba2;
int liczba3;

int main() {

    cout << "Program sprawdzający która z 3 podanych liczb jest największa." << endl;
    cout << "Proszę o podanie pierwszej liczby: " << endl;

    cin >> liczba1;

    cout << "Proszę o podanie drugiej liczby: " << endl;

    cin >> liczba2;

    cout << "Proszę o podanie trzeciej liczby: " << endl;

    cin >> liczba3;

    if (liczba1 > liczba2 && liczba1 > liczba3) {

        cout << "Liczba pierwsza jest najwieksza liczbą." << endl;

    }
    else if (liczba2 > liczba1 && liczba2 > liczba3) {

        cout << "Liczba druga jest największą liczbą." << endl;

    }
    else {

        cout << "Liczba trzecia jest największą liczbą." << endl;

    }

    return 0;
}