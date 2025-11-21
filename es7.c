#include <stdio.h>

int main () {

  char lettera, grande;
printf("inserisci una lettera dell'alfabeto minuscola:  ");
scanf("%c", &lettera);
printf("Il carattere inserito è %d (ascii %d)\n", lettera, lettera);
grande = lettera - 32;
printf("la lettera maiuscola è: %c\n", grande);
}
