#ifndef _ordenacao_h
#define _ordenacao_h

void bubbleSort(int n, int* v);
void troca(int* v, int a, int b);
int particiona(int* v, int a, int b);
void quickSort(int* v, int a, int b);
void merge(int* v, int p, int q, int r);
void mergeSort(int* v, int p, int r);
int* criaVetorEmbaralhado(int n);
void imprimeVetor(int n, int* v);
void listarOpcoes();

#endif