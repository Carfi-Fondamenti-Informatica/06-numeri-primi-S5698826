#include "primaLibreria.h"

int potenza(int a,int b){
    int risultato=1;
    for(int i=0;i<b;i++){
        risultato = risultato*a;
    }
    return risultato;
}

int potenza(int a){
    return a*a;
}

int fattoriale(int a){
    int result = 1;
    while(a>1){
        result = result*a;
        a--;
    }
    return result;
}
