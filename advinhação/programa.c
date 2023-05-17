#include <stdio.h>

int main() {


    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int secretNumber = 42;

    int chute;

    for(int i = 1; i <= 3; i++){

        printf("Tentativa %d de 3\n", i);
        printf("Qual o seu chute? ");    
        scanf("%d", &chute);

        printf("seu chute: %d\n", chute);

        int acertou = (chute == secretNumber);

        if(acertou){
            printf("Voce acertou, Parabens\n"); 
        }
        else {
            printf("Voce errou!\n");

            int maior = chute > secretNumber;
            if(maior){
                printf("Seu chute foi maior que seu numero secreto.\n");
            }
            else {
                printf("Seu chute foi menor que seu numero secreto.\n");
            }
            
            
            printf("Tente de novo!\n");
        }
    }
    
    printf("Fim de Jogo!");
   

}
