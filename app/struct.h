/*
 * File:   struct.h
 * Author: nilson
 *
 * Created on 11 de Outubro de 2010, 13:05
 */

#ifndef _STRUCT_H
#define	_STRUCT_H

#include <stdlib.h>
#include <stdio.h>
#include<time.h>

//DEFINE PARA GAUSS 18

#define GAUSS 18
#define TP 100
#define N_GER 200
#define P_REC 0.6
#define P_MUT 0.3
#define TOUR 2
#define N_PROCESSADOR 2

#define LINHA (int)(2 * (TP + TP * P_REC))
#define COLUNA (int)(GAUSS + 1)/*+1 para a aptidao*/

struct populacao {
    int pop[LINHA][COLUNA];
};

typedef struct populacao Populacao;


int criaAmbiente(Populacao*);

int geneIndividuo(int*, int);

void geraPopulacao(Populacao*);

void verPopulacao(Populacao);

#endif	/* _STRUCT_H */

