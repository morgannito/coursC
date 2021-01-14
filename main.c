/*
 * \author Morgann
 * \date 05/01/2021
 * \version 0.1
 * \file main.c
 * \brief description du fichier
 * \details description detaillé
 */
#include <stdio.h>
#include <math.h>


// #include <string.h>

/*
 * \param int, int
 * \return resultat des 2 nombres
 */
/*
 int somme(int nombre1, int nombre2);
 int multi(int nombre1, int nombre2);
 int div(int nombre1, int nombre2);
 float sous(float nombre1, float nombre2);*/

int scoreplus(int score);
int fact(int n);
int fibo(int n);

/*
 * \main
 */
int main(int argc, char *argv[]) {










/*
    char CH[10];
    int I, J;
    int PALI;
    printf("Entrez un mot :\n");
    scanf("%s", CH);
    for (J = 0; CH[J]; J++);
    J--;
    PALI = 1;
    for (I = 0; PALI && I < J; I++, J--){
        if (CH[I] != CH[J]){
            PALI = 0;
        }
    }
    if (PALI){
        printf("La chaîne \"%s\" est un palindrome.\n", CH);
    }
    else{
        printf("La chaîne \"%s\" n'est pas un palindrome.\n", CH);
    }
*/

    //  int choix;
/*    int nb1;
    int nb2;
    int resultatsss;
    float test;
    int vide;
    char d ;*/

/*

struct joueur {
    int numero;
    int score;
    int vie;
};

    struct menu {
        char burger[256];
        char accompagnement[256];
        char boisson[256];
        int  numero;
        int client;
    };
    int personne;

    struct menu c[1] ;
    for(int i = 0 ; i<1; i++){
        printf("\n Bienvenue a MCDO \n");
        printf("Vous etes combien de personnes ?");
        scanf("%i", &personne);
        for(int j = 0 ; j< personne ; j++){
            printf("\n Entrez votre choix d'burger :");
            scanf("%s", &c[i].burger);
            printf("Entrez votre choix d'accompagnement :");
            scanf("%s", &c[i].accompagnement);
            printf("Entrez votre choix de boisson :");
            scanf("%s", &c[i].boisson);
            c[i].numero = i + 1;
            c[i].client = j + 1;
            printf("Votre commande : \n - %s ,\n - %s ,\n - %s \n \t Arrive bientot a la table %i clients N%i ! ",c[i].burger,c[i].accompagnement,c[i].boisson, c[i].numero , c[i].client);

        }
    }
*/



/*

    struct date{
        int jour;
        int mois;
        int annee;
    };

    struct carte{
        char prenom[256];
        char nom[256];
        int age;
        float taille;
        struct date naissance ;
    };
    struct carte a;
    printf("entrez votre prenom ?\n");
    scanf("%s", &a.prenom);
    printf("entrez votre nom ?\n");
    scanf("%s", &a.nom);
    printf("entrez votre age ?\n");
    scanf("%d", &a.age);
    printf("entrez votre taille ?\n");
    scanf("%f", &a.taille);
    printf("entrez votre jour de naissance :\n");
    scanf("%i", &a.naissance.jour);

    printf("entrez votre mois de naissance :\n");
    scanf("%i", &a.naissance.mois);
    printf("entrez votre annee de naissance :\n");
    scanf("%i", &a.naissance.annee);

    printf(" nom : %s \n  prenom : %s \n age : %d \n taille : %f \n  date de naissance : %i/%i/%i " ,  a.prenom,a.nom, a.age,a.taille ,  a.naissance.jour , a.naissance.mois , a.naissance.annee) ;



*/



/*

    int tab[10] = { 1, 2, 8, 0, 10, 10, 20, 20, 9, 8 };

    for(int i = 0 ; i<11; i++){
        test = tab[i] + test;
    }
    test =test/10;
    printf("la moyenne : %f \n",test);

*/


  /*  char cd[2][256] ;

    printf("entrez les 3 nom ?\n");
    scanf("%s %s %s", &cd[0] , &cd[1] ,  &cd[2]  );
    printf("vos eleves sont   %s ,  %s , %s", &cd[0] , &cd[1] ,  &cd[2]);

*/






/*
    *//*

    * Calcul des solutions réelles d'une équation du second degré *//*
    int A, B, C;
    double D; *//* Discriminant *//*
    printf("Calcul des solutions réelles d'une équation du second \n");
    printf("degré de la forme   ax^2 + bx + c = 0 \n\n");
    printf("Introduisez les valeurs pour a, b, et c : ");
    scanf("%i %i %i", &A, &B, &C);

    *//* Calcul du discriminant b^2-4ac *//*
    D = pow(B,2) - 4.0*A*C;

    *//* Distinction des différents cas *//*
    if (A==0 && B==0 && C==0) *//* 0x = 0 *//*
        printf("Tout réel est une solution de cette équation.\n");
    else if (A==0 && B==0)  *//* Contradiction: c # 0 et c = 0 *//*
        printf("Cette équation ne possède pas de solutions.\n");
    else if (A==0) *//* bx + c = 0 *//*
    {
        printf("La solution de cette équation du premier degré est :\n");
        printf(" x = %.4f\n", (double)C/B);
    }
    else if (D<0)  *//* b^2-4ac < 0 *//*
        printf("Cette équation n'a pas de solutions réelles.\n");
    else if (D==0) *//* b^2-4ac = 0 *//*
    {
        printf("Cette équation a une seule solution réelle :\n");
        printf(" x =  %.4f\n", (double)-B/(2*A));
    }
    else *//* b^2-4ac > 0 *//*
    {
        printf("Les solutions réelles de cette équation sont :\n");
        printf(" x1 = %.4f\n", (-B+sqrt(D))/(2*A));
        printf(" x2 = %.4f\n", (-B-sqrt(D))/(2*A));
    }*/

  // d = getchar();
   // printf("vous avez tapé : %d",d);
    //printf("\n vous avez tapé : %i",d);

    //inverse ascii vers char
    /*
    printf("\n Entrez un nombre : ");
    scanf("%i", &vide);
    printf("vous avez tapé : %d",vide);
     */

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

    /*
    printf("[1] multi \n");
    printf("[2] div \n");
    printf("[3]somme\n");
    printf("[4] soustraction\n");
    printf("Entrez votre choix d'operation :");
    scanf("%d", &choix);
    printf("Entrez un nombre :");
    scanf("%f", &nb1);
    printf("Entrez un second nombre : ");
    scanf("%f", &nb2);
    switch (choix) {
        case 1:
            resultatsss = multi(nb1, nb2);
            printf("%d * %d =  %d\n", nb1, nb2, resultatsss);
            break ;
        case 2:
            resultatsss = div(nb1, nb2);
            printf("%d / %d =  %d\n", nb1, nb2, resultatsss);
            break;
        case 3:
            resultatsss = somme(nb1, nb2);
            printf("%d + %d =  %d\n", nb1, nb2, resultatsss);
            break;
        case 4:
            resultatsss = sous(nb1, nb2);
            printf("%d - %d = %d\n", nb1, nb2, resultatsss);
            break;
        default:
            printf("Erreur relance l'app");
    }
    */

 /*   int i = 1;
    int j;
    int som;
    while (i <= 10) {
        printf("%d", i);
        j = 1;
        while (j <= 10){
            som = i * j;
            printf("\t | %d ", som);
            j++;
        }
        printf("\n");
        i++;
    }*/
    return 0;
}

/*
float sous(float nombre1, float nombre2) {
    float resultat;
    resultat = nombre1 - nombre2 ;
    return resultat;
}

int multi(int nombre1, int nombre2) {
    int resultat;
    resultat = nombre1 * nombre2 ;
    return resultat;
}

int div(int nombre1, int nombre2) {
    int resultat;
    resultat = nombre1 / nombre2 ;
    return resultat;
}
*/

/*int scoreplus(int score){
    return score+1000;
}*/
/*

int fact(int n){
    if(n==1)return 1;

    return n* fact(n-1);
}


int fibo(int n){
    if (n < 2)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}
*/

