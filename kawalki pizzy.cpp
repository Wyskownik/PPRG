#include <iostream>

using namespace std;

int uczestnicy;
int kawalki;
int podzial;
int organizatorzy;

int main() {

    cout << "Ilu uczestników bierze udział w imprezie?" << endl;

    cin >> uczestnicy;

    cout << "Ile kawałków pizzy jest do podziału?" << endl;

    cin >> kawalki;

    podzial = kawalki/uczestnicy;

    cout << "Każdy z uczestników dostanie "  << podzial << " kawałków pizzy." << endl;

    organizatorzy = kawalki%uczestnicy;

    cout << "Dla organizatorów zostanie " << organizatorzy << " kawałków pizzy." << endl;

return 0;
}