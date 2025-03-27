#include <stdio.h>

void movertorre(int movimento){
    if( movimento > 0)
    {
        printf("Torre se moveu uma casa para direita.\n");
        movertorre (movimento - 1);
    }
}

    void moverbispo(int movimento){
        for(movimento; movimento > 0; movimento--)
        {
            for(int movimento2 = 1; movimento2 > 0; movimento2--)
            {
                printf("Bispo se moveu uma casa para Esquerda.\n");
            }
            printf("Bispo se moveu uma casa para cima.\n");
        }
}
void moverrainha(int movimento){
    if( movimento > 0)
    {
        printf("Rainha se moveu uma casa para esquerda.\n");
        moverrainha (movimento - 1);
    }
}


int main(){

    int casa = 1;
    int opcao;

    //registra a escolha do usuário
    printf("\n1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n");
    printf("Escolha o número da opção de qual peça mover: ");
    scanf("%d", &opcao);

    //seleciona uma ação que corresponde a opção escolhida
    switch (opcao){
        case 1:
            //movimentação da torre.
            int casatorre = 5; //quantidade de casas que a torre se move
            movertorre(casatorre);
            break;

        case 2:
            //movimentação do bispo.
            int casabispo = 5; //quantidade de casas que o bispo se move
            moverbispo(casabispo);
            break;

        case 3:
            //movimentação da rainha.
            int casarainha = 8; //quantidade de casas que a rainha se move
            moverrainha(casarainha);
            break;
        
        case 4:
            //movimentação do cavalo
            for (casa = 1; casa <= 1; casa++) //quantidade de vezes que o cavalo se move em L
            {
                int casacima = 1;

                while(casacima <= 2) //quantidade de vezs que o cavalo se move pra cima
                {
                    printf("Cavalo se moveu uma casa para cima.\n");
                    casacima++;
                    for(int casadireita = 1; casacima > 2 && casadireita <= 1; casadireita++) //&& casadireita <= 1 (número de vezes que o cavalo se move pra direita depois de ter completado o movimento pra cima)
                    {
                        printf("Cavalo se moveu uma casa para direita.\n");
                    }
                }

            }
            break;

        default:
            printf("Número inválido");
            break;

    }

    return 0;
    
}