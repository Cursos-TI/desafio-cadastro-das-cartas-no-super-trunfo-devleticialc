#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo -Países
// Estrura do cadastro de Cartas

struct carta {

  char nomedacidade[50];
  float area;
  int populacao; 
  float pib;
  int pontosturisticos;

};

  int main(){

    struct carta carta1, carta2;

      // Cadastrar as cartas:
      // Carta 1:
      // Carta 2:

      printf("Cadastro carta1:\n");

      printf("Digite o nome da cidade:  ");
      scanf(" %s", carta1.nomedacidade);
  
      printf("Digite a area da cidade:  ");
      scanf("%f", &carta1.area);
  
      printf("Digite a populacao:  ");
      scanf("%d", &carta1.populacao);
  
      printf("Digite o valor do pib: (Em bilhões):  ");
      scanf("%f", &carta1.pib);
      
      printf("Digite os pontos turisticos:  ");
      scanf("%d", &carta1.pontosturisticos); 
    
    printf("Cadastro carta2:\n");

    printf("Digite o nome da cidade:  ");
    scanf(" %s", carta2.nomedacidade);

    printf("Digite a area da cidade:  ");
    scanf("%f", &carta2.area);

    printf("Digite a populacao:  ");
    scanf("%d", &carta2.populacao);

    printf("Digite o valor do pib: (Em bilhões):  ");
    scanf("%f", &carta2.pib);

    printf("Digite os pontos turisticos:  ");
    scanf("%d", &carta2.pontosturisticos);

      // Exibir as cartas:

    printf("\nPrimeira carta cadastrada\n");
    
    printf("Nome: %s\n", carta1.nomedacidade);
    printf("Area: %f\n", carta1.area);
    printf("População: %d\n", carta1.populacao);
    printf("Pib: %f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosturisticos);

    printf("\nSegunda carta cadastrada\n");
    
    printf("Nome: %s\n", carta2.nomedacidade);
    printf("Area: %f\n", carta2.area);
    printf("População: %d\n", carta2.populacao);
    printf("Pib: %f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosturisticos);

    return 0;

}
