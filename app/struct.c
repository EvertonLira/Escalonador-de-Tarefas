#include"struct.h"

/*
 Apenas inicializa a população com -1
 */
int criaAmbiente(Populacao* pop) {
    int linha, coluna;
    for (linha = 0; linha < LINHA; linha++) {
        for (coluna = 0; coluna < COLUNA; coluna++) {
            pop->pop[linha][coluna] = -1;
        }
    }
    return 1;
}

int geneIndividuo(int* individuo, int numero) {
    int coluna;

    for (coluna = 0; coluna < COLUNA-1; coluna++) {
        if (individuo[coluna] == numero) {
            return 1;
        }

    }
    return 0;

}

void geraPopulacao(Populacao* pop) {

    int linha, coluna;

    int dna;

    for (linha = 0; linha < LINHA; linha+=2) {

        for (coluna = 0; coluna < COLUNA-1; coluna++) {
            do {
                dna = random() % GAUSS;
            } while (geneIndividuo((*pop).pop[linha], dna));
            pop->pop[linha + 1][coluna] = random() % N_PROCESSADOR;
            pop->pop[linha][coluna] = dna;
        }

    }

}

void verPopulacao(Populacao pop) {


    int linha, coluna;

    for (linha = 0; linha < LINHA; linha+=2) {
        printf("\n Individuo: %d \t", linha);
        for (coluna = 0; coluna < COLUNA - 1; coluna++) {

            printf("%d ", pop.pop[linha][coluna]);

        }
        printf("\n Processador: %d \t",linha);
        for (coluna = 0; coluna < COLUNA - 1; coluna++) {

            printf("%d ", pop.pop[linha+1][coluna]);

        }
    }
    printf("\n");
}

