# include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define NAVIO 3

int main(){

    char tabuleiro[LINHA][COLUNA];
    int linhaHorizontal = 2;
    int linhaVertical = 5;
    int colunaHorizontal = 4;
    int colunaVertical = 1;
    int linhaDiag1 = 0;
    int colunaDiag1 = 0;
    int linhaDiag2 = 6;
    int colunaDiag2 = 5;



    for (int i=0; i < LINHA; i++ ){
        for (int j=0; j < COLUNA; j++){
        tabuleiro[i][j] = '0';
        }
    }
    
       //Adiciona navio vertical
       for (int i = 0; i < NAVIO; i++){
    
        tabuleiro[linhaVertical][colunaVertical] = '3';
        linhaVertical++;
    
       }
        
        //adiciona navio horizontal
        for(int j = 0; j < NAVIO; j++){ 
    
        tabuleiro[linhaHorizontal][colunaHorizontal] = '3';
        colunaHorizontal++;
    
        }

        //adiciona Navio 1 na diagonal
        for(int i = 0; i < NAVIO; i++){
        tabuleiro[linhaDiag1][colunaDiag1] = '3';
        colunaDiag1++;
        linhaDiag1++;
    
        }

        //adiciona Navio 2 na diagonal
        for(int i = 0; i < NAVIO; i++){
            tabuleiro[linhaDiag2][colunaDiag2] = '3';
            linhaDiag2--;
            colunaDiag2++;

        }
       
       
       // Imprime letras de A-J
       printf("   ");  // Espaço para alinhar com números da linha
       for (char letra = 'A'; letra < 'A' + 10; letra++) {
           printf(" %c ", letra);
       }
       printf("\n");
    
       // Imprime o tabuleiro com numeração de linhas
       for (int i = 0; i < LINHA; i++) {
           printf("%2d ", i + 1);  // Numeração das linhas (1 a 10)
           for (int j = 0; j < COLUNA; j++) {
               printf(" %c ", tabuleiro[i][j]);
           }
           printf("\n");
       }
    
    
       return 0;
    
    
}