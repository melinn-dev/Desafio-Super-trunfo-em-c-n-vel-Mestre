#include <stdio.h>

int main()
{
       // variáveis das cartas//
       char estado1[2], estado2[2];
       char codigo1[4], codigo2[4];
       char nome1[20], nome2[20];
       int populacao1, populacao2;
       float área1, área2;
       double pib1, pib2;
       int turistico1, turistico2;
       float densidade1, densidade2;
       float pibpercapta1, pibpercapta2;
       long double superpoder1, superpoder2;
       // mensagem inicial//
       printf("Bem vindo ao super trunfo!\n digite à seguir, os dados das cartas na ordem solicitada!\n");
       printf("----------------------carta 1----------------------\n");
       // cadastro da primeira carta//
       printf("Estado (utilize um caractere de A à H):\n");
       scanf("%s", estado1);
       printf("Código da carta(somente numeros):\n");
       scanf("%4s", codigo1);
       printf("Nome da cidade:\n");
       scanf(" %[^\n]", nome1);
       printf("População:\n");
       scanf("%d", &populacao1);
       printf("Área (km²):\n");
       scanf("%f", &área1);
       printf("PIB (em bilhões):\n");
       scanf("%lf", &pib1);
       printf("Quantidade de pontos turísticos\n");
       scanf("%d", &turistico1);
       // calculo do pib e densidade a primeira carta e super-poder.
       densidade1 = (float)populacao1 / área1;
       pibpercapta1 = (double)(pib1 * 1000000000.0) / populacao1; // Convertendo bilhões para reais
       superpoder1 = (float)populacao1 + área1 + ((float)pib1 * 1000000000.0) + turistico1 + pibpercapta1 + 1 / densidade1;
       // mensagem da segunda  carta//
       printf("----------------------carta 2----------------------\n");
       // cadastro da segunda carta//
       printf("Estado (utilize um caractere de A à H):\n");
       scanf("%s", estado2);
       printf("Código da carta(somente numeros):\n");
       scanf("%4s", codigo2);
       printf("Nome da cidade:\n");
       scanf(" %[^\n]", nome2);
       printf("População:\n");
       scanf("%d", &populacao2);
       printf("Área (km²):\n");
       scanf("%f", &área2);
       printf("PIB (em bilhões):\n");
       scanf("%lf", &pib2);
       printf("Quantidade de pontos turísticos\n");
       scanf("%d", &turistico2);
       // calculo do pib e densidade da segunda carta
       densidade2 = (float)populacao2 / área2;
       pibpercapta2 = (double)(pib2 * 1000000000.0) / populacao2; // Convertendo bilhões para reais
       superpoder2 = (float)populacao2 + área2 + ((float)pib2 * 1000000000.0) + turistico2 + pibpercapta2 + 1 / densidade2;
       // exibição das cartas//
       printf("----------------------carta 1----------------------\n");
       printf("estado:%s \ncódigo: %s%s \nNome da cidade: %s\n população: %d \nárea %.f KM² \nPib: %lf Bilhões de reais \nNumero de pontos turísticos: %d \n densidade : %.2f\n Pib Per capta: %.2lf reais\nsuperpoder de : %Lf\n",
              estado1, estado1, codigo1, nome1, populacao1, área1, pib1, turistico1, densidade1, pibpercapta1, superpoder1);
       printf("----------------------carta 2----------------------\n");
       printf("estado:%s \ncódigo: %s%s \nNome da cidade: %s\n população: %d \nárea %.f KM² \nPib: %lf Bilhões de reais \nNumero de pontos turísticos: %d \n densidade : %.2f\n Pib Per capta: %.2lf reais\nsuperpoder de : %Lf\n",
              estado2, estado2, codigo2, nome2, populacao2, área2, pib2, turistico2, densidade2, pibpercapta2, superpoder2);

       // comparaçao das cartas
       /*int comparacaopopulacao1 =  populacao1 > populacao2;
        int comparacaoarea1 = área1 > área2;
        int comparacaopib1 = pib1 > pib2;
        int comparacaopontos1 = turistico1 > turistico2;
        int comparacaodensidade1 = densidade1 > densidade2;
        int comparacaopibpercapita1 = pibpercapta1 > pibpercapta2;
        int comparacaosuperpoder1 = superpoder1 > superpoder2;*/

       printf("----------------------resultados----------------------\n");
       printf(
           "população: carta 1 venceu (%d)\n"
           "área: carta 1 venceu (%d)\n"
           "PIB: carta 1 venceu (%d)\n"
           "pontos turísticos: carta 1 venceu (%d)\n"
           "densidade populacional: carta 1 venceu (%d)\n"
           "PIB per capita: carta 1 venceu (%d)\n"
           "super poder: carta 1 venceu (%d)\n",
           populacao1 > populacao2,
           área1 > área2,
           pib1 > pib2,
           turistico1 > turistico2,
           densidade1 > densidade2,
           pibpercapta1 > pibpercapta2,
           superpoder1 > superpoder2);

       return 0;
}