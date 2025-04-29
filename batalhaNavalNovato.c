#include <stdio.h>

int main(){

   char tabuleiro[10][10];
   int linhaHorizontal = 2;
   int linhaVertical = 5;
   int colunaHorizontal = 4;
   int colunaVertical = 1;


   for (int i=0; i < 10; i++ ){
    for (int j=0; j < 10; j++){
    tabuleiro[i][j] = '0';
    }
   }

   //Adiciona navio vertical
   for (int i = 0; i < 3; i++){

    tabuleiro[linhaVertical][colunaVertical] = '3';
    linhaVertical++;

   }
    
    //adiciona navio horizontal
    for(int j = 0; j < 3; j++){ 

    tabuleiro[linhaHorizontal][colunaHorizontal] = '3';
    colunaHorizontal++;

    }

   
    
   
   
   // Imprime letras de A-J
   printf("   ");  // Espaço para alinhar com números da linha
   for (char letra = 'A'; letra < 'A' + 10; letra++) {
       printf("%c ", letra);
   }
   printf("\n");

   // Imprime o tabuleiro com numeração de linhas
   for (int i = 0; i < 10; i++) {
       printf("%2d ", i + 1);  // Numeração das linhas (1 a 10)
       for (int j = 0; j < 10; j++) {
           printf("%c ", tabuleiro[i][j]);
       }
       printf("\n");
   }


   return 0;


}
