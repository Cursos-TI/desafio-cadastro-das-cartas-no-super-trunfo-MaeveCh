#include <stdio.h>

int main(){
 
   char opcao;
   char carta[20];
   char nome[20];
   int populacao;
   int turismo;
   float pib;
   float area;

   // Leitura da letra inicial (char)
   printf("Digite a inicial: ");
   scanf(" %c", &opcao);

   // Leitura do código da carta (char [])
   printf("Digite o código da carta: ");
   scanf("%s", carta);

   // Leitura do nome da cidade
   printf("Digite o nome da cidade: ");
   scanf("%s", nome);

   printf("Digite a quantidade de habitantes: ");
   scanf("%d", &populacao);

   printf("Digite o número de locais turísticos: ");
   scanf("%d", &turismo);

   printf("Digite o valor Produto Interno Bruto da cidade: ");
   scanf("%f", &pib);

   printf("Digite a área em quilômetros: ");
   scanf("%f", &area);


   printf("A letra do Estado é: %c\n", opcao);
   printf("O código da carta é: %s\n", carta);
   printf("O nome da cidade é: %s\n", nome);
   
   printf("O número de habitantes é: %d\n", populacao);
   printf("O número de pontos turísticos é: %d\n", turismo);

   printf("O PIB da cidade é: %f\n", pib);
   printf("A área da cidade é em km^2: %f\n", area);


      return 0;

}