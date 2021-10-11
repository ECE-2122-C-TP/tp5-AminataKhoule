#include <stdio.h>
#include "structures.h"
#define MAX 100


void afficher(N_rat n) {
    printf("%d\n %d\n", n.numerateur , n.denominateur);
}

N_rat somme(N_rat n1 , N_rat n2) {
    N_rat n ;
    n.numerateur = n1.numerateur * n2.denominateur + n2.numerateur * n1.denominateur;
    n.denominateur = n1.denominateur * n2.denominateur;
    return n ;
}

N_rat produit(N_rat n1 , N_rat n2) {
    N_rat n ;
    n.numerateur = n1.numerateur * n2.numerateur ;
    n.denominateur = n1.denominateur * n2.denominateur;
    return(n) ;
}

int pgcd(N_rat n1) {
    int n ;
    if (n1 < n)
    printf(" %d est le pgcd \n" , n1) ;
    else
        printf(" %d est le pgcd \n" , n)
    while ((n1 % n != 0))
    return 0
}
N_rat simplifier(N_rat n) {
    int diviseur = pgcd(N_rat n1) ;
    N_rat resultat;
    resultat = n / diviseur;
    return resultat ;
}
