/*

   AUTOR:....EDUARDO BERNARDES ZANIN
   DATA:.....28/05
   OBJETIVO:.5. Ler 15 elementos de um vetor A. Construir um vetor B de mesmo tipo, observando a seguinte lei de formação: "Todo elemento de B deverá ser o quadrado do elemento de A correspondente". Apresentar os vetores A e B no final.



*/


#include <stdio.h>

int main() {

    int a[15], b[15];
    int p;

    printf("Digite os 15 elementos para o vetor A: \n");
    for ( p = 0; p < 15; p++) {
        
        printf("Elemento %d: ", p+1);
        scanf("%d", &a[p]);
    }

    //Constói o vetor B
    for ( p = 0; p < 15; p++) {
        b[p] = a[p] * a[p];

    }

    // Mostrar os vetores A e B

    printf("\nVetor A:\n");
    for ( p = 0; p < 15; p++) {
        printf("%d", a[p]);
    }

    printf("\n\n Vetor B (quadrados dos elementos de A): \n");
    for ( p = 0; p < 15; p++) {
        printf("%d", b[p]);
    }
}