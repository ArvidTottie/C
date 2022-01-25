/*
 * Programmeringsteknik med C och Matlab
 * Vårterminen 2022
 * Uppgift 3.12

 * Filnamn:         F3.12.c
 * Beskrivning:     Program som producerar en tabell med värden baserat på
                    vilket i-värde som anges av användaren.
 * Författare:      Arvid Tottie
 * CS användarnamn: id21ate
 * Datum:
 */
#include <stdio.h>

int main(void) {

  int n;

  printf("Ange högsta värdet på i: ");
  scanf("%d", &n);

  printf(" i       i*i       i*i*i\n");
  printf("===     =====     =======\n");

  for(int i = 1; i <= n ; i++) {
    printf("%2d%10d%12d\n", i, i * i, i * i * i);
  }
  return 0;
}
