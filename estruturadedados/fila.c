#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila FILAInicializa(){
	Fila fila = malloc(sizeof(*fila));
	fila->p = NULL;
	fila->u = NULL;
	return fila;
}

link NOCriar(int valor){
	link novo = malloc(sizeof(*novo));
	novo->valor = valor;
	novo->next = NULL;
	return novo;
}

int FILAInserir(Fila fi, link novo){
	if(FILAVazia(fi)){
		fi->p = fi->u = novo;
	} else {
		fi->u->next = novo;
		fi->u = novo;
	}
	return novo->valor;
}

void FILARemover(Fila fi){
	if(FILAVazia(fi)){
		printf("A FILA ESTÁ VAZIA.\n");
	} else {
		//Remove o mais antigo na fila
		int x = fi->p->valor;
		link t = fi->p;
		if(fi->p == fi->u){
			fi->p = fi->u = NULL;
		} else {
			fi->p = fi->p->next;
		}
		printf("O VALOR REMOVIDO FOI %d\n", x);
		free(t);
	}
}

void FILAImprimir(Fila fi){
	for(link i = fi->p; i != NULL; i = i->next){
		printf("%d ", i->valor);
	}
	printf("\n");
}

int FILAVazia(Fila fi){
	return (fi->p == NULL || fi->u == NULL);
}

void FILADecrescente(Fila fi){
	int ok = 1;
	for(link i = fi->p; i != NULL; i = i->next){
		if(i->next != NULL){
			if(i->valor < i->next->valor){
				ok = 0;
				break;
			}
		}
	}
	if(ok){
		printf("A FILA ESTÁ EM ORDEM DECRESCENTE\n");
	} else {
		printf("A FILA NÃO ESTÁ EM ORDEM DECRESCENTE\n");
	}
}