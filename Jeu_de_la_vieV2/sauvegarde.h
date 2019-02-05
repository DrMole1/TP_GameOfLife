#ifndef SAUVEGARDE_H_INCLUDED
#define SAUVEGARDE_H_INCLUDED
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXTEXTE 255

//prototypes des méthodes
//==============================
extern void EcrireFichier (FILE * pFile, const int nTemps, const int nCellulesVivantes, const int nCellulesMortes);
//==============================


#endif // SAUVEGARDE_H_INCLUDED
