#include <stdio.h>
#include <stdlib.h>


int pertence(int x, int T, int *V){
    for(int i = 0; i < T; i++){
        if(V[i] == x)  // 
            return 1; // se for verdadeiro retorna 1
    }
    return 0;  // se for falso retorna 0 
}

int main(){
    int A[5] = {1, 2, 3, 4, 5};
    int elemento;
    
    printf("Digite o elemento para verificar se pertence: ");
    scanf("%d", &elemento);
    
    if (pertence(elemento, 5, A))
        printf("O elemento %d pertence ao vetor\n", elemento);
    else 
        printf("O elemento %d nao pertence ao vetor\n", elemento);
    
    getchar();
    return 0;
}
