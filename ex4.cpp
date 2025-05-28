#include <stdio.h>
#include <stdlib.h>


int pertence(int x, int T, int *V) {
    for (int i = 0; i < T; i++) {
        if (V[i] == x) 
            return 1; 
    }
    return 0; 
}

void intersecao(int *A, int *B, int T) {
    for (int i = 0; i < T; i++) { 
        if (pertence(A[i], T, B) == 1)  // checa se A[i] pertence ao vetor B
            printf("%d ", A[i]); 
    }
    printf("\n");
}

int main() {
    int A[5] = {0, 9, 7, 28, 50};
    int B[5] = {10, 25, 99, 4, 7};
    intersecao (A, B, 5);

    getchar(); 
    return 0;
}
