#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("**********************************\n");
    printf("*Bem-vindo ao Jogo da Adivinha��o*\n");
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
    printf("(1)F�cil (2)M�dio (3)Dificil\n");
    scanf("%d",&nivel);

    if(nivel == 1){
        totaldetentativas = 20;
        printf("Voc� ter� 20 tentativas, boa sorte !\n");
    } else if(nivel == 2){
        totaldetentativas = 15;
        printf("Voc� ter� 15 tentativas, boa sorte !\n");
    }else if(nivel == 3){
        totaldetentativas = 8;
        printf("Voc� ter� 8 tentativas, boa sorte !\n");
    }

    for(int i=1; i<=totaldetentativas; i++) {
    printf("Qual � o seu chute ?\n");
    scanf("%d",&chute);
    printf("Tentativa %d - Voc� chutou o n�mero %d! \n",i,chute);

    if(chute < 0){
        printf("Erro ! Voc� n�o pode chutar n�meros negativos\n");
        printf("Digite somente n�meros positivos\n");
        i--;
        continue;
    }

    if(acertou){
        printf("Parab�ns! Voc� acertou o n�mero secreto !\n");
        break;
    }else{
        if(chute > numerosecreto){
            printf("O seu chute foi maior que o n�mero secreto\n");
        }
        if(chute < numerosecreto){
            printf("Seu chute foi menor que o n�mero secreto.\n");

        }
    }
    double pontosperdidos = abs(chute - numerosecreto)/2.0;
    pontos = pontos - pontosperdidos;

    }
     if(!acertou){
        printf("Fim de Jogo!\n");
        printf("Voc� perdeu, tente novamente!\n");
        printf("O n�mero secreto era %d\n",numerosecreto);
    }

    printf("Voc� fez %.2f pontos\n", pontos);

    printf("Obrigado por jogar !");


    }
    ///return 0;

