#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

void bubbleSort(int n, int* v){
    for (int i=n-1; i>=1; i--){
        for (int j=0; j<i; j++){
            if (v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void troca(int* v, int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}


int particiona(int* v, int a, int b){
    int x = v[a];
    while (a < b){
    	while (v[a] < x){
    	    a++;
    	}
    	while (v[b] > x){
    	    b--;
    	}
    	troca(v, a, b);
    }
    return a;
}


void quickSort(int* v, int a, int b){
    if (a < b){
    	int indicePivo = particiona(v, a, b);
    	quickSort(v, a, indicePivo - 1);
    	quickSort(v, indicePivo + 1, b);
    }
}

void merge(int* v, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1];
    int R[n2+1];
    
    for (int i=0; i<=n1-1; i++){
        L[i] = v[p+i];
    }
    for (int j=0; j<=n2-1; j++){
        R[j] = v[q+j+1]; 
    }

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0;
    int j = 0;

    for (int k=p; k<=r; k++){
        if (L[i] <= R[j]){
            v[k] = L[i];
            i++;
        }
        else{
            v[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int* v, int p, int r){
    if (p < r){
    	int q = ((p + r)/2);
    	mergeSort(v, p, q);
    	mergeSort(v, q + 1, r);
    	merge(v, p, q, r);
    }
}

int* criaVetorEmbaralhado(int n){
    int *vetor = (int *)malloc(sizeof(int)*n);

    for (int i=0; i<n; i++){
        vetor[i] = i;
    }

    srand((unsigned)time(NULL));
    for (int i=0; i<n; i++){
        int r = rand() % n;
        int temp = vetor[i];
        vetor[i] = vetor[r];
        vetor[r] = temp;
    }

    return vetor;
}

void imprimeVetor(int n, int* v){
    for (int i=0; i<n; i++){
        printf("vetor[%d] = %d\n", i, v[i]);
        }
}

void listarOpcoes(){
    printf("\nOpcoes\n");
    printf("1 - 10 elementos\n");
    printf("2 - 100 elementos\n");
    printf("3 - 1000 elementos\n");
    printf("4 - 10000 elementos\n");
}