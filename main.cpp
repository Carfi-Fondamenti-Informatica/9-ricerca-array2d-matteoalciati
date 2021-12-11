#include <iostream>

using namespace std;

#include "lib.h"


int main() {
    int k=0;
    char u;


    char nome[1][20];

    char listanomi [10][20];
    for (int i=0; i<10; i++){

        cin >> listanomi[i];

    }


    for (int i=0; i<10; i++){
        for (int j=0; j<20;j++){
            listanomi[i][j];
            if (listanomi[i][j] >= 65 && listanomi[i][j] <= 90){
                listanomi[i][j] = listanomi[i][j] + 32;
            }
        }

    }


    cin >> nome[0];

    for (int j=0; j<20;j++) {
        listanomi[0][j];
        if (nome[0][j] >= 65 && nome[0][j] <= 90) {
            nome[0][j] = nome[0][j] + 32;
        }
    }



    if (funzione (nome, listanomi, k) == true){
        cout << k;
    } else {
        cout << "non presente";
    }
    return 0;
}
