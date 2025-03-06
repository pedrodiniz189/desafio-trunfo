#include <stdio.h>
int main() {
  //variaveis do jogo 
  char estado[50];
  char nome[50];
  char codigo[3];
  int populacao;
  float area;
  float pib;
  int lazer;
  float densidade;
  float pibcapita;
  //exibe o titulo
  printf("                                                       ==JOGO DO TRUNFO==\n");
  
  //começa pedindo informações ao usuario
  printf("Digite o estado:\n");  
  scanf("%s", estado);
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nome);
  
  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo);
  
  printf("Qual o tamanho da população?\n");
  scanf("%d", &populacao);
    
  printf("Digite o tamanho da área:\n");
  scanf(" %f", &area);
    
  printf("Digite o PIB:\n");
  scanf(" %f", &pib);
    
  printf("Digite o numeros de pontos turisticos:\n");
  scanf(" %d", &lazer);
 
  densidade = (float) populacao / area;
  pibcapita = (float)pib / populacao;

  //mostra ao usuario os dados das cartas inseridas
  printf("***_Dados das cartas_***\n");
  
  printf("Estado:%s\n", estado);
  printf("Nome:%s\n", nome);
  printf("Codigo:%s\n", codigo);
  printf("População:%d\n", populacao);
  printf("Área:%f\n", area);
  printf("PIB:%f\n", pib); 
  printf("Pontos turisticos:%d\n", lazer);
  printf("Densidade populacional:%.3f habitantes/km²\n", densidade);
  printf("PIB per capita:R$%.3f\n", pibcapita);
  return 0;
}
