#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   
    // Dados da Primeira Carta.
    char Codigo_Carta1;
    char Estado1[10];
    char Nome_Cidade1[10];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;

    // Dados da Segunda Carta.
    char Codigo_Carta2;
    char Estado2[10];
    char Nome_Cidade2[10];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    printf("** Cadastro da Primeira Carta **\n");

    printf("Codigo_Carta:");
    scanf("%C", Codigo_Carta1);

    printf("Letra_Estado (ex: S):");
    scanf("%2s", Estado1);

    printf("Cidade (ex: Salto):");
    scanf("%10s", Nome_Cidade1);

    printf("Populacao:");
    scanf("%d", &Populacao1);

    printf("Area:");
    scanf("%f", &Area1);

    printf("PIB:");
    scanf("%f", &PIB1);

    printf("Numeros_Pontos_Turisticos:");
    scanf("%f", &Pontos_Turisticos1);

    printf("** Cadastro da Segunda Carta **\n");

    printf("Codigo_Carta:");
    scanf("%C", Codigo_Carta2);

    printf("Letra_Estado (ex: I):");
    scanf("%2s", Estado2);

    printf("Cidade (ex: Itu):");
    scanf("%10s", Nome_Cidade2);

    printf("Populacao:");
    scanf("%d", &Populacao2);

    printf("Area:");
    scanf("%f", &Area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Numeros_Pontos_Turisticos:");
    scanf("%f", &Pontos_Turisticos2);

    printf("\n** Dados Cadastrados **\n");

    printf("\n-- Primeira Carta --\n");
    printf("Codigo_Carta: %c\n", Codigo_Carta1);
    printf("Letra_Estado: %2s\n", Estado1);
    printf("Cidade: %10s\n", Nome_Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos_Turisticos: %f\n", Pontos_Turisticos1);

    printf("\n-- Segunda Carta --\n");
    printf("Codigo_Carta: %c\n", Codigo_Carta2);
    printf("Letra_Estado: %2s\n", Estado2);
    printf("Cidade: %10s\n", Nome_Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos_Turisticos: %f\n", Pontos_Turisticos2);


    return 0;
}
