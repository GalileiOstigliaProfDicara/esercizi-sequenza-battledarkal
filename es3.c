//Esercizio 3 – Parallelepipedo Fatto inserire all’utente le dimensioni di un parallelepipedo scrivere un programma che ne calcoli e restituisca all’utente il volume e l’area delle superfici.

#include <stdio.h>

int main() {
    int volume, area, altezza, larghezza, lunghezza;

    printf("inserisci l'altezza, la lunghezza e la larghezza del rettangolo: ");
    scanf("%d", &altezza);
    scanf("%d", &larghezza);
    scanf("%d", &lunghezza);
    area = larghezza * altezza;

    printf("L'area del parallelepipedo è %d\n", area);
    
    volume = larghezza * altezza * lunghezza;
    printf("il volume del rettangolo è %d", volume);

    return 0;
}