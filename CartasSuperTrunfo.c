#include <stdio.h>
#include <string.h> // <string.h> incluso na biblioteca para apoiar o fgets e o strcspn.

int main(){

   char estado, estado2; 
   char codigo[4], codigo2[4];
   char nomecidade[20], nomecidade2[20];      //declaração de todas as variaveis utilizadas
   int  populacao, populacao2;
   float area, area2;
   float pib, pib2;
   int pontot, pontot2;

   //Carta 01 ----------------------------------------------------------------------

   printf("Abaixo, digite as informações da primeira Carta.\n");
   printf("Digite o estado: \n");
   scanf(" %c", &estado);

   printf("Digite o código da carta: \n");
   scanf("%s", codigo);
                                                                      
   getchar(); // limpa o buffer

   printf("Digite o nome da cidade: \n");
   fgets(nomecidade, 20, stdin);               // uso de fgets para permitir que o usuário entre com um nome com espaçamentos sem que comprometa a saída.
   nomecidade[strcspn(nomecidade,"\n")] = 0;

   printf("Digite o número de habitantes: \n");
   scanf("%d", &populacao);

   printf("Digite a área da cidade em km²: \n");
   scanf("%f", &area);

   printf("Digite o PIB: \n");
   scanf("%e", &pib);

   printf("Digite o número de pontos túristicos: \n");
   scanf("%d", &pontot);
   printf("----------\n");

   //Carta 02 ----------------------------------------------------------------------

   printf("Digite as informações da segunda Carta.\n");
   printf("Digite o estado: \n");
   scanf(" %c", &estado2);

   printf("Digite o código da carta: \n");
   scanf("%s", codigo2);

   getchar(); // limpa o buffer

   printf("Digite o nome da cidade: \n");
   fgets(nomecidade2, 20, stdin);               // uso de fgets para permitir que o usuário entre com um nome com espaçamentos sem que comprometa a saída.
   nomecidade2[strcspn(nomecidade2,"\n")] = 0;

   printf("Digite o número de habitantes: \n");
   scanf("%d", &populacao2);

   printf("Digite a área da cidade em km²: \n");
   scanf("%f", &area2);

   printf("Digite o PIB: \n");
   scanf("%e", &pib2);

   printf("Digite o número de pontos túristicos: \n");
   scanf("%d", &pontot2);
   printf("----------\n");

   //exibição carta 01 ----------------------------------------------------------------------

   printf("Carta 01:\n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da cidade: %s\n", nomecidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %e\n", pib);
   printf("Número de Pontos Túristicos: %d\n", pontot);
   printf("----------\n");

   //exibição carta 02 ----------------------------------------------------------------------

   printf("Carta 02:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nomecidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %e\n", pib2);
   printf("Número de Pontos Túristicos: %d\n", pontot2);
   printf("----------\n");


   return 0;

}