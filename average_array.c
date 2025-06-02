#include <stdio.h>

int main(void) {
    int n;
    // Lecture du nombre d'éléments dans le tableau
    scanf("%d", &n);

    int tableau[n];
    int somme = 0;

    // Lecture des éléments et calcul cumulatif de la somme
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
        somme += tableau[i];
    }

    // Calcul de la moyenne en utilisant une division en nombre réel
    double moyenne = (double) somme / n;
    
    // Affichage du résultat conforme à l'exemple
    printf("La moyenne est : %.1f\n", moyenne);
    return 0;
}