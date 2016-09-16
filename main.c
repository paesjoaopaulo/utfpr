#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
	Fila fi = FILAInicializa();
	FILAInserir(fi, NOCriar(3));
	FILAInserir(fi, NOCriar(2));
	FILAInserir(fi, NOCriar(1));
	FILAInserir(fi, NOCriar(0));
	FILAInserir(fi, NOCriar(1));
	FILAInserir(fi, NOCriar(3));
	FILAInserir(fi, NOCriar(5));
	FILAImprimir(fi);
	FILARemover(fi);
	FILARemover(fi);
	FILAImprimir(fi);
	FILADecrescente(fi);
	return 0;
}