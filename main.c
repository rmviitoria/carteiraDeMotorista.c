/******************************************************************************

Crie um programa que analisa se uma pessoa pode ou não tirar a carteira de motorista. 
Se a pessoa tem 18 anos ou mais, o programa faz 3 perguntas (ela deve responder via teclado e uma de cada vez). As perguntas são:

1  – Ao prestar socorro à vítima de um acidente, NÃO se deve:
a) acionar imediatamente o Corpo de Bombeiros
b) dar água, comida ou qualquer substância para a vítima cheirar
c) conversar com a vítima para saber de suas condições gerais
d) deixar a vítima confortável até a chegada do socorro especializado

2 – Ao se deparar com uma sinaleira na cor vermelha, você deve:
a) rir dela
b) passar mais rápido, pois é perigoso parar
c) dobrar a direita, pois vermelho indica direita
d) parar

3 – Segundo a direção defensiva, quando você está em uma via e um pedestre vai atravessar você:
a) buzina muito forte para que o pedestre se assuste
b) atropela o pedestre, pois lugar de pedestre é na calçada
c) para e dá uma carona para o pedestre, pois é uma lei de trânsito
d) para e aguarda ele atravessar

Caso ela acerte 2 ou 3 perguntas, ela está apta para tirar a carteira (respostas corretas, em ordem: b, d, d).
No final, seu programa deve informar se a pessoa está ou não apta para tirar a carteira de motorista.


*******************************************************************************/
#include <stdio.h>


int main() {
    int idade;
    char resposta1, resposta2, resposta3;
    int acertos = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nPergunta 1: Ao prestar socorro à vítima de um acidente, NÃO se deve:\n");
        printf("a) acionar imediatamente o Corpo de Bombeiros\n");
        printf("b) dar água, comida ou qualquer substância para a vítima cheirar\n");
        printf("c) conversar com a vítima para saber de suas condições gerais\n");
        printf("d) deixar a vítima confortável até a chegada do socorro especializado\n");
        printf("Resposta: ");
        scanf(" %c", &resposta1);

        if (resposta1 == 'b') {
            acertos++;
        }

        printf("\nPergunta 2: Ao se deparar com uma sinaleira na cor vermelha, você deve:\n");
        printf("a) rir dela\n");
        printf("b) passar mais rápido, pois é perigoso parar\n");
        printf("c) dobrar a direita, pois vermelho indica direita\n");
        printf("d) parar\n");
        printf("Resposta: ");
        scanf(" %c", &resposta2);


        if (resposta2 == 'd') {
            acertos++;
        }

        printf("\nPergunta 3: Segundo a direção defensiva, quando você está em uma via e um pedestre vai atravessar você:\n");
        printf("a) buzina muito forte para que o pedestre se assuste\n");
        printf("b) atropela o pedestre, pois lugar de pedestre é na calçada\n");
        printf("c) para e dá uma carona para o pedestre, pois é uma lei de trânsito\n");
        printf("d) para e aguarda ele atravessar\n");
        printf("Resposta: ");
        scanf(" %c", &resposta3);

        if (resposta3 == 'd') {
            acertos++;
        }

        if (acertos >= 2) {
            printf("\nParabéns! Você está apto para tirar a carteira de motorista.\n");
        } else {
            printf("\nVocê não está apto para tirar a carteira de motorista.\n");
        }
    } else {
        printf("Desculpe, você precisa ter 18 anos ou mais para tirar a carteira de motorista.\n");
    }


    return 0; 
}
