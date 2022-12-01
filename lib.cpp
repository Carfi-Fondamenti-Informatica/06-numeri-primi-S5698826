#include "primaLibreria.h"

bool numeroPrimo(int a){
    bool primo = true;
    for (int i=2; i<a; i++){
        int risultato=a%i;
        if (risultato==0 and i<a){
            primo=false;
            break;
        }
    }
    return primo;
}
