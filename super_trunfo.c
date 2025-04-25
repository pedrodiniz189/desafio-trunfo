#include <stdio.h>
int main() {
  //variaveis do jogo 
  char estado1[50];
  char codigo1[3];
  char nome1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int lazer1;
  float densidade1;
  float pibcapita1;
  float SuperPoder1;
  
  //dados da carta 2
 
  char estado2[50];
  char codigo2[3];
  char nome2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int lazer2;
  float densidade2;
  float pibcapita2;
  float SuperPoder2;

  //exibe o titulo
  printf("                                                       ==JOGO DO TRUNFO==\n");
  
  //começa pedindo informações ao usuario
  printf("\n====== Dados da Carta 1 ======\n");
  
  printf("Digite o estado:\n");  
  scanf("%s", estado1);
  
  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo1);
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nome1);
  
  printf("Qual o tamanho da população?\n");
  scanf("%lu", &populacao1);
    
  printf("Digite o tamanho da área:\n");
  scanf(" %f", &area1);
    
  printf("Digite o PIB:\n");
  scanf(" %f", &pib1);
    
  printf("Digite o numeros de pontos turisticos:\n");
  scanf(" %d", &lazer1);
 
  //leitura dos dados da carta 2

  printf("\n===== DADOS DA CARTA 2 =====\n");
  printf("Digite o estado:\n");  
  scanf("%s", estado2);
  
  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo2);
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nome2);
  
  printf("Qual o tamanho da população?\n");
  scanf("%lu", &populacao2);
    
  printf("Digite o tamanho da área:\n");
  scanf("%f", &area2);
    
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
    
  printf("Digite o numeros de pontos turisticos:\n");
  scanf("%d", &lazer2);
  
  //calculo dos atributos da carta 1
  
  densidade1 = (float) populacao1 / area1;
  pibcapita1 = (pib1 * 1000000.0) / (float)populacao1;
  SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)lazer1 + pibcapita1 + (1.0 / densidade1);

  //calculo dos atributos da carta 2

  densidade2 = (float) populacao2 / area2;
  pibcapita2 = (pib2 * 1000000.0) / (float)populacao2;
  SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)lazer2 + pibcapita2 + (1.0 / densidade2);
  
  //mostra ao usuario os dados das cartas inseridas
  printf("***_Dados das cartas 1_***\n");
  
  printf("Estado:%s\n", estado1);
  printf("Codigo:%s\n", codigo1);
  printf("Nome:%s\n", nome1);
  printf("População:%lu\n", populacao1);
  printf("Área:%f\n", area1);
  printf("PIB:%f\n", pib1); 
  printf("Pontos turisticos:%d\n", lazer1);
  printf("Densidade populacional:%.3f habitantes/km²\n", densidade1);
  printf("PIB per capita:R$%.2f\n", pibcapita1);
  printf("Super poder:%.2f\n", SuperPoder1);

  printf("***_Dados das cartas 2_***\n");

  printf("Estado:%s\n", estado2);
  printf("Codigo:%s\n", codigo2);
  printf("Nome:%s\n", nome2);
  printf("População:%lu\n", populacao2);
  printf("Área:%f\n", area2);
  printf("PIB:%f\n", pib2); 
  printf("Pontos turisticos:%d\n", lazer2);
  printf("Densidade populacional:%.3f habitantes/km²\n", densidade2);
  printf("PIB per capita:R$%.2f\n", pibcapita2);
  printf("Super poder:%.2f\n", SuperPoder2);
  
// Comparação das cartas
printf("\nComparação de Cartas:\n");
  
// Comparação de população (maior vence)
int resultado_populacao = populacao1 > populacao2;
printf("População: Carta %d venceu (%d)\n", 
       resultado_populacao ? 1 : 2, resultado_populacao);

// Comparação de área (maior vence)
int resultado_area = area1 > area2;
printf("Área: Carta %d venceu (%d)\n", 
       resultado_area ? 1 : 2, resultado_area);

// Comparação de PIB (maior vence)
int resultado_pib = pib1 > pib2;
printf("PIB: Carta %d venceu (%d)\n", 
       resultado_pib ? 1 : 2, resultado_pib);

// Comparação de pontos turísticos (maior vence)
int resultado_pontos = lazer1 > lazer2;
printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
       resultado_pontos ? 1 : 2, resultado_pontos);

// Comparação de densidade populacional (menor vence)
// Observe que aqui a lógica é inversa: o menor valor vence
int resultado_densidade = densidade1 < densidade2;
printf("Densidade Populacional: Carta %d venceu (%d)\n", 
       resultado_densidade ? 1 : 2, resultado_densidade);

// Comparação de PIB per capita (maior vence)
int resultado_pib_per_capita = pibcapita1 > pibcapita2;
printf("PIB per Capita: Carta %d venceu (%d)\n", 
       resultado_pib_per_capita ? 1 : 2, resultado_pib_per_capita);

// Comparação de Super Poder (maior vence)
int resultado_super_poder = SuperPoder1 > SuperPoder2;
printf("Super Poder: Carta %d venceu (%d)\n", 
       resultado_super_poder ? 1 : 2, resultado_super_poder);

  
  
  
  return 0;
}
