#include <stdio.h>
#include <stdlib.h>

//grille de 20 * 20
#define LARGEUR 20
#define HAUTEUR 20



typedef struct position_t {
    int x;
    int y;
} Position;


char grille[HAUTEUR][LARGEUR];

void affichagePosition(Position objet) {
    printf(" x = %d, y = %d\n", objet.x, objet.y);
}

void initialisationGrille() {
    for (int i = 0; i < HAUTEUR; i++)
    {
        for (int j = 0; j < LARGEUR; j++)
        {
            grille[i][j] = '.';
        }
        
    }
    
}

void affichageGrille()
{
    for (int i = 0; i < HAUTEUR; i++)
    {
        for (int j = 0; j < LARGEUR; j++)
        {
            printf("%c", grille[i][j]);
        }
        printf("\n");
    }
    
}

void positionnerObjet(Position objet, char symbole) {
    grille[objet.y][objet.x] = symbole;
}

int main() {

    Position joueur = {0, 0};
    Position cible;

    initialisationGrille();
    
    printf("Hello, World!\n");
    cible.x = 5, cible.y = 5;

    //Affichage des valeurs des positions
    printf("Joueur :");
    affichagePosition(joueur);
    printf("Cible :");
    affichagePosition(cible);

    positionnerObjet(joueur, 'J');
    positionnerObjet(cible, 'C');

    affichageGrille();

    return EXIT_SUCCESS;
}