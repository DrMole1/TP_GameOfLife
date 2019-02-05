#ifndef JEUVIE_H_INCLUDED
#define JEUVIE_H_INCLUDED
#pragma once

//implémentation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

#define ZERO 0
#define MINMORT 2
#define MAXMORT 3
//les constantes suivantes peuvent être modifiées mais doivent être toujours >= à 10
#define NLIGNES 10
#define NCOLONNES 10


//Déclarations des types structurés
//===============================================
typedef enum tEtat {vivante,morte} tEtat;
typedef enum tEtatTransition {null,naissante,mourrante} tEtatTransition;
typedef enum tBool {false,true} tBool;

typedef struct tCellule{

    tEtat etat;
    tEtatTransition transition;
    int nCelluleAutour;

}tCellule;
//===============================================


//Prototypes des fonctions
//=========================
extern tEtatTransition getEtatTrans(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j);
extern void setEtatTrans(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j, const tEtatTransition etatTemp);
extern tEtat getEtat(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j);
extern void setEtat(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j, const tEtat etatTemp);
extern int getCelluleAutour(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j);
extern void setCelluleAutour(tCellule Tab[NLIGNES][NCOLONNES], const int i, const int j);
extern void razCelluleAutour(tCellule Tab[NLIGNES][NCOLONNES]);
extern void razEtat(tCellule Tab[NLIGNES][NCOLONNES]);
extern void razEtatTrans(tCellule Tab[NLIGNES][NCOLONNES]);
extern void afficherTab(tCellule Tab[NLIGNES][NCOLONNES]);
//=========================


#endif // JEUVIE_H_INCLUDED
