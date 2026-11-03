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
       
    do {
        printf("Ton essai : ");
        scanf("%d", &proposition);
        essais++;
        
        resultat = comparer(proposition, secret);
        
        if (resultat == -1) {
            printf("Plus grand !");
        } 
        else if (resultat == 1) {
            printf("Plus petit !");
        }
    } 
    while (resultat != 0);


    return 0;
}
