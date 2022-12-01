#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    int x=0;
    cin >>x;
    if (numero_primo (x,x)) {
        cout << "numero primo" << endl;
        } else {
            cout << "numero non primo" << endl;
    }
    return 0;

}
