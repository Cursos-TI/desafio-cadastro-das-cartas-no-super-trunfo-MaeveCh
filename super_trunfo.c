#include <stdio.h>

int main(){
 
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
   scanf("%d\n", &populacao);

   printf("Digite o número de locais turísticos: \n");
   scanf("%d\n", &turismo);

   printf("Digite o valor Produto Interno Bruto da cidade: \n");
   scanf("%f\n", &pib);

   printf("Digite a área em quilômetros: \n");
   scanf("%f\n", &area);


   printf("A letra do Estado é: %c\n", opcao);
   printf("O código da carta é: %s\n", carta);
   printf("O nome da cidade é: %s\n", nome);
   
   printf("O número de habitantes é: %d\n", populacao);
   printf("O número de pontos turísticos é: %d\n", turismo);

   printf("O PIB da cidade é: %f\n", pib);
   printf("A área da cidade é: %f\n", area);


      return 0;

}