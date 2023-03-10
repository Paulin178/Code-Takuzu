//PAULIN CHESTIER


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1 - creer une fonction qui prend la variable solution, et la variable tableauJoueur (par exemple) : un tableau rempli de 2, cette fonction doit copier certaines valeurs (grace au rand() % N) 
// de solution dans tableauJoueur afin d'initialiser une grille jouable ( car solution est bel est bien la solution, donc pas jouable par définition. ).
// un parametre doit permettre de verifier la condition de victoire en un seul coup (proposer votre façon de faire :) ) 

// 0- une fonction saisir qui demande au joueur de saisir 3 informations: i, j , et v qui permettront de placer la valeur v aux coordonnées (i,j)

// 3- apres chaque coordonnées il faut verifier les regles du takuzu sur le tableauJoueur donc : 

    // - la fonction verifierLigneColonne ( qui verifie les lignes et les colonnes  sur lesquelles sont la nouvelle valeur)
    // - la fonction verifierGrille (qui fait ceci pour toute la grille et permet de definir la condition de victoire)

// 4 - Ecrire le code principal qui permet de jouer au joueur :  le programme prend fin quand on gagne 


void copyTab(int tab[8][8], int copyTableau[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 9; j++){
            copyTableau[i][j] = tab[i][j];
    }
}
}

void afficher(int tab[8][8]){
    printf("| i\\j  ");

    for(int i = 0; i < 9; i++){
        printf("| %d ", i);
    }
        printf("|\n");

    for(int i = 0; i < 9; i++){
        printf("----");
    }

    for(int i = 0; i < 9; i++){
        printf("\n");
        printf("| %d >  ", i);
        for(int j = 0; j < 9; j++){
            printf("| %d ", tab[i][j]);
        }
        printf("|\n");
    }
        printf("\n");

}

// definition des règles
int verifierLigneColonne(int tab[8][8]){
    int saisie[8] =  {2,2,2,2, 2,2,2,2};
    int result = 0;
    int v = 1 ; 0;
    for (int j = 0; j < 1; j++ )
    {
        if (saisie[1] == saisie[0])
        {
            return result = 1;
        }
        else
        {
            saisie[1] != saisie[0];
        }
            {
            return result = 0;
            }
    for (int i = 0; i<1; i++)
    {
        if (saisie[1] == saisie[0])
        {
            return result = 1;
        }
        else
        {
            saisie[1] != saisie[0];
        }
            {
            return result = 0;
            }
}}
return result;
}

// je verifie s'il y  plus qu'un double côte à côte
int verifierDouble(int tab[8][8]){
   int saisiei = 0;
   int saisiej = 0;
   int saisie =  0;
    for (int i = 0; i < 1; i++ )
   {
       if(tab[saisie]){
           saisiei == saisiej +2;
           printf("Vous avec mis plus d'un double côte à côte");
    }       
     for (int j = 0; j < 1; j++ )
   {
       if(tab[saisie]){
           saisiej == saisiei +2;
           printf("Vous avec mis plus d'un double côte à côte");
      }}}}



void genererTableau(int tab[8][8], int copyTableau[8][8]){
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((rand() % 100)){
                copyTableau[i][j] = tab[i][j];
            }
        }
    }
}

int verifierGrille(int tab[8][8], int i, int j){
    int Correct = 1;
    int verificationLigne = verifierLigneColonne(tab, j, 0);
    int verificationColonne = verifierLigneColonne(tab, i, 0);

    for (int j = 0; j<1; j++){
    
    if (verificationLigne != verificationColonne){
    }
        printf("Vous ne respectez pas les règles");
        Correct = 0;
    }
    for (int i = 0; i<1; i++){
    
    if (verificationLigne != verificationColonne){
    }
        printf("Vous ne respectez pas les règles");
        Correct = 0;
    }
    return Correct;
    }
 


int saisir(int tab[8][8]){

    int result = 0;

    while (result == 0)
    {
        int tableauInit[8][8] = {
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},

            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
        };
        copyTab(tab, tableauInit);
        int saisie = 2;
    
        printf("Veuillez saisir un i\n");
        scanf("%d", &saisie);
        int saisiei = saisie;
        printf("Veuillez saisir un j\n");
        scanf("%d", &saisie);
        int saisiej = saisie;

        if(tab[saisiei][saisiej]){

            printf("Cette case est déjà pleine\n");
        } else {
            printf("Quelle valeur de v voulez vous entrer | 1 ou 0 |\n");
            scanf("%d", &saisie);
            int saisiev = saisie;
            tableauInit[saisiei][saisiej] = saisiev;
        
            result=verifierGrille(tableauInit);
            if(result == 1 ){
                tab[saisiei][saisiej] = saisiev;
            }
        }
    }
    return result;
}
    

int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  

    int solution[8][8] = {
        {1,1,0,1, 0,1,0,0},
        {0,0,1,0, 1,0,1,1},
        {0,1,0,0, 1,1,0,1},
        {1,0,1,1, 0,0,1,0},
    
        {1,0,1,0, 0,1,1,0},
        {0,1,0,1, 1,0,0,1},
        {1,1,0,0, 1,0,1,0},
        {0,0,1,1, 0,1,0,1}
    };


    for(i=0;i<8; ++i) 
    {
    for(j=0; j<8; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    //initialisation du tableau
     int tableauJoueur[8][8] = {
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},

            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            {2,2,2,2, 2,2,2,2},
            
        }; 

      for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%d ", tableauJoueur[i][j]);
        }
        printf("\n");
    }
    int verification = 0;
    genererTableau(solution, tableauJoueur);
    do{
        afficher(tableauJoueur);
        saisir(tableauJoueur);
        verification = verificationContinue(tableauJoueur);
    } while(verification);
    printf("Bravo, vous avez gagné");

        printf("\n");
    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
