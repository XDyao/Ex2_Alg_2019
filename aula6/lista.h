typedef int elem;
typedef struct no No;
typedef struct lista Lista;

void cria(Lista **l);
void destroi(Lista **l);
void insere_final(Lista *l, elem x);
void imprime(Lista *l);
int esta_na_lista(Lista *l, elem x);
int remover(Lista *l, elem x);
