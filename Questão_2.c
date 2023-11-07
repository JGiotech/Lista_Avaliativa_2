#include <stdio.h>
#include <string.h>

int main() {

    int G1 = 0, L1 = 0, Z1 = 0, V1 = 0, M1 = 0, A1 = 0;
    int G2 = 0, L2 = 0, Z2 = 0, V2 = 0, M2 = 0, A2 = 0;
    char nomeTime1[30];
    char nomeTime2[30];
    char linha[30];
    char nomeJogador[30];
    char posicao;
    int forca;

    fgets(nomeTime1, sizeof(nomeTime1), stdin);
        nomeTime1[strcspn(nomeTime1, "\n")] = '\0';

    for (int i = 0; i < 11; i++) {
        fgets(linha, sizeof(linha), stdin);
            sscanf(linha, "%[^;];%c;%d", nomeJogador, &posicao, &forca);

        if (posicao == 'G') {
            G1 += forca;
        } else if (posicao == 'L') {
            L1 += forca;
        } else if (posicao == 'Z') {
            Z1 += forca;
        } else if (posicao == 'V') {
            V1 += forca;
        } else if (posicao == 'M') {
            M1 += forca;
        } else if (posicao == 'A') {
            A1 += forca;
        }
    }

    fgets(nomeTime2, sizeof(nomeTime2), stdin);
        nomeTime2[strcspn(nomeTime2, "\n")] = '\0';

    for (int i = 0; i < 11; i++) {
        fgets(linha, sizeof(linha), stdin);
            sscanf(linha, "%[^;];%c;%d", nomeJogador, &posicao, &forca);

        if (posicao == 'G') {
            G2 += forca;
        } else if (posicao == 'L') {
            L2 += forca;
        } else if (posicao == 'Z') {
            Z2 += forca;
        } else if (posicao == 'V') {
            V2 += forca;
        } else if (posicao == 'M') {
            M2 += forca;
        } else if (posicao == 'A') {
            A2 += forca;
        }
    }

    double forcaPonderadaTime1 = (8.0 * G1 + 10.0 * L1 + 5.0 * Z1 + 8.0 * V1 + 11.0 * M1 + 12.0 * A1) / 100.0;
    double forcaPonderadaTime2 = (8.0 * G2 + 10.0 * L2 + 5.0 * Z2 + 8.0 * V2 + 11.0 * M2 + 12.0 * A2) / 100.0;

    printf("%s: %.2lf de forca\n", nomeTime1, forcaPonderadaTime1);
    printf("%s: %.2lf de forca\n", nomeTime2, forcaPonderadaTime2);

    if (forcaPonderadaTime1 > forcaPonderadaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaPonderadaTime2 > forcaPonderadaTime1) {
        printf("%s eh mais forte\n", nomeTime2);
    }else{
    }

    return 0;
}
