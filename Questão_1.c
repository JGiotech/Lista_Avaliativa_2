#include <stdio.h>

int main() {
    
    int valores[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }

    int elementos = 10;

    while(elementos > 1){
        for(int i = 0; i < elementos; i++) {
            printf("%d", valores[i]);
            if (i < elementos - 1) {
                printf(" ");
            }
        }
        printf("\n");

        for(int i = 0; i < elementos - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
        }
        elementos--;
    }

    printf("%d\n", valores[0]);

    return 0;
}
