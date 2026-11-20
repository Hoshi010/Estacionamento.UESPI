#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int placa;
    char modelo[30];
    int entradaSegundos;
    int saidaSegundos;
    int posicao;
}estacionamento;

void ocupar (estacionamento carro, int placarro)
{
	for (int i = 0; i < 2; i++){
		if (carro[i].placa == placarro)
		{
			printf("Carro no Local, com a localização %d e modelo %c", carro[i].posicao, carro[i].modelo);
		}
		printf("vagas livres %c", carro[i].posicao);
	}
	return 1;
}

int main (){
	estacionamento a;
	int p;
	scanf("%c", &p);
	}
