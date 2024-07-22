/*

   AUTOR:....EDUARDO BERNARDES ZANIN
   DATA:.....28/05
   OBJETIVO:.3. Ler dois vetores, sendo A com 5 elementos e B com 10 elementos. Construir um outro vetor C, sendo este a junção dos vetores A e B. Desta forma, C deverá ter a capacidade de armazenar 15 elementos. Apresentar o vetor C.

*/


#include <stdio.h>

int main() {

    int A[5], B[10], C[15];
    int g;


    // Le o vetor A
    
    printf("Digite 5 elemtos para A: \n");
    for (g = 0; g < 5; g++) {
        scanf("%d", &A[g]);

    }

    //Le o vetor B

    printf("Digite 10 elementos para B: \n");
    for (g = 0; g < 10; g++) {
        scanf("%d", &B[g]);

    }

    //Constroi o vetor C juntando A e B
    for (g = 0; g < 5; g++) {
        C[g] = A[g];
    }
    for (g = 0; g < 10; g++) {
        C[g + 5] = B[g];
    }

    //Mostra o vetor C
    printf("Vetor C (15 elementos): \n");
    for ( g = 0; g < 15; g++) {
        printf("%d", C[g]);

        printf("\n");
    }

}