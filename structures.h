//
// Created by Aminata Khoule on 11/10/2021.
//

#ifndef UNTITLED9_EXERCICES_H
#define UNTITLED9_EXERCICES_H
typedef struct NombreRationnel {
    int numerateur;
    int denominateur;
}N_rat;

N_rat saisie();
void afficher(N_rat n);
N_rat somme(N_rat n1 , N_rat n2);
N_rat produit(N_rat n1 , N_rat n2);
int pgcd(int N_rat n1 ,int  N_rat n2);
N_rat simplifier(N_rat n );


#endif //UNTITLED9_EXERCICES_H

