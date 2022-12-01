//
// Created by Gianluca Leone on 01/12/2022.
//
#include "primaLibreria.h"

bool numeroPrimo(int x){
    bool primo = true;
    for (int i=2; i<x; i++){
        int risultato=x%i;
        if (risultato==0 and i<x){
            primo=false;
            break;
        }
    }
    return primo;
}
