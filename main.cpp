#include <iostream>
#include "primaLibreria.h"

using namespace std;
int main() {
    int numero;
    cin >> numero;
    if (numero == 0) {
        cout << "numero primo" << endl;
    } else if (numero < 0) {
        return 0;
    } else {

        if (numeroPrimo(numero) == true) {
            cout << "numero primo" << endl;
        } else {
            cout << "numero non primo" << endl;
        }
    }
    return 0;

}
