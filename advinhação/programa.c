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

    int numeroTentativas = 5;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha : ");
    scanf("%d", &nivel);

    switch (nivel) {
    case 1:
        numeroTentativas = 20;
        break;
    
    case 2: 
        numeroTentativas = 12;
        break;

    default:
        numeroTentativas = 6;
        break;
        
    }  

    for(int i = 1; i <= numeroTentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");    
        scanf("%d", &chute);
        printf("seu chute: %d\n", chute);

        if(chute <0) {
            printf("Voce nao pode chutar numeros negativos\n"); 

            continue;
        }

        acertou = (chute == secretNumber);
        int maior = chute > secretNumber;
        
        if(acertou) {
           

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

    if(acertou) {
           
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
            
    } else {
        printf("Voce perdeu! Tente de novo!\n");
    }


    
   
     
}
