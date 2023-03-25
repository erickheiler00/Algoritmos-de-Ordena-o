#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "ordenacao.h"

void main(){

    int n1 = 10;
    int n2 = 100;
    int n3 = 1000;
    int n4 = 10000;
    
    int *vetor1 = criaVetorEmbaralhado(n1);
    int *vetor2 = criaVetorEmbaralhado(n1);
    int *vetor3 = criaVetorEmbaralhado(n1);

    int *vetor4 = criaVetorEmbaralhado(n2); 
    int *vetor5 = criaVetorEmbaralhado(n2);
    int *vetor6 = criaVetorEmbaralhado(n2);
    
    int *vetor7 = criaVetorEmbaralhado(n3);
    int *vetor8 = criaVetorEmbaralhado(n3); 
    int *vetor9 = criaVetorEmbaralhado(n3);
    
    int *vetor10 = criaVetorEmbaralhado(n4);
    int *vetor11 = criaVetorEmbaralhado(n4);
    int *vetor12 = criaVetorEmbaralhado(n4); 

    int a = 0;
    int b1 = n1-1;
    int b2 = n2-1;
    int b3 = n3-1;
    int b4 = n4-1;

    int p = 0;
    int r1 = n1-1;
    int r2 = n2-1;
    int r3 = n3-1;
    int r4 = n4-1;

    int primeiraEscolha;
    int segundaEscolha;

    clock_t inicio, fim;

    printf("Opcoes\n");
    printf("1 - BubbleSort\n");
    printf("2 - QuickSort\n");
    printf("3 - MergeSort\n");
    scanf("%d", &primeiraEscolha);
    
    switch ( primeiraEscolha )
    {
        case 1:
            listarOpcoes();
            scanf("%d", &segundaEscolha);
            switch ( segundaEscolha )
            {
                case 1:
                    printf("\n10 ELEMENTOS\n\n");
                    printf("Vetor Embaralhado:\n");
                    imprimeVetor(n1, vetor1);
                    printf("\nBubbleSort:\n");
                    inicio = clock();
                    bubbleSort(n1, vetor1);
                    fim = clock();
                    imprimeVetor(n1, vetor1);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 2:
                    printf("\n100 ELEMENTOS\n\n");
                    printf("Vetor Embaralhado:\n");
                    imprimeVetor(n2, vetor4);
                    printf("\nBubbleSort:\n");
                    inicio = clock();
                    bubbleSort(n2, vetor4);
                    fim = clock();
                    imprimeVetor(n2, vetor4);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 3:
                    printf("\n1000 ELEMENTOS\n\n");
                    printf("Vetor Embaralhado:\n");
                    imprimeVetor(n3, vetor7);
                    printf("\nBubbleSort:\n");
                    inicio = clock();
                    bubbleSort(n3, vetor7);
                    fim = clock();
                    imprimeVetor(n3, vetor7);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 4:
                    printf("\n10000 ELEMENTOS\n\n");
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n4, vetor10);
                    printf("\nBubbleSort:\n");
                    inicio = clock();
                    bubbleSort(n4, vetor10);
                    fim = clock();
                    imprimeVetor(n4, vetor10);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                default:
                    printf ("\nValor invalido!\n");
        }
        break;
        
        case 2:
            listarOpcoes();
            scanf("%d", &segundaEscolha);
            switch ( segundaEscolha ){
                case 1:
                    printf("\n10 ELEMENTOS\n");
                    printf("\nVetor Embaralhado:\n\n");
                    imprimeVetor(n1, vetor2);
                    printf("\nQuickSort:\n");	
                    inicio = clock();
                    quickSort(vetor2, a, b1);
                    fim = clock();
                    imprimeVetor(n1, vetor2);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 2:
                    printf("\n100 ELEMENTOS\n");  
                    printf("\nVetor Embaralhado:\n\n");
                    imprimeVetor(n2, vetor5);
                    printf("\nQuickSort:\n");	
                    inicio = clock();
                    quickSort(vetor5, a, b2);
                    fim = clock();
                    imprimeVetor(n2, vetor5);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 3:
                    printf("\n1000 ELEMENTOS\n\n");
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n3, vetor8);
                    printf("\nQuickSort:\n");
                    inicio = clock();	
                    quickSort(vetor8, a, b3);
                    fim = clock();
                    imprimeVetor(n3, vetor8);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 4:
                    printf("\n10000 ELEMENTOS\n\n");
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n4, vetor11);
                    printf("\nQuickSort:\n");	
                    inicio = clock();	
                    quickSort(vetor11, a, b4);
                    fim = clock();
                    imprimeVetor(n4, vetor11);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                default:
                    printf ("\nValor invalido!\n");
            }
            break;

        case 3:
            listarOpcoes();
            scanf("%d", &segundaEscolha);
            switch ( segundaEscolha ){
                case 1:
                    printf("\n10 ELEMENTOS\n");
                    printf("\nVetor Embaralhado:\n\n");
                    imprimeVetor(n1, vetor3);
                    printf("\nMergeSort:\n");	
                    inicio = clock();	
                    mergeSort(vetor3, p, r1);
                    fim = clock();
                    imprimeVetor(n1, vetor3);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 2:
                    printf("\n100 ELEMENTOS\n\n");  
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n2, vetor6);
                    printf("\nMergeSort:\n");
                    inicio = clock();	
                    mergeSort(vetor6, p, r2);
                    fim = clock();
                    imprimeVetor(n2, vetor6);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 3:
                    printf("\n1000 ELEMENTOS\n\n");
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n3, vetor9);
                    printf("\nMergeSort:\n");	
                    inicio = clock();
                    mergeSort(vetor9, p, r3);
                    fim = clock();
                    imprimeVetor(n3, vetor9);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                case 4:
                    printf("\n10000 ELEMENTOS\n\n");
                    printf("\nVetor Embaralhado:\n");
                    imprimeVetor(n4, vetor12);
                    printf("\nMergeSort:\n");	
                    inicio = clock();
                    mergeSort(vetor12, p, r4);
                    fim = clock();
                    imprimeVetor(n4, vetor12);
                    printf("\nTempo: %lf\n", ((double)(fim - inicio)/CLOCKS_PER_SEC));
                    break;

                default:
                    printf ("\nValor invalido!\n");
            }
            break;
        
        default:
            printf ("\nValor invalido!\n");
    }
    getch();
}

