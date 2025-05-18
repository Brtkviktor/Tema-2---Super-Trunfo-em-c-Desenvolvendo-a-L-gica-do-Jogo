#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis para a primeira carta
    char nomeCidade1[] = "São Paulo";
    char estado1[] = "A";
    char codigo1[] = "A01";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões

    // Declaração das variáveis para a Segunda carta
    char nomeCidade2[] = "Rio de Janeiro";
    char estado2[] = "B";
    char codigo2[] = "A02";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2= 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB está em bilhões

    // Declaração variavel Menu esccolha de Atributo Jogador 
    int esccolhajogador;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f por habitante\n", pibPerCapita2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional:  %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f por habitante\n", pibPerCapita2);

    printf("\n\n");

    //Menu interativo para escolha dos Atributos a serem Comparados
    printf("------------------------------------------------\n");
    printf(" ### Escolha qual Atributo sera Comparado: ### \n" );
    printf("------------------------------------------------\n");
    printf("\n");
    printf("1. PoPulacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populaçional\n");
    printf("6. PIB Per Capita\n");
    scanf("%d", &esccolhajogador);

    // Logica de comparaçõa das cartas
    switch (esccolhajogador)
    {
    // Logica de comparaçõa da População
    case 1:
        printf("\n");
        printf("Comparação de Populaçao.\n");
        printf("Cidade %s: %d\n", nomeCidade1, populacao1);
        printf("Cidade %s: %d\n", nomeCidade2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Carta %s Venceu!\n", nomeCidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta %s Venceu!\n", nomeCidade2);
        }
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
        break;

    // Logica de comparaçõa da Área
    case 2:    
        printf("\n");
        printf("Comparação de Àrea.\n");
        printf("Cidade %s: %.2f km²\n", nomeCidade1, area1);
        printf("Cidade %s: %.2f km²\n", nomeCidade2, area2);

        if (area1 > area2)
        {
            printf("Carta %s Venceu!\n", nomeCidade1);
        }
        else if (area1 < area2)
        {
            printf("Carta %s Venceu!\n", nomeCidade2);
        }
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
    
        break;

    // Logica de comparaçõa do PIB
     case 3:      
        printf("\n");
        printf("Comparação de PIB.\n");
        printf("Cidade %s: %.2f km²\n", nomeCidade1, pib1);
        printf("Cidade %s: %.2f km²\n", nomeCidade2, pib2);

        if (pib1 > pib2)
        {
            printf("Carta %s Venceu!\n", nomeCidade1);
        }
        else if (pib1 < pib2)
        {
            printf("Carta %s Venceu!\n", nomeCidade2);
        }
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
        break;

     // Logica de comparaçõa dos Pontos Turisticos
     case 4:  
        printf("\n");
        printf("Comparação dos Pontos turisticos.\n");
        printf("cidade %s: %d\n", nomeCidade1, pontosTuristicos1);
        printf("cidade %s: %d\n", nomeCidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Carta %s venceu!\n", nomeCidade1);
        }
        else if (nomeCidade1 < nomeCidade2)
        {
            printf("Carta %s venceu!\n", nomeCidade2);
        }   
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
        break;

    // Logica de comparaçõa da Densidade Populaçional
     case 5:   
        printf("\n");
        printf("Comparação de Dencidade Populacional.\n");
        printf("Cidade %s: %.2f km²\n", nomeCidade1, densidade1);
        printf("Cidade %s: %.2f km²\n", nomeCidade2, densidade2);

        if (densidade1 < densidade2)
        {
            printf("Carta %s Venceu!\n", nomeCidade1);
        }
        else if (densidade1 > densidade2)
        {
            printf("Carta %s Venceu!\n", nomeCidade2);
        }
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
        break;

    // Logica de comparaçõa da Renda PIB Per Capita
     case 6:        
        printf("\n");
        printf("Comparação de PIB Per Capita.\n");
        printf("Cidade %s: %.2f km²\n", nomeCidade1, pibPerCapita1);
        printf("Cidade %s: %.2f km²\n", nomeCidade2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
        {
            printf("Carta %s Venceu!\n", nomeCidade1);
        }
        else if (pibPerCapita1 < pibPerCapita2)
        {
            printf("Carta %s Venceu!\n", nomeCidade2);
        }
        else
        {
            printf(" ## Houve um Empate ##\n");
        }
    break;
    default:
        printf("Opção Invalida\n");
        break;
    }
    

    system("pause");
    return 0;
}
