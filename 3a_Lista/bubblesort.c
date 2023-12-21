#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void BubbleSort(int *v, int size){
    for (int i = 0; size > i; size--){
        for (int j = 0; j < size-1; j++){
            if (v[j]>v[j+1]) swap(&v[j], &v[j+1]);
        }
    }
}

int main(){
    int numeros[1000];
    int size = 0;

    while (scanf("%d", &numeros[size]) != EOF) size++;

    BubbleSort(numeros, size);

    for (int i = 0; i < size; i++){
        printf("%d", numeros[i]);
        if (i < size - 1) printf(" ");
    }
    printf("\n");

    return 0;
}