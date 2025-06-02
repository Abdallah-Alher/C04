#include <stdio.h>

int main(void) {
    int n;
    // Lecture du nombre d'éléments dans le tableau (ici 5)
    scanf("%d", &n);

    int tableau[n]; // Déclaration du tableau de taille n

    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation du maximum avec le premier élément
    int max = tableau[0];
    // Parcours du tableau pour trouver le plus grand
    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    
    // Affichage du résultat conforme à l'exemple
    printf("Le maximum est : %d\n", max);
    return 0;
}