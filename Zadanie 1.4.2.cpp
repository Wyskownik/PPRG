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

    if (liczba2 > liczba1 || liczba3 > liczba1) {

    }
    else {

        cout << "Liczba 1 jest najwieksza." << endl;

    }
    if (liczba1 > liczba2 || liczba3 > liczba2) {

    }
    else {

        cout << "Liczba 2 jest najwieksza." << endl;

    }
    if (liczba1 > liczba3 || liczba2 > liczba3) {

    }
    else {

        cout << "Liczba 3 jest najwieksza." << endl;

    }

    return 0;

}