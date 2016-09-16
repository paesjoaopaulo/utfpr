#ifndef FILA_H
#define FILA_H

typedef struct node * link;
struct node {
	int valor;
	link next;
};

typedef struct fila * Fila;
struct fila {
	link p;
	link u;
};

Fila FILAInicializa();
link NOCriar(int valor);
int FILAInserir(Fila fi, link novo);
void FILARemover(Fila fi);
void FILAImprimir(Fila fi);
int FILAVazia(Fila fi);
void FILADecrescente(Fila fi);

#endif