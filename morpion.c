// Morpion Game 2 player by kiwix-fr (kiwix.shell@gmail.com) and thomas-merlen (thomas.merlen@outlook.com)
#include <stdlib.h>
#include <stdio.h>

#define P1 1
#define P2 2 

struct morpion{
	int qui_le_tour;
	int fini;
	char grille[3];
};

void affichage(struct morpion grille);
struct morpion tour_joueur(struct morpion grille);

/* Fonction Principale */
int main()
{

	printf("Salut le bossssss\n");

	return EXIT_SUCCESS;
}
