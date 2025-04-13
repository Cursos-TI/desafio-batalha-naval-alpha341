#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro [10][10] = {{0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},
                              {0,0,0,0,0,0,0,0,0,0},};
    int navio1 [3] = {3,3,3};
    int navio2 [3] = {3,3,3};
    int escolha, coneLinha, coneColuna, cruzLinha, cruzColuna, octaLinha, octaColuna;
    
    

    //Para escolherem
    printf("Qual opção você deseja?\n");
    printf("1 - Cone\n");
    printf("2 - Cruz\n");
    printf("3 - Octaedro\n");
    scanf("%i", &escolha);



    switch (escolha)
    {
    case 1:
    //Para o cone
    printf("\nPara o cone. Insira o valor da primeira linha(de 1 a 10):\n");
    scanf("%i",&coneLinha);
    coneLinha = coneLinha-1;
    printf("Para o cone. Insira o valor da última coluna (maior ou igual a 5 e até 10):\n");
    scanf("%i",&coneColuna);
    coneColuna = coneColuna-1;
    //Caso não seja possível colocar a base nos limites do tabuleiro
    if (coneColuna<4){
        printf("O cone vai extrapolar os limites do tabuleiro. Tabuleiro estará todo zerado.\n");
        break;
    }
    //Faz o cone de acordo com a escolha do usuário
    for (int i = coneLinha; i<coneLinha+3; i++){
        if (i==coneLinha){
            tabuleiro[i][coneColuna-2] = 1;
        }
        if (i==coneLinha+1){
            tabuleiro[i][coneColuna-1] = 1;
            tabuleiro[i][coneColuna-2] = 1;
            tabuleiro[i][coneColuna-3] = 1;
        }
        if (i==coneLinha+2){
            tabuleiro[i][coneColuna] = 1;
            tabuleiro[i][coneColuna-1] = 1;
            tabuleiro[i][coneColuna-2] = 1;
            tabuleiro[i][coneColuna-3] = 1;
            tabuleiro[i][coneColuna-4] = 1;
        }
    }
    break;

    case 2:
     //Para a cruz
     printf("\nPara a cruz. Insira o valor da primeira linha(de 1 a 10):\n");
     scanf("%i",&cruzLinha);
     cruzLinha = cruzLinha-1;
     printf("Para a cruz. Insira o valor da coluna do meio (maior ou igual a 5 e até 10):\n");
     scanf("%i",&cruzColuna);
     //Caso não seja possível colocar a base nos limites do tabuleiro
     cruzColuna = cruzColuna-1;
     if (cruzColuna<4){
         printf("A cruz vai extrapolar os limites do tabuleiro. Tabuleiro estará todo zerado.\n");
         break;
     }
     //Desenha a cruz no tabuleiro - Aparece com número 2
     for (int i = cruzLinha; i<cruzLinha+3; i++){
        if (i==cruzLinha){
            tabuleiro[i][cruzColuna-2] = 2;
        }
        if (i==cruzLinha+1){
            tabuleiro[i][cruzColuna] = 2;
            tabuleiro[i][cruzColuna-1] = 2;
            tabuleiro[i][cruzColuna-2] = 2;
            tabuleiro[i][cruzColuna-3] = 2;
            tabuleiro[i][cruzColuna-4] = 2;
        }
        if (i==cruzLinha+2){
            tabuleiro[i][cruzColuna-2] = 2;
        }
     }
    break;

    case 3:
     //Para o octaedro
     printf("\nPara o octaedro. Insira o valor da primeira linha (de 1 a 10):\n");
     scanf("%i",&octaLinha);
     octaLinha = octaLinha -1;
     printf("Para o octaedro. Insira o valor da coluna do meio (maior ou igual a 3 e até 10):\n");
     scanf("%i",&octaColuna);
     octaColuna = octaColuna-1;
     //Caso não seja possível colocar a base nos limites do tabuleiro
     if (octaColuna<2){
         printf("O octaedro vai extrapolar os limites do tabuleiro. Tabuleiro estará todo zerado.\n");
         break;
     }
     //Desenha o octaedro no tabuleiro - Aparece com número 4
     for (int i = octaLinha; i<octaLinha+3; i++){
        if (i==octaLinha){
            tabuleiro[i][octaColuna-1] = 4;
        }
        if (i==octaLinha+1){
            tabuleiro[i][octaColuna] = 4;
            tabuleiro[i][octaColuna-1] = 4;
            tabuleiro[i][octaColuna-2] = 4;
        }
        if (i==octaLinha+2){
            tabuleiro[i][octaColuna-1] = 4;
        }
     }
    break;
  
    default:
        printf("Você escolheu opção inválida.");
        break;
    }      
    
    
   
    // Espaço para alinhar com os números da lateral
    printf("\t");
      for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c\t", letra);
    }
    printf("\n");


    for (int k = 0; k<10; k++){
        printf("%i\t",k+1);
            for (int l = 0; l<10; l++){
                printf("%i\t",tabuleiro[k][l]);
            }
        printf("\n");
        if (k ==9){
            printf("\n\n");
        }
    }

    return 0;
}