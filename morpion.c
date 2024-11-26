// Morpion Game 2 player by kiwix-fr (kiwix.shell@gmail.com) and thomas-merlen (thomas.merlen@outlook.com)
#include <stdlib.h>
#include <stdio.h>

#define P1 1
#define P2 2 

struct morpion{
	int qui_le_tour;
	int fini;
	char grille[3][3];
	int gagnant;
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

	struct morpion grille = {P1, 0, tab_grille[3][3], 0};

	// Boucle Principale qui fait tourner le jeu.
	while (!grille.fini){
		printf("test");
	}

	return EXIT_SUCCESS;
}

struct morpion est_fini(struct morpion grille){

	// Condition qui arrête les recherches si on a trouvé un gagnant.
	if (grille.gagnant == 0){
		
		for (int i = 0; i<3; i++){
			// Test pour les lignes
			if (grille.grille[i][0] == 'X' && grille.grille[i][1] == 'X' && grille.grille[i][2] == 'X')
				grille.gagnant = P1;
			if (grille.grille[i][0] == 'O' && grille.grille[i][1] == 'O' && grille.grille[i][2] == 'O')
				grille.gagnant = P2;

			// Test pour les colonnes
			if (grille.grille[0][i] == 'X' && grille.grille[1][i] == 'X' && grille.grille[2][i] == 'X')
				grille.gagnant = P1;
			if (grille.grille[0][i] == 'O' && grille.grille[1][i] == 'O' && grille.grille[2][i] == 'O')
				grille.gagnant = P2;

			// Test pour les 2 diagonales
			if (grille.grille[0][0] == 'X' && grille.grille[1][1] == 'X' && grille.grille[2][2] == 'X')
				grille.gagnant = P1;
			if (grille.grille[0][0] == 'O' && grille.grille[1][1] == 'O' && grille.grille[2][2] == 'O')
				grille.gagnant = P2;
			
			if (grille.grille[0][2] == 'X' && grille.grille[1][1] == 'X' && grille.grille[2][0] == 'X')
				grille.gagnant = P1;
			if (grille.grille[0][2] == 'O' && grille.grille[1][1] == 'O' && grille.grille[2][0] == 'O')
				grille.gagnant = P2;
		}
	}		
	return grille;
}

