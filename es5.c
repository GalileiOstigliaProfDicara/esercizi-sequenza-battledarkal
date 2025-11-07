#include<stdio.h>

int main() {
   
   int a, b, c, temp;

   printf("inserisci le tre variabili a, b, c:  ");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   int temp = b;
   b = a;
   a = c;
   c = temp

   printf("a = %d, b = %d, c = %d/n", a, b, c);

   return 0;
}
