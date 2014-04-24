//
//  main.cpp
//  20140424Barbiero3097
//
//  Created by Leonardo Barbiero on 24/04/14.
//  Copyright (c) 2014 Leonardo Barbiero. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void generaArray(int a[], int max, int min, int dim) {
    int n; //numero generato casualmente
    for(int i = 0; i < dim; i++) {
        n = (rand() % (max - min + 1)) + min; //generiamo un numero casuale
        a[i] = n; //assegnamo all'array nella posizione iiesima il valore n
    }
}

void scriviArray(int a[], int dim, int nValCol) {
    int c = 0; //contatore
    for(int i = 0; i < dim; i++) {
        if (c == nValCol) { //se raggiunge il numero di colonne il contatore precedente
            cout << endl; //va a capo
            c = 0;  //e inizializza il contatore
        }
        cout << setw(8) << a[i] << " "; //stampa numero
        c++; //aumenta contatore
    }
}

void invertiArray(int a[], int b[], int dim) {
    int c1, c2; //contatori
    c1 = dim - 1; //contatore per passare l'ultimo al primo (posizione)
    c2 = 0; //contatore per passare il primo all'ultimo (posizione)
    while(c2 <= dim - 1) { //finché c2 non diventa minore o guale alla  alla dimensione di
        b[c2] = a[c1]; //invertiamo i numeri grazie ai contatori
        //contatori
        c1--;
        c2++;
    }
}

void prodottoArray(int a[],int b[], int p[], int dim) {
    for(int i = 0; i < dim; i++) {
        p[i] = a[i] * b[i];
    }
}

void dividiArray(int a[], int r[], int dim, int num) {
    for(int i = 0; i < dim; i++) {
        r[i] = a[i] / num;
    }
}

int main () {
    
    int a[500]; //array generato
    int b[500]; //array invertito
    int p[500]; //array prodotto
    int r[500]; //array divisione
    int max = 20, //numero massimo
        min = 1, //numero minimo
        dim = 10, //dimensione effettiva array
        nValCol = 10, //numero colonne
        num = 2; //numero per il quale dividiamo
    
    /* La dimensione con il quale ho dichiarato gli array è 500. Per poi agevolare il tutto, l'ho ridotta a 10 tramite variabile*/
    
    cout << "1. Genera array casuale compreso tra un massimo ed un minimo";
    cout << endl << endl;
    generaArray(a, max, min, dim);
    scriviArray(a, dim, nValCol);
    cout << endl << endl;
    
    cout << "2. Stampa un array con un numero di colonne deciso dall'utente allineato a destra";
    cout << endl << endl;
    generaArray(a, max, min, dim);
    scriviArray(a, dim, nValCol);
    cout << endl << endl;
    
    
    cout << "3. Inverti array";
    cout << endl << endl;
    invertiArray(a, b, dim);
    scriviArray(a, dim, nValCol);
    cout << endl;
    scriviArray(b, dim, nValCol);
    cout << endl << endl;
    
    cout << "4. Prodotto tra l'array generato e l'array invertito";
    cout << endl << endl;
    prodottoArray(a, b, p, dim);
    scriviArray(a, dim, nValCol);
    cout << endl << endl;
    scriviArray(b, dim, nValCol);
    cout << endl << endl;
    scriviArray(p, dim, nValCol);
    cout << endl << endl;
    
    cout << "4. Prodotto tra l'array generato e l'array invertito";
    cout << endl << endl;
    dividiArray(a, r, dim, num);
    cout << "Il numero per il quale dividiamo è " << num;
    cout << endl << endl;
    scriviArray(a, dim, nValCol);
    cout << endl << endl;
    scriviArray(r, dim, nValCol);
    
    
    cout << endl << endl;
    fflush(stdin);
    getchar();
    
}


