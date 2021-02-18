#include <stdio.h>

int main(void)
{
    int nombre = 0;
    printf("Saisissez un nombre : \n");
    scanf("%d", &nombre);

    printf("Voici votre nombre en octal : %o\n",nombre);
    printf("Voici votre nombre en hexa : %x\n",nombre);

    return 0;

}