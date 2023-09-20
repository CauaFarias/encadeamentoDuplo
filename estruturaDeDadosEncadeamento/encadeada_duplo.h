#ifndef ENCADEADA_DUPLO_H_INCLUDED
#define ENCADEADA_DUPLO_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

struct elemento_duplo
{
    int valor;
    struct elemento_duplo * ant;
    struct elemento_duplo * prox;
};
typedef struct elemento_duplo ElemD;

struct cabecalho_duplo
{
    int tam;
    ElemD * primeiro;
    ElemD * ultimo;
};
typedef struct cabecalho_duplo ListaD;

/** operacoes relacionadas aos elementos*/
ElemD * criar_ElemD(int v);
void apagar_ElemD(ElemD * e);

/** operacoes relacionadas às listas**/
ListaD * criar_ListaD();
void apagar_ListaD(ListaD * lista);
void imprimir_ListaD(ListaD * lista);

void inserir_ListaD_final(ListaD * lista, int v);
void inserir_ListaD_inicio(ListaD * lista, int v);
void inserir_ListaD_pos(ListaD * lista, int v, int p);

void remover_ListaD_final(ListaD * lista);
void remover_ListaD_inicio(ListaD * lista);
void remover_ListaD_pos(ListaD * lista, int p);



#endif // ENCADEADA_DUPLO_H_INCLUDED
