#include <stdio.h>

int main() {


    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int secretNumber = 42;

    int chute;

    printf("Qual o seu chute?");
    scanf("%d", &chute);

    printf("seu chute: %d\n", chute);

    if(chute == secretNumber){
    printf("Voce acertou, Parabens\n"); 
    }
    else {
        printf("Voce errou!\n");
        printf("Tente de novo!");
    }

   

}
