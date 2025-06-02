#include <stdio.h>

int main(void) {
    int n;
    // Lecture du nombre d'éléments
    scanf("%d", &n);

    int tableau[n];
    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles pour trier le tableau en ordre croissant
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Echange des éléments
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    // Affichage du tableau trié conforme à l'exemple
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}