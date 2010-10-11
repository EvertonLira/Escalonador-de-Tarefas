#include"struct.h"

int main() {

    srand(time(NULL));

    Populacao pop;
    criaAmbiente(&pop);
    geraPopulacao(&pop);

    verPopulacao(pop);

    return 0;
}

