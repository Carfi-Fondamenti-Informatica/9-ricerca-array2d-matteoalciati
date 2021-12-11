#include <iostream>
#include "lib.h"

using namespace std;


    int main() {
        int k = 0;


        char nome[1][20];

        char listanomi[10][20];
        for (int i = 0; i < 10; i++) {

            cin >> listanomi[i];

        }

        cin >> nome[0];

        if (funzione(listanomi,nome, k )==true){
            cout << k ;
        } else {
            cout << "non presente";
        }

        return 0;
    }
