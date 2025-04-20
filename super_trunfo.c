#include <stdio.h>

int main(){
//carta 1
   char opcao;
   char carta[20];
   char nome[20];
   int populacao;
   int turismo;
   float pib;
   float area;

   printf("Digite a inicial: \n");
   scanf("%c", &opcao);

   printf("Digite o código da carta: \n");
   scanf("%s", &carta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);

   printf("Digite a quantidade de habitantes: \n");
   scanf("%d", &populacao);

   printf("Digite o número de locais turísticos: \n");
   scanf("%d\n", &turismo);

   printf("Digite o valor Produto Interno Bruto da cidade: \n");
   scanf("%f\n", &pib);

   printf("Digite a área em quilômetros: \n");
   scanf("%f\n", &area);


   printf("A letra do Estado é: %c", opcao);
   printf("O código da carta é: %s", carta);
   printf("O nome da cidade é: %s", nome);
   
   printf("O número de habitantes é: %d", populacao);
   printf("O número de pontos turísticos é: %d", turismo);

   printf("O PIB da cidade é: %f", pib);
   printf("A área da cidade é: %f", area);


      return 0;

}