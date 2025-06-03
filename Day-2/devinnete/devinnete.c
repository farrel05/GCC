#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreEntre, essais = 0;
    
    // Initialiser le générateur de nombres aléatoires avec l'heure actuelle
    srand(time(NULL));
    
    // Générer un nombre aléatoire entre 1 et 100
    nombreMystere = (rand() % 100) + 1;

    printf("=== Jeu de Devinette ===\n");
    printf("Devinez le nombre entre 1 et 100\n");

    // Boucle jusqu'à ce que l'utilisateur trouve le bon nombre
    do {
        printf("Entrez un nombre : ");
        scanf("%d", &nombreEntre);
        essais++;

        if (nombreEntre < nombreMystere) {
            printf("C'est plus grand !\n");
        } else if (nombreEntre > nombreMystere) {
            printf("C'est plus petit !\n");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre mystère en %d essai(s).\n", essais);
        }
    } while (nombreEntre != nombreMystere);

    return 0;
}
