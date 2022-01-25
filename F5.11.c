/*
 * Programmeringsteknik med C och Matlab
 * Vårterminen 2022
 * Uppgift 5.11

 * Filnamn:         F5.11.c
 * Beskrivning:     Program som låter användare ange valfri tempratur och sedan
                    konvertera vald tempratur till antigen fahrenheit eller
                    celcius.
 * Författare:      Arvid Tottie
 * CS användarnamn: id21ate
 * Datum:
 */
#include <stdio.h>

void printMenu(void);
int readChoice(void);
void checkChoice(int choice);
double readTemprature(int choice);
double calculateNewTemperature(int choice, double temp);
void printResults(int choice, double temp, double newTemp);

int main(void) {
  int choice;
  double temprature;
  double newTemprature;

  do {
    printMenu();
    choice = readChoice();
    checkChoice(choice);
  } while (choice < 1 || choice > 2);

  temprature = readTemprature(choice);
  newTemprature = calculateNewTemperature(choice, temprature);
  printResults(choice, temprature, newTemprature);

  return 0;
}

void printMenu(void) {
  printf("1: Omvandla från F till C\n");
  printf("2: Omvandla från C til C\n");
}

int readChoice(void) {
  int choice;

  printf("Ditt val: ");
  scanf("%d", &choice);

  return choice;
}

void checkChoice(int choice) {
  if(choice < 1 || choice > 2) {
    printf("Felaktigt val\n");
  }
}

double readTemprature(int choice) {
  double temp;

  if(choice == 1) {
    printf("Tempratur i Fahrenheit: ");
  }
  else {
    printf("Tempratur i Celsius: ");
  }
  scanf("%lf", &temp);

  return temp;
}

double calculateNewTemperature(int choice, double temp) {
  double newTemp;

  if(choice == 1) {
    newTemp =(temp - 32) / (9.0/5.0);
  }
  else {
    newTemp = (9.0/5.0) * temp + 32;
  }
  return newTemp;
}

void printResults(int choice, double temp, double newTemp) {
  if(choice == 1) {
    printf("%.2f F är %.2f C\n", temp, newTemp);
  }
  else {
    printf("%.2f C är %.2f F\n", temp, newTemp);
  }
}
