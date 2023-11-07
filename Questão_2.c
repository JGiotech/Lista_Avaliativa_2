#include <stdio.h>
#include <string.h>

int main() {

    int A[4][4], B[4][4], resultado[4][4];
    int soma = 0, sub = 0, mult = 0;
    char operacao[10];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                resultado[i][j] = A[i][j] + B[i][j];
                    soma += resultado[i][j];
                        printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
    
    } else if(strcmp(operacao, "sub") == 0) {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                resultado[i][j] = A[i][j] - B[i][j];
                    sub += resultado[i][j];
                        printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
        
    } else if(strcmp(operacao, "mult") == 0){
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                resultado[i][j] = 0; 
                    for(int k = 0; k < 4; k++) {
                        resultado[i][j] += A[i][k] * B[k][j];      
                }
                mult += resultado[i][j];
                printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
        
    } else {    
    }

    return 0;
}
