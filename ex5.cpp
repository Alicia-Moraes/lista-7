#include <stdio.h>
#include <stdlib.h>


void inverter(int *V, int tamanho) {
    int *inicio = V;              
    int *fim = V + tamanho - 1;  
    int temp;

    // troca os valores apontados por 'inicio' e 'fim' até que os ponteiros se cruzem
    while (inicio < fim) {
        temp = *inicio;   // armazena o valor do início
        *inicio = *fim;   // atribui o valor do fim para o início
        *fim = temp;      // atribui o valor temporário para o fim

        inicio++;  // avança o ponteiro do início para frente
        fim--;     // move o ponteiro do fim para tras 
    }
}

int main() {
    int vetor[5] = {8, 89, 25, 9, 12};

    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  // imprime os elementos do vetor
    }
    printf("\n");

    inverter(vetor, 5);  // chama a função para inverter o vetor

    printf("Vetor invertido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  // imprime os elementos do vetor de forma invertida
    }
    printf("\n");

    getchar(); 
    return 0;
}
