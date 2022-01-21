/*
 * Programmeringsteknik med C och Matlab
 * Vårterminen 2022
 * Uppgift 2.13

 * Filnamn:         F2.13.c
 * Beskrivning:     Program som givet ett heltal 1-4, skriver ut vilken läsk
                    man valt med hjälp av en switch-sats.
 * Författare:      Arvid Tottie
 * CS användarnamn: id21ate
 * Datum:
 */
#include <stdio.h>
int main(void) {
  int choice;
  printf("1: Coca Cola\n");
  printf("2: Fanta\n");
  printf("3: Sprite\n");
  printf("4: Coca Cola Light\n");
  printf("Please choose bevarge: ");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
        printf("You've chosen Coca Cola\n");
        break;
    case 2:
        printf("You've chosen Fanta\n");
        break;
    case 3:
        printf("You've chosen Sprite\n");
        break;
    case 4:
        printf("You've chosen Coca Cola Light\n");
        break;
        default:
            printf("Unfortunately there is no soda matching that number\n");
  }
  return 0;
}
