#include <stdio.h>

int main (void) {
    char prenom[50];
    int age;
    float moyenne;

    printf("Quel est ton prénom ? ");
    scanf("%s", prenom);

    printf("Quel est ton âge ? ");
    scanf("%d ans", &age);

    printf("Quelle est ta note moyenne ? ");
    scanf("%f", &moyenne);

    printf("=== Fiche interactive ===\n");
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d ans\n", age);
    printf("Moyenne : %.2f\n", moyenne);
    return 0;
}