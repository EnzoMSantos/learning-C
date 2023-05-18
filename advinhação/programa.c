#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();

    int secretNumber = numeroGrande % 100;

    int chute;  
    int tentativas = 1;
    double pontos = 1000;



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
            printf("Parabens! Voce acertou!\n");
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

        float pontosPerdidos = abs(chute - secretNumber) / 2.0;
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de Jogo!\n"); 
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
     
}
