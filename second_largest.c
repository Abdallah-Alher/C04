#include <stdio.h>
#include <limits.h>  // Pour INT_MIN

int main(void) {
    int n;
    // Lecture du nombre d'éléments
    scanf("%d", &n);

    int tableau[n];
    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation avec des valeurs très faibles
    int max = INT_MIN;
    int second_max = INT_MIN;

    // Parcours du tableau pour trouver le plus grand et le deuxième plus grand
    for (int i = 0; i < n; i++) {
        if (tableau[i] > max) {
            second_max = max; 
            max = tableau[i];
        } else if (tableau[i] > second_max && tableau[i] < max) {
            second_max = tableau[i];
        }
    }
    
    // Affichage du résultat
    printf("Le deuxième plus grand nombre est : %d\n", second_max);
    return 0;
}