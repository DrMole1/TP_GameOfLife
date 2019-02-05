
#include "sauvegarde.h"


//IMPLEMENTATION
//==================================
//BUT : Sert à écrire au sein d'un fichier texte le nombre de cycle, les cellules vivantes et les cellules mortes
//ENTREES : Le fichier, le temps, les cellules vivantes et mortes
//SORTIES : Le fichier
//==================================
extern void EcrireFichier (FILE * pFile, const int nTemps, const int nCellulesVivantes, const int nCellulesMortes)
{
    if((pFile=fopen("sauvegarde.txt","a"))==NULL)
    {
        perror("Erreur de creation de fichier");
    }
    else
    {
        fprintf(pFile,"Cycle : %d Cellules vivantes : %d Cellules mortes : %d",nTemps, nCellulesVivantes, nCellulesMortes);
        fputc('\n',pFile);
    }
    fclose(pFile);
}
