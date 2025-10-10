#include <stdio.h>

int main() {
    int movimentobranco, continuar = 1;
    int branco;
    int direcaopreto, direcaobranco;

    printf("Iniciando jogo!! Você é das brancas.\n");
    printf("Selecione sua peça:\n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n");

    while (continuar == 1) {

        printf("\nDigite o número da peça: ");
        scanf("%d", &branco);

        do {
            switch (branco) {
                case 1:
                    printf("\nVocê escolheu a Torre.\n");
                    printf("Indique a quantidade de casas para mover: ");
                    scanf("%d", &movimentobranco);

                    printf("A torre está se movendo...\n");
                    for (int i = 1; i <= movimentobranco; i++) {
                        printf("Movimento %d concluído.\n", i);
                    }
                    break;

                case 2: 
                    printf("\nVocê escolheu o Bispo.\n");
                    printf("Indique a quantidade de casas na diagonal: ");
                    scanf("%d", &movimentobranco);

                    for (int i = 1; i <= movimentobranco; i++) {
                        printf("O bispo moveu %d casa(s) na diagonal.\n", i);
                    }
                    break;

                case 3:
                    printf("\nVocê escolheu a Rainha.\n");
                    printf("Quantas casas deseja mover? ");
                    
                    scanf("%d", &movimentobranco);
                    printf("escolha a direção");
                    scanf("%d", &direcaobranco);

                    for (int i = 1; i <= movimentobranco; i++) {
                        printf("A rainha moveu %d casa(s) para %d \n", i, direcaobranco);
                    }
                    break;

                default:
                    printf("\nPeça inválida! Escolha entre 1, 2 ou 3.\n");
                    break;
            }

            printf("\nDeseja repetir o movimento com a mesma peça? (1 = sim / 0 = não): ");
            scanf("%d", &continuar);

        } while (continuar == 1); // repete a jogada com a mesma peça

        printf("\nDeseja escolher uma nova peça? (1 = sim / 0 = não): ");
        scanf("%d", &continuar);
    }

    printf("\nJogo encerrado. Até logo!\n");
    return 0;
}
