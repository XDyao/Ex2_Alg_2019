#include <stdio.h>
#include "lista.h"

int main(void) {
    Lista *l;
    
    cria(&l);
    
    insere_inicio(l, 'a');
    insere_inicio(l, 'b');
    insere_inicio(l, 'c');
    
    insere_final(l, 'A');
    insere_final(l, 'B');
    insere_final(l, 'C');
    
    imprime(l);
    
    printf("Tamanho: %d\n", tamanho2(l));
    
    if (esta_na_lista2(l, 'a'))
        printf("Elemento 'a' esta na lista\n");
    
    if (esta_na_lista2(l, 'D'))
        printf("Elemento 'D' esta na lista\n");
    
    printf("Removendo 'B'...\n");
    remover2(l, 'B');
    imprime(l);
    printf("Removendo 'c'...\n");
    remover2(l, 'c');
    imprime(l);
    printf("Removendo 'C'...\n");
    remover2(l, 'C');
    imprime(l);
    printf("Removendo 'D'...\n");
    remover2(l, 'D');
    imprime(l);
    
    destroi(&l);
    
    return 0; // sucesso
}
