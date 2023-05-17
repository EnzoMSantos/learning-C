#include <stdio.h>



int main() {


    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int secretNumber = 42;

    
    int chute;
    
    int tentativas = 0;

    while(1){

        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");    
        scanf("%d", &chute);
        printf("seu chute: %d\n", chute);

        if(chute <0) {
            printf("Voce nao pode chutar numeros negativos\n"); 

            continue;
        }

        int acertou = (chute == secretNumber);
        int maior = chute > secretNumber;
        
        if(acertou) {
            printf("Parabées! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador!\n");

            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
        tentativas++;
    }

    printf("Fim de Jogo!"); 
    printf("Voce acertou em %d tentativas!\n", tentativas);
    
   

}
