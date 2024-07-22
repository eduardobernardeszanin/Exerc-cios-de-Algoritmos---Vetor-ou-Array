/*

   AUTOR:....EDUARDO BERNARDES ZANIN
   DATA:.....26/05/2024
   OBJETIVO:.1.2. Escreva um algoritmo que leia um vetor de 10 números reais e imprima na tela a soma dos valores que são maiores que a média do vetor.


*/

#include <stdio.h>

int main() {

    float v[10];
    float soma = 0.0, media = 0.0, sm_maiores = 0.0;
    int d;

    //lendo os valores do vetor
    printf("digite os 10 numeros reais: \n");
    
    for ( d = 0; d < 10; d++) {
        
        printf("Vetor %d: ", d+1);
        scanf("%f", &v[d]);

        soma += v[d];
    
    }

    //operação da média
    media = soma /10;


    //operação da soma dos valores maiores que a média
    for (  d = 0; d < 10; d++) {
        if ( v[d] > media) {
            sm_maiores += v[d];
        }
    }    

        printf("a soma dos valores maiores que a media (%.2f) e: %.2f \n", media, sm_maiores);

        

    }









