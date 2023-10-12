#include <iostream>

using namespace std;

int liczba1;
int liczba2;
int liczba3;
int najwieksza;

int main() {

    cout << "Program sprawdzający która z 3 podanych liczb jest największa." << endl;
    cout << "Proszę o podanie pierwszej liczby: " << endl;

    cin >> liczba1;

    cout << "Proszę o podanie drugiej liczby: " << endl;

    cin >> liczba2;

    cout << "Proszę o podanie trzeciej liczby: " << endl;

    cin >> liczba3;

    najwieksza = liczba1; //przypisanie pierwszej liczby jako największej liczby

    if (liczba2 > najwieksza) { //sprawdzenie czy 2 liczba jest większa od 1 liczby

        najwieksza = liczba2; //przypisanie drugiej liczby jako największej liczby

    }
    if (liczba3 > najwieksza) { //sprawdzenie czy 3 liczba jest większa od największej liczby (1 lub 2)

        cout << "Liczba 3 jest największa." << endl; //w przypadku gdy 3 liczba jest większa niż 1 lub 2 to liczba 3 jest największa

    }
    else if (liczba1 >= najwieksza) {

        cout << "Liczba 1 jest największa." << endl; //w przypadku gdy liczba 3 nie jest większa niż liczba 1 lub liczba 2 => wypisanie że liczba 2 jest największa

        // co w przypadku gdy liczba 1 jest największa?? 

    }
    else {

        cout << "Liczba 2 jest największa." << endl;

    }
    return 0;
}