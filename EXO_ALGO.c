#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*// EXO1

    int Tab[2000];
     int somme;

     printf("Veiller entrer 2000 valeurs : \n");
     for (int i = 0; i < 2000; i++)
     {
         scanf("%d", &Tab[i]);
         somme += Tab[i];
     }
     printf("La somme des éléments du tableau est : %d\n", somme);*/

    // EXO2 MIN MAX

    float Tab[5];
    float min, max;

    printf("Veuillez entrer 10 valeurs : \n");
    scanf("%f", &Tab);

    min = max = Tab[0];

    // Lire les autres
    for (int i = 1; i < 5; i++)
    {
        scanf("%f", &Tab[i]);

        if (Tab[i] < min)
        {
            min = Tab[i];
        }

        if (Tab[i] > max)
        {
            max = Tab[i];
        }
    }

    printf("Le minimum est : %f\n", min);
    printf("Le maximum est : %f\n", max);

    // EXO3 Tableau caracteres
    /*
         char tab[50];
         int occ[256] = {0}; // tableau pour stocker les occurrences (ASCII)
         int i;

         // Saisie des 50 caractères
         printf("Entrer les 50 caracteres :\n");
         for (i = 0; i < 50; i++)
         {
             scanf(" %c", &tab[i]); // espace avant %c pour ignorer les espaces
         }

         // Calcul des occurrences
         for (i = 0; i < 256; i++)
         {
             occ[tab[i]]++;
         }

         // Affichage des occurrences
         printf("\nOccurrences des caracteres :\n");
         for (i = 0; i < 256; i++)
         {
             if (occ[i] > 0)
             {
                 printf("'%c' apparait %d fois\n", i, occ[i]);
             }
         }

        // EXO4 Tableau pairs et impairs

        int tab[50];
        int pairs[50], impairs[50];
        int i, cp = 0, ci = 0;

        // Saisie des 50 entiers
        printf("Entrer 50 entiers positifs :\n");
        for (i = 0; i < 50; i++)
        {
            scanf("%d", &tab[i]);

            // vérifier positif (option simple)
            if (tab[i] <= 0)
            {
                printf("Erreur: entrer un entier strictement positif\n");
                i--; // décrémenter pour refaire la saisie
            }
        }

        // Séparation pairs / impairs
        for (i = 0; i < 50; i++)
        {
            if (tab[i] % 2 == 0)
            {
                pairs[cp] = tab[i];
                cp++;
            }
            else
            {
                impairs[ci] = tab[i];
                ci++;
            }
        }

        // Affichage des pairs
        printf("\nNombres pairs :\n");
        for (i = 0; i < cp; i++)
        {
            printf("%d ", pairs[i]);
        }

        // Affichage des impairs
        printf("\n\nNombres impairs :\n");
        for (i = 0; i < ci; i++)
        {
            printf("%d ", impairs[i]);
        }

        return 0;*/
}
