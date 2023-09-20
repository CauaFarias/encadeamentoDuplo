#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "encadeada_duplo.h"

int main()
{
    srand(time(NULL));
    int t = 10, i;
    ListaD * lista1 = criar_ListaD();
    imprimir_ListaD(lista1);
    printf("iniciando preenchimento... \n");
    for (i=0; i<10; i++)
    {
        inserir_ListaD_final(lista1, rand()%100);
        imprimir_ListaD(lista1);
    }
    printf("iniciando remocao...\n");
    for (i=0; i<10; i++)
    {
        remover_ListaD_final(lista1);
        imprimir_ListaD(lista1);
    }

    apagar_ListaD(lista1);

    return 0;
}
