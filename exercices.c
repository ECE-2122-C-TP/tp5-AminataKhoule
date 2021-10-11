#define max 100
#include exercices.h
void exercice2 {
    int monTableau[100];
    int N = 0 ;
    printf("Combien de valeurs souhaitez-vous ajouter ?\n");
    scanf("%d", &N);
    if (N > MAX) {
        printf("Désolé, mais nous ne pouvons stocker que %d valeurs.", N);
        return 1;
    }
    for (i = 0; i < N; i++) {
        printf("Veuillez saisir la valeur n°%d\n", i+1);
        scanf("%f", &monTableau[i]);
    }
    for(i = 1; i < N; ++i)
    {
        if(monTableau[0] < monTableau[i])
            monTableau[0] = monTableau[i];
    }
    printf("Le plus grand élément est %d", monTableau[0]);
    return 0;
}




