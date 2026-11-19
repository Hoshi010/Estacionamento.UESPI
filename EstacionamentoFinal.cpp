#include <stdio.h>
#include <stdlib.h>

/*
tabela de preços
    até 30min = R$ 5,00
    a partir de 1h = R$ 8,00
    a partir de 2h = R$ 12,00
    adicional por hora a partir de 3h += R$ 2,00
*/

typedef struct{
    int placa[7];
    char modelo[30];
    int entradaSegundos;
    int saidaSegundos;
    int posicao;
}estacionamento;

//tempo dividido -> tempo total em segundos
void converterTempo1 (int horas, int minutos, int segundos, int *totalSegundos)
{
    *totalSegundos=segundos+(minutos*60)+(horas*3600);
}

//tempo total em segundos -> tempo dividido
void converterTempo2 (int totalSegundos, int *horas, int *minutos, int *segundos)
{
    *horas=(totalSegundos/3600);
    *minutos=(totalSegundos%3600)/60;
    *segundos=(totalSegundos%3600)%60;
}

//recebe apenas tempo total em segundos!
void permanencia (int entrada, int saida, int *estadia)
{
    *estadia=(saida-entrada);
}

int main()
{
    estacionamento vagas[2];
    int estadia, horas, minutos, segundos, i;

    return 0;
}
