#include <stdio.h>

int main(void) {
    int n;
    // Lecture du nombre d'éléments du tableau
    scanf("%d", &n);

    int tableau[n];
    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    int unique[n]; // Tableau pour stocker les valeurs uniques
    int k = 0;     // Compteur pour les éléments uniques

    // Parcours du tableau et copie des valeurs non doublonnées
    for (int i = 0; i < n; i++) {
        int dejaPresent = 0;
        // Vérifier si l'élément est déjà dans le tableau unique
        for (int j = 0; j < k; j++) {
            if (tableau[i] == unique[j]) {
                dejaPresent = 1;
                break;
            }
        }
        if (!dejaPresent) {
            unique[k] = tableau[i];
            k++;
        }
    }

    // Affichage du résultat conforme à l'exemple
    printf("Après suppression des doublons : ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}