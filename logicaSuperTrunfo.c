#include <stdio.h>
#include <stdlib.h> //Outra biblioteca
#include <time.h> //Outra biblioteca

  //Desafio super trunfo (PARTE LÓGICA).
  //Segunda etapa, modo aventureiro.

  int main(){
    int populacao1, turisticos1, populacao2, turisticos2;
    float area1, pib1, area2, pib2;
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];

   //Primeira carta-------------------------------------------------

    printf("Insira o estado: "); 
    scanf("%s", &estado1);

    printf("Digite o código: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome1);

    printf("Insira o número da população: ");
    scanf("%d", &populacao1);

    printf("Agora digite a Área: ");
    scanf("%f", &area1);

    printf("Coloque o PIB: ");
    scanf("%f", &pib1);

    printf("Por último, coloque o número de pontos turísticos: ");
    scanf("%d", &turisticos1);

     


    //Este é somente para deixar uma linha vazia.
    printf("         \n"); 


   //Mensagem avisando que faremos a outra carta.
    printf("----Certo agora vamos para a segunda carta---- \n");
    

    //Este é somente para deixar uma linha vazia.
    printf("         \n"); 


   //Segunda carta--------------------------------------------------


    printf("Insira o segundo estado: ");
    scanf("%s", &estado2);

    printf("Digite o código: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Insira o número da população: ");
    scanf("%d", &populacao2);

    printf("Agora digite a Área: ");
    scanf("%f", &area2);

    printf("Coloque o PIB: ");
    scanf("%f", &pib2);

    printf("Por último, coloque o número de pontos turísticos: ");
    scanf("%d", &turisticos2);

   //Este é somente para deixar uma linha vazia
    printf("         \n"); 
    printf("         \n"); 


    //impressão da PRIMEIRA carta-----------------------------------


  printf("CARTA 1°: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d \n", turisticos1);

    //Parte lógica da PRIMEIRA carta--------------------------------------

   float densidadeP1;
   float pibPor1;
   
   densidadeP1 = (float) populacao1 / area1;
   pib1 = pib1 * 1000000000;
   pibPor1 = (float) pib1 / populacao1;
   

   printf("Densidade populacional:  %.2f hab/Km²\n", densidadeP1);
   printf("PIB per Capita: %.2f reais\n", pibPor1);

   

     /*Este é somente para deixar uma linha vazia.*/
    printf("         \n"); 


    //impressão da SEGUNDA carta---------------------------------------


  printf("CARTA 2°: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d \n", turisticos2);


   //Parte lógica da SEGUNDA carta--------------------------------------

   float densidadeP2;
   float pibPor2;
   
   densidadeP2 = (float) populacao2 / area2;
   pib2 = pib2 * 1000000000; 
   pibPor2 = (float) pib2 / populacao2;

   printf("Densidade populacional:  %.2f hab/Km²\n", densidadeP2);
   printf("PIB per Capita: %.2f reais\n", pibPor2);

   printf("          \n"); //Somente para pular uma linha

   //ESCOLHA DA CARTA DO JOGADOR-------------------------------------

   int cartaJogador;
    printf("\n=== ESCOLHA SUA CARTA ===\n");
    printf("1 - %s\n", nome1);
    printf("2 - %s\n", nome2);
    printf("Digite sua escolha: ");
    scanf("%d", &cartaJogador);

    // Verifica se a escolha é válida
    if (cartaJogador != 1 && cartaJogador != 2) {
        printf("Carta inválida! Reinicie o programa.\n");
        return 0;
    }

    // O computador usa a outra carta
    int cartaComputador = (cartaJogador == 1) ? 2 : 1;


     //MENU de comparação-----------------------------------

     int escolha;

      printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha);

    printf("\n--- RESULTADO ---\n");

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, turisticos1);
            printf("%s: %d pontos\n", nome2, turisticos2);
            if (turisticos1 > turisticos2)
                printf("Vencedor: %s\n", nome1);
            else if (turisticos2 > turisticos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidadeP1);
            printf("%s: %.2f hab/km²\n", nome2, densidadeP2);
            if (densidadeP1 < densidadeP2)
                printf("Vencedor: %s (menor densidade)\n", nome1);
            else if (densidadeP2 < densidadeP1)
                printf("Vencedor: %s (menor densidade)\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Reinicie o programa e tente novamente.\n");
            break;
    }

    return 0;

   /*
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. Pib\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidada demográfica\n");*/

   printf("CARTA 1 - %s (%s): %f\n", nome1, estado1, area1);
   printf("CARTA 2 - %s (%s): %f\n", nome2, estado2, area2);

   printf("          \n"); //Somente para pular uma linha

   if (area1 > area2)
   {
    printf("RESULTADO: Carta 1 (%s) é o vencedor!\n", nome1);
   }else {
    printf("RESULTADO: Carta 2 (%s) é o vencedor!\n", nome2);
   } 
   
 

  }
