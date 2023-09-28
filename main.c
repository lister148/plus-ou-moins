#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX = 100, MIN = 1; // Déclaration du MIN et MAX
int nombreMystere = 0; // Au départ, le nombre est 0
int nombreEntre = 0;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; // Choix d'un nombre au hazard

    //printf("Le nombre mystere est: %d\n", nombreMystere); // ligne pour vérif

do
{
    printf("Quel nombre ? "); // Demande d'entrer un nombre
    scanf("%d", &nombreEntre); // Le stocke

    if (nombreEntre < nombreMystere) // SI Comparaison ok,
        printf("C'est plus!\n"); // Action
    else if (nombreEntre > nombreMystere) // SI non,
        printf("C'est moins!\n"); // Action
    else // Si le bon chiffre,
        printf("Bingo!\n"); // Bingo :-)
} while (nombreEntre != nombreMystere);

    return 0;
}