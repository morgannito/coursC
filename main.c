/*
 * \author Morgann
 * \date 05/01/2021
 * \version 0.1
 * \file main.c
 * \brief description du fichier
 * \details description detaillé
 */
#include <stdio.h>
#include <string.h>

/*
 * \param int, int
 * \return resultat des 2 nombres
 */

 int somme(int nombre1, int nombre2);
 int multi(int nombre1, int nombre2);
 int div(int nombre1, int nombre2);



/*
 * \main
 */
int main(int argc, char *argv[]) {
    int choix;
    int nb1;
    int nb2;
    int new;
    int test;
    int vide;
    char c ;

   // c = getchar();
   // printf("vous avez tapé : %c",c);
    //printf("\n vous avez tapé : %i",c);

    //inverse ascii vers char
    printf("\n Entrez un nombre : ");
    scanf("%i", &vide);
    printf("vous avez tapé : %c",vide);

    /*
     * function pyramide
     * imprime une pyramide inversé vide puis la pyramide de #
    for(int i = 1 ; i<40; i++){
        vide= 40;
        test = 0;
        while (test < i){
            while (vide > i){
                printf(" ");
                vide = vide -1;
            }
            printf("#");
            printf("#");
            test++;
        }
        printf("\n");
    }
     */

    /*
    for(int i = 1 ; i<15; i++){
       test = 0;
        while (test < i){
            printf("#");
            test++;
        }
        printf("\n");
    }
     */

    /* autre exo
    printf("Entrez 1 multi ou 2 div ou 3  somme  : ");
    scanf("%d", &choix);
    printf("Entrez un 1er nombre : ");
    scanf("%d", &nb1);
    printf("Entrez un 2eme nombre : ");
    scanf("%d", &nb2);
    switch (choix) {
        case 1:
            new = multi(nb1, nb2);
            printf("La multi  est %d\n", new);
            break ;
        case 2:
            new = div(nb1,nb2);
            printf("La div  est %d\n", new);
            break;
        case 3:
            new = somme(nb1,nb2);
            printf("La somme de ces nombres est %d\n", new);
            break;
    }
    */
    return 0;
}

somme(int nombre1, int nombre2) {
    int resultat;
    resultat = nombre1 + nombre2 ;
    return resultat;

}
multi(int nombre1, int nombre2) {
    int resultat;
    resultat = nombre1 * nombre2 ;
    return resultat;

}
div(int nombre1, int nombre2) {
    int resultat;
    resultat = nombre1 / nombre2 ;
    return resultat;

}

