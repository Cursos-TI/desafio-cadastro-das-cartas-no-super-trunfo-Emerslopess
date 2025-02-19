#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 1 
    char estado[] = "SP";  // Estado
    char codigo_da_carta[10]= "A01"; // codigo da carta
    char nome_da_cidade[20]= "Guaruja"; // Cidade
    int populacao = 287634; // População de Guaruja
    float area = 142.589; // area Área (em km²)
    float pib =2.29090186589; // Pib da cidade Guaruja
    int numero_de_ponto_turistico = 15; // Total de pontos turisticos 


    // Carta 01 SP- Guaruja

    printf("Digite o Estado:");
    scanf("%s", &estado);

  
    printf("Digite o Codigo da Carta:"); 
    scanf("%s", codigo_da_carta);

    printf("Digite Nome da Cidade:");
    scanf("%s", nome_da_cidade);


    printf("Digite a Populoação da Cidade:");
    scanf("%d", &populacao);


    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib);

    printf("Digite Numero de Pontos Turisticos da cidade:");
    scanf("%d", &numero_de_ponto_turistico);


    // Dados Da Carta do Gaurujá
    printf("\n---Cidade ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %.2f\n",area);
    printf("PIB da Cidade: %.2f", pib);
    printf("Numero de Pontos Turistico: %d\n", numero_de_ponto_turistico);
    // Carta 1 Guaruja


    // Carta A02 Campinas
    char estado[] = "SP";  // Estado
    char codigo_da_carta[10]= "A02"; // codigo da carta
    char nome_da_cidade[20]= "Campinas"; // Cidade
    int populacao = 2287634; // População de Campinas
    float area = 142.5289; // area Área (em km²)
    float pib =8.29090186589; // Pib da cidade Campinas
    int numero_de_ponto_turistico = 10; // Total de pontos turisticos 

    //   Carta Campinas

    printf("Digite o Estado:");
    scanf("%s", &estado);


    printf("Digite o Codigo da Carta:"); 
    scanf("%s", codigo_da_carta);

    printf("Digite Nome da Cidade:");
    scanf("%s", nome_da_cidade);


    printf("Digite a Populoação da Cidade:");
    scanf("%d", &populacao);


    printf("Digite a área da cidade (em km²):");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib);

    printf("Digite Numero de Pontos Turisticos da cidade:");
    scanf("%d", &numero_de_ponto_turistico);


    // Dados Da Carta do Campinas
     printf("\n---Cidade 02 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %.2f\n",area);
    printf("PIB da Cidade: %.2f", pib);
    printf("Numero de Pontos Turistico: %d\n", numero_de_ponto_turistico);

   

    
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