#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED
#pragma once
#include "jeuvie.h"
#include <stdlib.h>
#include <time.h>

#define UN 1
#define DEUX 2
#define TROIS 3
#define QUATRE 4
#define CINQ 5
#define SIX 6

//Implémentation
//=========================================
extern void planeur(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante);
extern void grenouille(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante);
extern void figure(tCellule Tab[NLIGNES][NCOLONNES], int *nCelluleVivante);
//=========================================



#endif // FIGURE_H_INCLUDED
