#include "lib.h"

bool funzione (char nome[1][20],char listanomi [10][20], int &k){
    int h=0;
    for (int i=0; i<10; i++){
        char a=0;
        char b=0;
        for (int j=0; j<20 and (a==b or a==b+32 or a+32==b or a+32==b+32) ; j++){
            a=listanomi[i][j];
            b=nome[0][j];
            h=j;
            if (a==0 or h==19){
                k=i+1;
                return true;
            }

        }

    }

    return false;

