/*

   AUTOR:....EDUARDO BERNARDES ZANIN
   DATA:.....28/05
   OBJETIVO:.4. Escreva um algoritmo que leia um vetor de 10 números inteiros e imprima na tela os valores que são primos.

 Números primos são números naturais maiores que 1 que possuem apenas dois divisores: o número 1 e ele mesmo. Isso significa que eles não podem ser divididos igualmente por nenhum outro número natural. Por exemplo, os números 2, 3, 5, 7, 11 são todos primos porque não têm divisores além de 1 e deles mesmos.

*/

#include <stdio.h>

// Função para verificar se um número é primo

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            
            return 0; // Se o número for divisível por outro número, não é primo
        }
    }
    return 1; // Se o número não for divisível por outros números, é primo
}

int main() {
    int vetor[10]; 
    int i; 

    // Leitura dos valores do vetor

    printf("Insira os valores do vetor (10 numeros inteiros): \n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    
    // Impressão dos valores primos do vetor

    printf("Valores primos do vetor: \n");
    
    for (i = 0; i < 10; i++) {
        if (isPrime(vetor[i])) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    
}