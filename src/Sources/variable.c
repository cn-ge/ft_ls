#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int nombreDeVies = 5; // Au départ, le joueur a 5 vies
  float niveau = 3.4;
  
  printf("Vous avez %d vies\n", nombreDeVies);
  printf("**** B A M ****\n"); 
  nombreDeVies = 4;
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
  printf("vous êtes au niveau %f !\n\n", niveau);
    //  %d -> int  
    //  %ld -> long  
    //  %f -> float  
    //  %lf -> double
  


  int age = 0; // On initialise la variable à 0
  
  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n\n", age);
       
  return 0;
}