#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// les guillemets " " pour inclure un fichier se trouvant dans le répertoire de votre projet (à côté des.c, généralement).
// header = prototype (eq. interface décrivant les méthodes)
#include "jeu.h"

// void jouer(SDL_Surface* ecran)
// {
// } 
int main ( int argc, char** argv )
{

        int a = 21;
        int b = 3;
        jouer(a,b);


    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    // Génération du nombre aléatoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");

    } while (nombreEntre != nombreMystere);
    


    return 0;
}