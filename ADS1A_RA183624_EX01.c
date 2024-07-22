/*

   AUTOR:....EDUARDO BERNARDES ZANIN
   DATA:.....26/05
   OBJETIVO:.1.Escreva um algoritmo que leia um vetor de 10 números inteiros e imprima na tela os valores em ordem inversa.


*/

#include <stdio.h>

int main() {

    int num[10], q;

    //le os valorees do numeros
    printf("digite 10 numeros inteiros \n");
    for (q = 0; q < 10; q++) {
        
        printf("num %d: ", q+1);
        scanf("%d", &num[q]);
    }


    //Imprime os números em ordem inversa
    printf("Numeros em ordem inversa: \n");
    
    for ( q = 9; q >= 0; q--) {
        printf("%d \n", num[q]);
    }
}

