#include<stdio.h>

int main() {
    int caramelle, persone, testa, non;
    printf("quante caramelle ci sono e quante persone ci sono: ");
    scanf("%d", &caramelle);
    scanf("%d", &persone);

    testa = persone/caramelle;
    non = caramelle - (testa * persone);

    printf("le caramelle a testa sono %d\n", testa);
    printf("le caramelle in più sono %d", non);

    return 0;

}