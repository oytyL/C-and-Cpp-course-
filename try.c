#include <stdio.h>
 
int main(void)
{
    int min = 0, max = 0;
    int resultat_sommme = 0;

    printf("_____BIENVENUE DANS LE CALCULATEUR DE SOMME ENTRE 1 ET 1000_____\n");
    do
    {
        printf("Choisissez un nombre minimum entre 1 et 1000\n");
        scanf("%d", &min);

        if(min < 1)
            {
                printf("Votre MIN est inférieur a 1\n");
                
            }
    }
    while(min < 1);

    do
    {
        printf("Choisissez un nombre maximum entre 1 et 1000\n");
        scanf("%d", &max);

        if(max > 1000)
            {
                printf("Votre MAX est supérieur a 1000\n");
                
            }   
    } 
    while(max >1000);
    

    if(min > max)
    {
        printf("SAISIE INCORRECTE\n");
        return -1;
    }
    
    if(min != max)
        {
            for(int i = min; i < max + 1; i++)
                resultat_sommme += i;    
        }
    printf("Somme finale : %d", resultat_sommme);

    return 0; 
}