#include<stdio.h>

void bubbleSort(int *V , int N){
    int i,continua, aux ,fim =N;
    do{
        for(i = 0; i < fim-1 ; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i]=V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
}

void printArray(int vetor[], int tamanho) 
{ 
    int i; 
    for (i=0; i < tamanho; i++) 
        printf("%d ", vetor[i]); 
    printf("\n"); 
}
 
int main(int argc, char const *argv[])
{
    int vetor[]={3,13,1,136,88,15,2,0,50,23,54,67};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    printf("antes: ");
    printArray(vetor,n);
    bubbleSort(vetor,n);
    printf("Depois: ");
    printArray(vetor,n);
    return 0;
}
