
#include "lib.h"
#include <cstring>

bool funzione (char listanomi[10][20],char nome[1][20], int &k ){
    for (int i=0; i<10; i++){
        if (strcmp(listanomi[i], nome[0])==0){
            k=i+1;
            return true;
        }
    }
    return false;
}
