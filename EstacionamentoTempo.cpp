#include <stdio.h>
#include <time.h>

typedef struct{
    int placa[7];
    char modelo[30];
    int entradaSegundos;
    int saidaSegundos;
    int posicao;
}estacionamento;

int main() {
    // 1. Marca o tempo inicial
    clock_t inicio = clock();

    // --- Coloque aqui o código que você quer medir ---
    for (long i = 0; i < 100000000; i++); 
    // ------------------------------------------------

    // 2. Marca o tempo final
    clock_t fim = clock();

    // 3. Calcula a diferença
    double segundos = (double)(fim - inicio) / CLOCKS_PER_SEC;
    double milissegundos = segundos * 1000.0;

    printf("Tempo gasto: %.4f segundos (%.2f ms)\n", segundos, milissegundos);

    return 0;
}
