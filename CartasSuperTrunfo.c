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
// Desafio Super Trunfo -Países
// Tema 1 - Cadastro de Cartas

int main(){
   
    int codigocidade;
    char nomedacidade[50];
    float area;
    int população;
    float pib;
    int pontosturisticos;

      // Cadastrar as cartas:

    printf ("Cadastro da cidade" \n);

    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigocidade);
    
    printf("Digite o nome da cidade:  ");
    scanf("%s", &nomedacidade);

    printf("Digite a area da cidade:  ");
    scanf("%f", &area);

    printf("Digite a população:  ");
    scanf("%d", &população);

    printf("Digite o valor do pib: (Em bilhões):  ");
    scanf("%lf", &pib);

    printf("Digite os pontos turisticos:  ");
    sacanf("%d", &pontosturisticos)

      // Exibir as cartas:

    printf("Carta cadastrada");
    
    printf("Codigo: %d\n", codigocidade);
    printf("Nome: %s\n", nomedacidade);
    printf("Area: %f\n", area);
    printf("População: %d\n", população);
    printf("Pib: %lf", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos)

    return 0;

}













}
