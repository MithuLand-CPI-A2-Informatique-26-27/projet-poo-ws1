#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tirer_nombre(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int comparer(int proposition, int secret) {
    if (proposition < secret) return -1;
    if (proposition > secret) return 1;
    return 0;
}

int main() {
    srand(time(NULL));
    int min = 1, max = 100;
    int secret = tirer_nombre(min, max);
    int proposition
    int essais = 0; 
    int resultat;
    
    return 0;
}
