#include <stdio.h>
 
int main(void)
{
    int montant_achat = 0, somme_donne = 0, rendu = 0;
    int bill20 = 0, bill10 = 0, bill5 = 0, piece2 = 0, piece1 = 0;   

    printf("Quelle est le montant de vos achats ?\n");
    scanf("%d", &montant_achat);

    printf("Quelle somme avez vous donne ?\n");
    scanf("%d", &somme_donne);

    if (somme_donne < montant_achat)
        {
            printf("Vous n'avez pas donne assez d'argent\n");
            return -1;
        }
    else if(somme_donne == montant_achat)
        {
            printf("Vous avez tous paye !!\n");
            return 0;
        }
    else
        {
            int rendu = somme_donne - montant_achat;

            bill20 = rendu / 20;
            rendu %= 20;
            bill10 = rendu / 10;
            rendu %= 10;
            bill5 = rendu / 5;
            rendu %= 5;

            piece2 = rendu / 2;
            rendu %= 2;
            piece1 = rendu / 1;
            rendu %= 1;

            printf("_____MONNAIE A RENDRE_____");

            if(bill20 > 0)
                {
                    printf("Billet(s) de 20euro : %d\n", bill20);
                }
            if(bill10 > 0)
                {
                    printf("Billet(s) de 10euro : %d\n", bill10);
                }
            if(bill5 > 0)
                {
                    printf("Billet(s) de 5euro : %d\n", bill5);
                }
                
            if(piece2 > 0)
                {
                    printf("Piece(s) de 2euro : %d\n", piece2);
                }
            if(piece1 > 0)
                {
                    printf("Piece(s) de 1euro : %d\n", piece1);
                }
            
        }
    return 0; 
}