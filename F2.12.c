/*
 * Programmeringsteknik med C och Matlab
 * Vårterminen 2022
 * Uppgift 2.12

 * Filnamn:         F2.12.c
 * Beskrivning:     Program som avgör om ett inmatat årtal är ett skottår eller
                    inte.
 * Författare:      Arvid Tottie
 * CS användarnamn: id21ate
 * Datum:
 */
#include <stdio.h>

int main(void) {

  int year;

  printf("Skriv ett år: ");
  scanf("%d", &year);

  if ((year % 400) == 0) {
    printf("%d är ett skottår\n", year);
  }
  else if (((year % 4) == 0) && ((year % 100) != 0)) {
    printf("%d är ett skottår\n", year);
  }
  else {
    printf("%d är inte ett skottår\n", year);
  }
  return 0;
}
