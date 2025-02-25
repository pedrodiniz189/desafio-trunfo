#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  char codigo[50];
  char nome[50];
  int populacao;
  int area;
  int pib;
  int lazer;
  
  printf("                                                       ==JOGO DO TRUNFO==\n");
  printf("Digite o codigo da cidade:\n");  
  scanf("%s", codigo);
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nome);
  

  printf("Qual o tamanho da população?\n");
  scanf("%d", &populacao);
    
  printf("Digite o tamanho da área:\n");
  scanf("%d", &area);
    
  printf("Digite o PIB:\n");
  scanf("%d", &pib);
    
  printf("Digite o numeros de pontos turisticos:\n");
  scanf("%d", &lazer);
   
  printf("***_Dados das cartas_***\n");
  
  printf("codigo:%s\n", codigo);
  printf("Nome:%s\n", nome);
  printf("População:%d\n", populacao);
  printf("Área:%d\n", area);
  printf("PIB:%d\n", pib); 
  printf("Pontos turisticos:%d\n", lazer);
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
