#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA[5] = {0,0,0,0,0};
    int vetorB[5] = {1,1,1,1,1};

    for( int i = 0; i < 5; i++){
        printf("%d %d ", vetorA[i], vetorB[i]);
    }
getchar();
return(0);
}