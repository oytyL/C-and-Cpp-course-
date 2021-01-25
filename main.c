//PROGRAMMATION EN C
//Chaque code de chaque video va etre testé soit en le conpilant depuis le cmd ou Visual studio mais TOUS LES CODE SERONT ICI AVEC CHAQUE EXPLICATION

//AFFICHER UN TEXTE
#include <stdio.h> //#include : directive de prépocesseur avec une biblihotèque

int main(void)//Fonction, fonction "main" obligatoire car le compilateurla cherche au début, le point de départ
{
  printf("Bonjour a tous !!!\n");//Instruction
  return 0;//Instruction, qui sont mis dans des fonctions
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//LES VARIABLES
/*
Plusieurs types de variables:
  "int" pour les entiers positifs et negatifs
  "signed ou unsigned char" pour les chaines de caractères
  "float" pour les nombres a virgules
  signed : positifs et negatifs mais unsigned que positifs

MOT RESERVES: voir fiches (on ne peut pas nommer nos variables avec ces mots)
*/


#include <stdio.h>

int main(void)
{ // Déclaration et affectation d'une variables de type "int"
  int aireDuCarre = 0;
  float prixReserve = 125.25;
  signed char = 'A';

  return 0;
}
// convertion (cast) float nombre = 1.23; int nombre_entier = (int)nombre;

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//AFFICHAGE DE VARIABLES

/*
%d : nombre entier (int)
%f : nombre flottant (float)
%c : caractères (char)
%s : chaine de caractères (texte)
%o : nombre en octal (pour les conversions)
%x ou %X : nombre en hexadécimal (pour les conversions)
*/

#include <stdio.h>

int main(void)
{
  int nombre_entier = 45;
  int autre_nombre = 16;

  printf("Le nombre est : %d ou %d\n", nombre_entier, autre_nombre);// affichage de plusieurs variables
  return 0;
}

// POUR AFFICHER PLUSIEURS OU UN ZERO POUR LES "float"
printf("Le nombre float aura 2 chifres apres la vigules %.2f\n", );


// POUR QU'UNE VARIABLES NE CHANGE JAMAIS JE PEUT METTRE DEVANT LE MOT : const float PI = 3.14; (toujours ecrire la variables en MAJ)

/*
Autres mot pour cultur G :
  register et volatile mais deconseillé d'utiliser, sert a passer la variables soit dans le registre ou dans la ram
*/

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//ENTREZ DE DONNES AU CLAVIER

/*
maVariable  : contenu de la variables (ex : maVariable =15;)
&maVariable : adresse ou est stocké la variable
*/
#include <stdio.h>

int main(void)
{
  int ageUtilisateur = 0;// Toujours mettre une valeur par défaut (0)
  printf("Quel age avez-vous ? ");
  scanf("%d", &ageUtilisateur);

  printf("Vous avez %d ans.\n", ageUtilisateur);

  return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//OPERATEURS

/*
LES DIFFERENTS OPERATEURS :
                            + (addition)
                            - (soustraction)
                            * (multiplication)
                            / (division) --> 5/2 = 2
                            % (modulo, le reste d'une division) --> 5%2 = 1
*/

//Je peut afficher mon calcul dans une variable pour ensuite l'afficher ou directement la mettre dans le printf
printf("%d\n",6+4); /* ou */ int calcul = 6+4; printf("%d\n",calcul);

//C'EST UTILE POUR FAIRE UN CALCUL AVEC PLUSIEURS VARIABLES

int nb1 = 1;
int nb2 = 3;
printf("%d\n",nb1+nb2);

/*
<variable> = <variable> + X --> <variable> += X
A = A-X --> A-= X
A = A*X --> A*= X
*/
// EXEMPLE

int niv_player = -1;

printf("Choisir le niveau de depart : ");
scanf("%d\n", &niv_player);

printf("Niv de départ : %d\n",niv_player);

//Le perso fait des quetes

niv_player += 1
printf("Le niv actuel est : %d\n",niv_player);

/*
QUE POUR AJOUTER ET SOUSTRAIRE 1 ON PEUT UTILISER LES INCREMENTATION ET DECREMENTATION
            A++ ++A
            A-- --A
*/

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//CONDITIONS

/*
    OPERATEURS de comparaison :
      == : égal à
      != : différent de
      <  : plus petit que
      >  : plus grand que
      <= : plus petit ou égal à
      >= : plus grand ou égal à

      && : ET
      || : OU
      !  : NOT
*/

#include <stdio.h>

int main(void)
{
  int nombre = 15;

  if (nombre < 20) // if = SI, si nombre est inferieur a 20 faire ce qu'il y a dans les crochets
  {
    printf("Nombre est inférieur a 20.\n", );
  }
  else //Si le if n'est pas verifié faire ce qu'il y a dans les crochets du else
  {
    printf("Nombre est plus grand que 20\n");
  }
}

//On peut juste mettre le nom d'une variable pour des valeurs booléennes
int jeu_demarre = 1;

if (jeu_demarre)
{
    printf("Bienvenue sur le jeu\n", );
}
else
{
  printf("Le jeu n'est pas lance\n", );
}

// Presentation de else if
int age = 10;
//On peut scanf mais c'est juste pour l'EXEMPLE
if(age < 1)
{
    printf("Tu n'est pas ne.\n", );
}
else if(age == 10)// Sinon si age egale à 10 faire le code entre crochets
{
  printf("Tu as 10 ans.\n", );
}
else
{
  printf("Age : %d\n", age);
}

// faire des fourchette dans le if
int age = 10;

if ((age >= 1 && age <=100) || age == 375) // on peut faire des priorités avec des parenthèses
{
  printf("Tu as un age compris entre 1 et 100ans !!\n", );
}

//LE SWITCH (test qui s'effectue que sur des nombres)

int age = 375;

switch (age) {
  case 0:
    printf("Tu as 0 ans\n");
    break;// sert a quitter le switch

  case 15:
    printf("Tu as 15 ans.\n");
    break;

  default: // sert si aucune "case" n'est pris en compte et a mettre en priorité du debut du switch
    printf("Tu as ni 0 ans, ni 15 ans\n");
    break;
}

//Ternaire (test sur une seule ligne)

int age = 15;
(age == 15) ? printf("Tu as 15 ans\n") : printf("Tu n'as pas 15 ans\n");
//OU
int age = 15;
int quinze_ans = -1;
quinze_ans = (age == 15) ? 1 : 0;//si c'est vrai c'est égale à 1 si c'est faux égale à 0

printf("Il a quinze ans = %d\n", quinze_ans);

----------------------------------------------------------------------------------------------------------------------

//LES BOUCLES (While, Do..While et For)
//sert a parcourir plusieurs choses
//La boucle While : 

#include <stdio.h>

int main(void)
{
  int i = 0; // compteur par convention on le nomme i ou j ou k 
  while(i < 20)
  { // while = Tant que, ici tant que i est plus petit que 20
    printf("AYAYAIII\n"); //cela va donc afficher 20 fois cette phrase
    i++; //incrémentation, condition d'arrêt sinon on a une boucle infini
  }
  return 0;
}

//La boucle Do..While :

#include <stdio.h>

int main(void)
{
  int i = 0;
  
  do //Avec le Do..While, il y a au moins 1 affichage/ce qu'il y a dans le do mais après on fait le test   
  {
    printf("Aya !\n");// au moins un affichage de cette fonction 
  }
  while(i < 20);

  return 0;
}

//La boucle For :

#include <stdio.h>

int main(void)
{
  int i; //déclaration de la variable
  
  //ex : for(1 étape; 2 étapa; 3 étape)
  for(i = 0/*pour i partant de ici 0*/; i < 5 /*ici représente le tant que*/; i++/*l'incrémentation du i, le pas*/)
  {
    printf("Aya !\n")
  }
  return 0;
}
/*
Mot clés qu'on peut mettre dans les boucles : 
-break;
*/

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//LES FONCTIONS

/*
  Exemple de fonctions :
      -printf()
      -scanf()

  -les fonctions doit faire une seule chose, pas plusieurs.
*/

#include <stdio.h>

int main(void)
{
  //Ex : positionne une balle a l'exécution d'un jeu
  //En temps normal :
  int BalleX;
  int BalleY;

  BalleX = 0;
  BalleY = 0;

  //Une partie se fait : 

  BalleX = 175;
  BalleY = 80;

  //recommence : 
  BalleX = 0;
  BalleY = 0;
  /*
    REPETITION DE CODE, PENSER A METTRE DANS UNE FONCTION.
    EX : si on veut changer l'initilisation de la balle, il faut tout changer sur des miliers de ligne

  */
  return 0;
}
//Cretation de fonction
/*
  -porte un nom, comme les variables;
  -prends en compte des paramètres, leurs type
  -retourne une valeur : int, chaine de caractères ou ...
  -FONCTION "main" OBLIGATOIRE : "int main(void){}"
  -quand elle n'a aucun paramètres, on met le mot "void", ex : int main() = int main(void)
  -le int du début correspond au type qu'on va retourner 
*/
#include <stdio.h>
//création d'une fonction, (rapport avec l'ex du dessus) : 
int init_ball(int posX)// renvoi l'abscisse de la balle 
{
  posX = 150;
  return posX; // apres un return on quitte la fonction, le code après ne se sera pas pris en compte
}

int main(void)
{
  int BalleX; 

  BalleX = init_ball(BalleX);

  //Une partie se fait : 

  BalleX = init_ball(BalleX);
  // si on veut changer la valeur de la balle, on le change directement dans la fonction
  
  return 0;
}
/*
  Normalement la fonction "main" est la dernière, mais si on veut on peut la mettre en première;
  grace au prototype, .
  Exemple le code au dessus devient : 
*/
#include <stdio.h>

int init_ball(int posX); // Voici le prototype et la fonction "main" est première
// posX n'est obligatoire, il faut le type MAIS toujours mieux mettre le nom 
int main(void)
{
  int BalleX; 

  BalleX = init_ball(BalleX);

  //Une partie se fait : 

  BalleX = init_ball(BalleX);
  
  return 0;
}

int init_ball(int posX)
{
  posX = 150;
  return posX;
}

/*
  A SAVOIR : 
    -ici BalleX n'existe pas dans la fonction "init_ball" et posX n'existe pas dans la fonction "main"
    -Quand une fonction se termine, apres le return les variables déclaré localement, elles sont DÉTRUITES.
    -posX et BalleX ne sont pas les mêmes variables
*/

//FONCTION QUI NE RETOURNE RIEN 
#include <stdio.h>

void bonjour(void) 
{
  printf("Bonjour ! \n");
}

int main(void)
{
  bonjour();
  return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//PROGRAMMATION MODULAIRE ET PORTEE DES VARIABLES

/*
  Modularité : 
    -utilisation de fichiers d'entête comme stdio.h où on va piocher pour certaines fonctions, comme : printf et scanf
    -on parle de bibliothèques et non de librairies car library en anglais se traduit en bibliothèque
    -consiste en la création de plusieurs fichiers, pour mieux présenter notre code

  Fichiers : 
    -ici, création de plusieurs fichiers (3) : le main.c, le player.c et le player.h
    -.h pour header, la fiche de description d'un fichier .c, va contenir les prototypes des fonctions crées dans le fichiers .c, ici player.c

*/

//------------------SANS FICHIERS------------------
#include <stdio.h>

void bonjour(void);

int main(void)
{
  bonjour();
  return 0; 
}

void bonjour(void)
{
  printf("Bonjour !\n");
}

//------------------AVEC FICHIERS------------------

//Pour débuguer tous les fichiers en même temps : "gcc *.c -o (nom_du_fichier)", l'étoile correspond à prendre tous les fichier en .c

//------------------main.c------------------ 

#include <stdio.h>
#include "player.h" //on inclut notre fichier player.h, avec des guillemets car c'est notre fichiers

int main(void)
{
  bonjour();

  int level = 15;
  
  printf("Niv actuel : %d \n", level)
  level = reset_niveau();
  printf("Niv après reset : %d \n", level)

  printf("Niv = %d \n", augmente_niv()); 
  printf("Niv = %d \n", augmente_niv());
  printf("Niv = %d \n", augmente_niv());
    /*Sans le "static" :
          Niv = 2
          Niv = 2
          Niv = 2
      Avec le "static" :
          Niv = 2
          Niv = 4
          Niv = 6
    */

  return 0; 
}

//------------------player.c------------------ 
#include <stdio.h>
#include "player.h"// a inclure dans le .c car on les utilisent 
//varibles globales, à éviter 
int TVA =20; //ou 
static TVA =20; // forcer le compilateur à utiliser la variables, sera dispo que dans le fichier où elle à été déclarée 

void bonjour(void)
{
  printf("Bonjour !\n");
  printf("TVA = %d\n", TVA)
}

int reset_niveau(void)
{
  int niveau;

  niveau = 0;

  return niveau;
}

int augmente_niv(void)
{
  static int niveau = 0; //"static" évite de faire détruire la variable a chaque itération

  niveau += 2;

  return niveau; //a chaque fois sans le mot static, la variable est détruite et si on l'appelle, elle sera toujours égale a 2
}

//"static" devant une fonction, permet d'appeler la fonction que dans le fichier, ici player.c

//------------------player.h------------------ 

#ifndef PLAYER_H // a mettre pour des problèmes d'inclusion de fichiers, les noms PLAYER_H doivent être les mêmes
#define PLAYER_H

void bonjour(void);
int reset_niveau(void);
int augmente_niv(void);

#endif



