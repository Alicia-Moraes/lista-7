#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[100]; // vetor para guardar a string
    
    printf("Digite a palavra: "); 
    scanf("%s", palavra); // lê a palavra

    printf("%s comeca com %c\n", palavra, palavra[0]); // exibe a primeira letra e a palavra
    
    system("pause"); 
    return 0;
}