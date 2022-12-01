//
// Created by Gianluca Leone on 01/12/2022.
//
#include "lib.h"


bool numeroPrimo(int x,int y){
    x--;
    if (x>1){
        if (y%x==0) {
            return false;
        }else{
            numeroPrimo(x,y);
        }
    }else {
        return true;
    }
}
