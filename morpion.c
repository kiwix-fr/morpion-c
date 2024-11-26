// Morpion Game 2 player by kiwix-fr (kiwix.shell@gmail.com) and thomas-merlen (thomas.merlen@outlook.com)
#include <stdlib.h>
#include <stdio.h>

#define P1 1
#define P2 2 

struct morpion{
	int qui_le_tour;
	int fini;
	char grille[3][3];
};

void affichage(struct morpion grille); // Affiche la grille
struct morpion tour_joueur(struct morpion grille); // Fonction qui gère l'intéraction et modifie la grille entre les 2 joueurs
struct morpion est_fini(struct morpion grille); // Fonction pour analyser si la partie est fini après chaque tour

/* Fonction Principale */
int main()
{
	
	char tab_grille[3][3] = {
	{' ', ' ', ' '},
	{' ', ' ', ' '},
	{' ', ' ', ' '}
	};

	struct morpion grille = {P1, 0, tab_grille[3][3]};

	// Boucle Principale qui fait tourner le jeu.
	while (!grille.fini){
		printf("test");
	}

	return EXIT_SUCCESS;
}

struct morpion est_fini(struct morpion grille){
	
	// Gère le cas de victoire sur les lignes
	

	return grille;
}
