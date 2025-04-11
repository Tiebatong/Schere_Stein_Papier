#include <string.h> 
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    char Loesungswort[] = "blume";
    char Nutzereingabe[6];
    for (int runde = 0; runde < 5; runde++)
    {
        
        printf("geben sie ihr Wort ein: \n");
        scanf("%5s", Nutzereingabe);
        printf("\n");
        int punkte = 0;

        

        for (int i = 0; i < 5; i++)
        {
            
            if (Loesungswort[i] == Nutzereingabe[i]) // Buchstabe ist an richtiger Stelle
            {
                printf("\033[1;32m%c", Nutzereingabe[i]);
                punkte++;

            } 
            else if (strchr(Loesungswort, Nutzereingabe[i]) != NULL) // Buchstabe an falscher Stelle
            {
                printf("\033[1;33m%c", Nutzereingabe[i]); 
            }
            else // Buchstabe kommt nicht vor
            {
                printf("\033[1;31m%c", Nutzereingabe[i]); 
            }
            
        }
        printf("\033[0m\n"); // Setzt Farbe zurück

        if (punkte == 5)
            {

                printf("\nGewonnen!\n");
                break;
            }
       
    }
    

    system("pause");
    return 0;
}