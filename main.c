#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/






// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/


/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon


//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");

    //toucher le code entre les commentaires

    //fonction générer
    int generer(int grille[9][9]) {
        printf("Hello ! Welcome in this game !");  
        printf("\n");  
        printf("---------------------------------");  
        printf("\n");  
        int nonNuls = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                grille[i][j] = rand() % 9 + 1;
                if (grille[i][j] != 0) {
                    nonNuls++;
                }
            }
            printf("---------------------------------");  
            printf("\n");
        }
        system("pause");
        return 0;
    }

    //fontion saisir
    int saisir(int grille[9][9], int* rempli) {
        int i, j, v;
        do {
            printf("Entrez 2 nombres entre 1 et 9 (qui serviront à trouver la case voulue) et une valeur entre 1 et 9 à nouveau :\n");
            scanf("%d %d %d", &i, &j, &v);
            i--;
            j--;
        } while (i < 0 || i >= 9 || j < 0 || j >= 9 || v < 1 || v > 9);
        if (grille[i][j] == 0) {
            grille[i][j] = v;
            (*rempli)++;
        }
    }


    //fonction verifier ligne colonne
    int verifierLigneColonne(int grille[N][N], int orientation, int nombre) {
        int bonneGrille[9] = {0};
        for (int i = 0; i < N; i++) {
            int x = sens == 0 ? i : nombre;
            int y = sens == 0 ? nombre : i;
            int z = grille[x][y];
            if (z == 0) {
                return 0;

            }
            if (bonneGrille[z-1] == 1) {
                return 0;
            }
            bonneGrille[z-1] = 1;
        }
        return 1;
    }

    //fonction verifier region, je ne sais absolument pas comment faire ca :'( ALED
    int verifierRegion(int grille[9][9]){

    }

    //fonction verifier grille
    int verifierGrille(int grille[9][9]) {
    for (int i = 0; i < N; i++) {
        if (verifierLigneColonne(bonneGrille = 1)) {
            printf("Grille juste !")
            return 0;
        }
        if (verifierLigneColonne(bonneGrille = 0)) {
            printf("Grille fausse !")
            return 0;
        }
    }
    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}

// étant très mauvaise en programmation ce sont malheureusement les seules choses que je puisse sortir, l'exercice étant bien trop difficile pour mes compétences actuelles...

