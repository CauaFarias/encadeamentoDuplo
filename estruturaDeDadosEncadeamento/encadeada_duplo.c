#include "encadeada_duplo.h"

ElemD* criar_ElemD(int v)
{
    ElemD * novo = (ElemD *) malloc(sizeof(ElemD));
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

void apagar_ElemD(ElemD* e)
{
    e->valor = 0;
    e->ant = NULL;
    e->prox = NULL;
    free(e);
}

ListaD* criar_ListaD()
{
    ListaD * nova = (ListaD *)malloc(sizeof(ListaD));
    nova->primeiro = NULL;
    nova->ultimo = NULL;
    nova->tam = 0;
    return nova;
}

void apagar_ListaD(ListaD* lista)
{
    while (lista->tam > 0)
    {
        ///esvaziar a lista primeiro
        ///removendo elemento por elemento
        remover_ListaD_final(lista);
    }
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->tam = 0;
    free(lista);
}

void imprimir_ListaD(ListaD* lista)
{
    ElemD * atual = lista->primeiro;
    printf("NULL <->");
    while(atual != NULL)
    {
        printf("%d <-> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

void inserir_ListaD_final(ListaD* lista, int v)
{
    ElemD * novo = criar_ElemD(v);

    if (lista->tam >0)
    {
    ///alterar os ponteiros relacionados com o novo elemento
    lista->ultimo->prox = novo;
    novo->ant = lista->ultimo;
    }
    else
    {
        lista->primeiro = novo;
    }
    ///atualizar as informações do cabeçalho da lista
    lista->ultimo = novo;
    lista->tam++;
}

void inserir_ListaD_inicio(ListaD* lista, int v)
{

}

void inserir_ListaD_pos(ListaD* lista, int v, int p)
{

}

void remover_ListaD_final(ListaD* lista)
{
    if (lista->tam>0)
    {
        ElemD * limpar = lista->ultimo;

        ///limpar->ant->prox = NULL;
        ElemD * novo_ultimo = limpar->ant;
        if(lista->tam>1)
        {
            novo_ultimo->prox = NULL;
        }
        else
        {
            lista->primeiro = NULL;
        }
        lista->ultimo = novo_ultimo; //limpar->ant
        lista->tam--;

        apagar_ElemD(limpar);
    }
    else
    {
        printf("Lista vazia.");
    }
}

void remover_ListaD_inicio(ListaD* lista)
{

}

void remover_ListaD_pos(ListaD* lista, int p)
{

}
