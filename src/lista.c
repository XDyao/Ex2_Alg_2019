#include <stdlib.h>
#include <stdio.h>
#include "../lib/lista.h"

struct no{
	elem info;
	struct no *prox;
};

struct lista{
	No *ini, *fim;
	int tamanho;
};

void cria(Lista **l){
	//instancia lista
	*l = malloc(sizeof(Lista));
    	//define lista vazia
	(*l)->ini = NULL;
    	(*l)->fim = NULL;
	(*l)->tamanho = 0;
    	return;
}

void destroi(Lista **l){
    	//apaga elementos
    	No *aux;
   	while ((*l)->ini != NULL){
        	aux = (*l)->ini;
        	(*l)->ini = (*l)->ini->prox;
		free(aux);
    	}
    	//apaga lista
    	free(*l);
    	*l = NULL;
    	return;
}

void insere_final(Lista *l, elem x){
    	No *aux;
    	//cria no
    	aux = malloc(sizeof(No));
    	aux->info = x;
    	aux->prox = NULL;
    	//atualiza ponteiros
    	if (l->fim != NULL){
        	l->fim->prox = aux;
	}
    	l->fim = aux;
    	if (l->ini == NULL){
        	l->ini = aux;
	}
	l->tamanho++;
	return;
}

void imprime(Lista *l){
    	No *aux = l->ini;
    	while (aux != NULL){
        	printf("%d\t", aux->info);
        	aux = aux->prox;
    	}
    	printf("\n");
    	return;
}

int esta_na_lista(Lista *l, elem x){
	//contador de comparacoes efetuadas
	int contador = 0; 
    	No *aux = l->ini;
    	while (aux != NULL){
        	if(aux->info == x){
			contador++;
            		return contador;
		}
        	aux = aux->prox;
    	}
    	return contador;
}
