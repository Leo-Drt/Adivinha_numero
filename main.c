#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("**********************************\n");
    printf("*Bem-vindo ao Jogo da Adivinhação*\n");
    printf("**********************************\n");

    int chute;
    double pontos = 1000;
    int outravariavel = pontos * 7;
    srand(time(0));
    int numerosecreto = rand() % 100;
    int nivel;
    int totaldetentativas;
    int acertou = 0;
    acertou = chute == numerosecreto;


    printf("Escolha um nive de dificuldade para jogar !\n");
    printf("(1)Fácil (2)Médio (3)Dificil\n");
    scanf("%d",&nivel);

    if(nivel == 1){
        totaldetentativas = 20;
        printf("Você terá 20 tentativas, boa sorte !\n");
    } else if(nivel == 2){
        totaldetentativas = 15;
        printf("Você terá 15 tentativas, boa sorte !\n");
    }else if(nivel == 3){
        totaldetentativas = 8;
        printf("Você terá 8 tentativas, boa sorte !\n");
    }

    for(int i=1; i<=totaldetentativas; i++) {
    printf("Qual é o seu chute ?\n");
    scanf("%d",&chute);
    printf("Tentativa %d - Você chutou o número %d! \n",i,chute);

    if(chute < 0){
        printf("Erro ! Você não pode chutar números negativos\n");
        printf("Digite somente números positivos\n");
        i--;
        continue;
    }

    if(acertou){
        printf("Parabéns! Você acertou o número secreto !\n");
        break;
    }else{
        if(chute > numerosecreto){
            printf("O seu chute foi maior que o número secreto\n");
        }
        if(chute < numerosecreto){
            printf("Seu chute foi menor que o número secreto.\n");

        }
    }
    double pontosperdidos = abs(chute - numerosecreto)/2.0;
    pontos = pontos - pontosperdidos;

    }
     if(!acertou){
        printf("Fim de Jogo!\n");
        printf("Você perdeu, tente novamente!\n");
        printf("O número secreto era %d\n",numerosecreto);
    }

    printf("Você fez %.2f pontos\n", pontos);

    printf("Obrigado por jogar !");


    }
    ///return 0;

