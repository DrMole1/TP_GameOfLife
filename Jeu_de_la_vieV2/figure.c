#include "figure.h"



//Implémentation
//===============================
//BUT : Initialisation de la figure planeur dans le tableau
//ENTREE : Le tableau
//SORTIE : Le tableau
//===============================
extern void planeur(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante)
{

    Tab[UN][DEUX].etat=vivante;
    Tab[DEUX][TROIS].etat=vivante;
    Tab[TROIS][UN].etat=vivante;
    Tab[TROIS][DEUX].etat=vivante;
    Tab[TROIS][TROIS].etat=vivante;
    *nCelluleVivante=+CINQ;

}



//Implémentation
//===============================
//BUT : Initialisation de la figure grenouille dans le tableau
//ENTREE : Le tableau
//SORTIE : Le tableau
//===============================
extern void grenouille(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante)
{

    Tab[DEUX][DEUX].etat=vivante;
    Tab[DEUX][TROIS].etat=vivante;
    Tab[DEUX][QUATRE].etat=vivante;
    Tab[TROIS][UN].etat=vivante;
    Tab[TROIS][DEUX].etat=vivante;
    Tab[TROIS][TROIS].etat=vivante;
    *nCelluleVivante=+SIX;

}


//Implémentation
//===============================
//BUT : Initialisation de la figure aléatoire dans le tableau
//ENTREE : Le tableau
//SORTIE : Le tableau
//===============================
extern void figure(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante)
{
    int nCpt = 0;
    int nNb1 = 0;
    int nNb2 = 0;
    srand(time(NULL));
    for (nCpt = 0; nCpt < NLIGNES*NCOLONNES/TROIS; nCpt++)
    {
        nNb1 = rand()%NLIGNES;
        nNb2 = rand()%NCOLONNES;
        if (Tab[nNb1][nNb2].etat==morte)
        {
            Tab[nNb1][nNb2].etat=vivante;
            *nCelluleVivante+=1;
        }
    }
}
