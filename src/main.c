#include <stdio.h>
#include "../lib/lista.h"

int main(void){
    int quantidade, valores, comparacoes = 0;
    Lista *l;
    cria(&l);
    
    scanf("%d", &quantidade){
    for(int i=0; i<quantidade; i++){
        int testes = 0;
        if(l->tamanho == 100){
            printf("Lista cheia. Impossível realizar o processamento\n");
            return 0;
        }
        scanf("%d", &valores);
        testes = esta_na_lista(l, valores);
        if(testes == l->tamanho){
            insere_final(l, valores);
        }
        
        comparacoes += testes;
    }
        
    imprime(l);
    printf("Tamanho da lista: %d", l->tamanho);
    printf("\n");
    printf("Total de comparações: %d", comparacoes);
    printf("\n");
    
    destroi(&l);
    
    return 0;
}
