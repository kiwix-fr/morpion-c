// Morpion Game 2 player by kiwix-fr (kiwix.shell@gmail.com) and thomas-merlen (thomas.merlen@outlook.com)
#include <stdlib.h>
#include <stdio.h>

#define P1 1
#define P2 2 
#define N 3

struct morpion{
	int qui_le_tour;
	char grille[N][N];
	int gagnant;
};

void affichage(struct morpion grille); // Affiche la grille
struct morpion tour_joueur(struct morpion grille); // Fonction qui gère l'intéraction et modifie la grille entre les 2 joueurs
int est_fini(struct morpion grille); // Fonction pour analyser si la partie est fini après chaque tour

/* Fonction Principale */
int main()
{
	char tab_grille[N][N] = {
	{' ', ' ', ' '},
	{' ', ' ', ' '},
	{' ', ' ', ' '}
	};

	struct morpion grille = {P1, 0, tab_grille[3][3], 0};

	tour_joueur(grille);

	return EXIT_SUCCESS;
}

void affichage(struct morpion grille) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %c ", grille.grille[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


struct morpion tour_joueur(struct morpion grille){
	int fini = 0;
	int compteur = 0; 
	int x; /* x ou le joueur va jouer */ 
	int y; /* y ou le joueur va jouer */ 

	while(fini == 0){
	        fini = est_fini(grille);
		if (grille.qui_le_tour == P1){
			if (fini == 0){		      		
				printf("Joueur 1 c'est à vous de jouer\nOu voulez vous jouer ? : ");		
				scanf("%d %d", &x , &y); /* recuperer les valeurs */ 
		       		grille.grille[x][y] = 'x'; /* ajoute x dans le tableau au bon endroit */ 
				compteur += 1;
				affichage(grille); 	
				grille.qui_le_tour = P2;
				
			        if (compteur >= 9){
			                printf("Match nul entre les deux joueurs \n");
			                fini = 1;
			        }	    
			  
			}
		}

		else if (grille.qui_le_tour == P2){
			if (fini == 0){		  
			        printf("Joueur 2 c'est à vous de jouer\nOu voulez vous jouer ? : ");
				scanf("%d %d", &x, &y); 
				grille.grille[x][y] = 'o';
				compteur += 1;
				affichage(grille); 
				grille.qui_le_tour = P1; 
				
			        if (compteur >= 9){
			                printf("Match nul entre les deux joueurs\n");
			                fini = 1;
			        }				
				
			}
		}
	}
}

int est_fini(struct morpion grille){
	for (int i = 0; i<3; i++){
		// Gère les lignes
		if (grille.grille[i][0] == 'x' && (grille.grille[i][1] == 'x' && grille.grille[i][2] == 'x'))
				grille.gagnant = P1;
	        if (grille.grille[i][0] == 'o' && (grille.grille[i][1] == 'o' && grille.grille[i][2] == 'o'))
				grille.gagnant = P2;
		
		// Gère les colonnes
		if (grille.grille[0][i] == 'x' && (grille.grille[1][i] == 'x' && grille.grille[2][i] == 'x'))
				grille.gagnant = P1;
		if (grille.grille[0][i] == 'o' && (grille.grille[1][i] == 'o' && grille.grille[2][i] == 'o'))
				grille.gagnant = P2;
		
		// Gère les diagonales
		if (grille.grille[0][0] == 'x' && (grille.grille[1][1] == 'x' && grille.grille[2][2] == 'x'))
				grille.gagnant = P1;
		if (grille.grille[0][0] == 'o' && (grille.grille[1][1] == 'o' && grille.grille[2][2] == 'o'))
				grille.gagnant = P2;

                if (grille.grille[0][2] == 'x' && (grille.grille[1][1] == 'x' && grille.grille[2][0] == 'x'))
				grille.gagnant = P1;

                if (grille.grille[0][2] == 'o' && (grille.grille[1][1] == 'o' && grille.grille[2][0] == 'o'))
				grille.gagnant = P1;
	}
	// Arrête le jeu
	if (grille.gagnant != 0){
	        printf("Le joueur %d à gagné, bien joué !\n", grille.gagnant);
		return 1;
	}
       	else {
		return 0;
	}
}
