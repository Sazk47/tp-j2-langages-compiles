#include <stdio.h>

int main(void) {
    int choix;
    double valeur;

    printf("=== Convertisseur universel ===\n");
    printf("1. Kilometres -> Miles\n");
    printf("2. Kilogrammes -> Livres\n");
    printf("3. Celsius -> Fahrenheit\n");
    printf("4. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 4) {
        printf("Au revoir !\n");
        return 0;
    }

    printf("Valeur a convertir : ");
    scanf("%lf", &valeur);

    double resultat;
    switch (choix) {
        case 1:
            resultat = valeur * 0.621371;
            printf("%.2lf Kilometres = %.2lf Miles\n", valeur, resultat);
            break;
        case 2:
            resultat = valeur * 2.20462;
            printf("%.2lf Kilogrammes = %.2lf Livres\n", valeur, resultat);
            break;
        case 3:
            resultat = (valeur * 9/5) + 32;
            printf("%.2lf Celsius = %.2lf F\n", valeur, resultat);
            break;
        default:
            printf("Choix invalide !\n");
    }
    return 0;
}
