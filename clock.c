/*
 * Filnamn:         clock.c
 * Beskrivning:     Program som låter användare ange ett klockslag och därefter visar programmet 
 *                  en digital klocka som uppdateras varje sekund med hjälp av loopar. 
 * Författare:      Arvid Tottie
 * CS användarnamn: id21ate
 * Datum:           14/03 - 2022
 */
#include <stdio.h>
#include <windows.h>
int main()
{
    int h, m, s;
    // Delay
    int d = 1000;
    printf("Ange timme: ");
    scanf("%d", &h);

    printf("\nAnge minut: ");
    scanf("%d", &m);

    printf("\nAnge sekund: ");
    scanf("%d", &s);

    if (h > 23 || m > 60 || s > 60)
    {
        printf("Ej godtyckligt val! \n");
        exit(0);
    }

    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 23)
        {
            h = 1;
        }
        printf("\n Klockan ");
        printf("\n --------");

        // Skriver tiden i formatet 00:00:00
        printf("\n %02d:%02d:%02d", h, m, s);
        // Sleep funktionen saktar ner while-loopen
        Sleep(d);
        system("cls");
    }
}