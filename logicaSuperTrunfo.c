#include <stdio.h> //continuação do nivel mestre do desafio anterior

int main(){
    char estado1, estado2;
    char cod1[4], cod2[4], cidade1[50], cidade2[50]; 
    unsigned long int  pop1, pop2; 
    int turismo1, turismo2;
    double area1, area2, pib1, pib2;
    double densi1, densi2, pibperc1, pibperc2;
    float super1, super2;

    //cadastro de cartas
    printf("  Bem-vindo ao Super Trunfo - Desafio Lógica!"); //cabecalho inicial
    printf("\n"); 
printf("====================================================\n"); 
   
printf("Para cadastrar a Carta 1, digite as seguintes informações:\n"); //cabecalho para introducao de dados
    printf("\n") ;
    
        printf("Estado (use somente uma letra de 'A' a 'H'): ");
        scanf(" %c", &estado1);

        printf("Codigo (uma letra e dois numeros, ex: A01): ");
        scanf("%s", cod1);

        printf("Nome da cidade: ");
        scanf("%s", cidade1);

        printf("Numero de Habitantes: ");
        scanf("%lu", &pop1);

        printf("Area (em km²): ");
        scanf("%lf", &area1);

        printf("PIB da cidade: ");
        scanf("%lf", &pib1);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &turismo1);
        

    printf("\n"); //espaco dentre entradas

    printf("Para cadastrar a Carta 2, digite as seguintes informações:\n"); //cabecalho para introducao de dados
    printf("\n"); //espacamento
        printf("Estado (use somente uma letra de 'A' a 'H'): ");
        scanf(" %c", &estado2); //espaco antes do formato evita leitura de enter como caracter

        printf("Codigo (uma letra e dois numeros ex: B02): ");
        scanf("%s", cod2);

        printf("Nome da cidade: ");
        scanf("%s", cidade2); //strings nao necessitam de & para enderacamento

        printf("Numero de Habitantes: ");
        scanf("%lu", &pop2);

        printf("Area (em km²): ");
        scanf("%lf", &area2);

        printf("PIB da cidade: ");
        scanf("%lf", &pib2);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &turismo2);
    
    // area de calculos
    densi1 = (double)pop1 / area1; //DENSIDADE
    densi2 = (double)pop2 / area2;

    pibperc1 = (pib1*1000000000) / (double)pop1; // pib per capta
    pibperc2 = (pib2*1000000000) /(double)pop2;

    super1 = (float)pop1 + (float)area1 + (float)pib1 + (float)turismo1 + (float)pibperc1 + (1/(float)densi1);
    super2 = (float)pop2 + (float)area2 + (float)pib2 + (float)turismo2 + (float)pibperc2 + (1/(float)densi2);

    //exibicao das cartas
    printf("\n\n"); //espaco entre entradas e saidas
    printf("======Cadastro da Carta 1=======\n"); //breve cabecalho
    printf("Estado:%c\n", estado1);
    printf("Codigo:%s\n", cod1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%lu\n", pop1);
    printf("Área:%.2lf km²\n", area1);
    printf("PIB:%.2lf bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade Populacional:%.2lf hab/km²\n", densi1);
    printf("PIB per Capita:%.2lf reais\n", pibperc1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n"); //espaco entre saidas
    printf("======Cadastro da Carta 2=======\n"); //breve cabecalho
    printf("Estado:%c\n", estado2);
    printf("Codigo:%s\n", cod2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%lu\n", pop2);
    printf("Área:%.2lf km²\n", area2);
    printf("PIB:%.2lf bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade Populacional:%.2lf hab/km²\n", densi2);
    printf("PIB per Capita:%.2lf reais\n", pibperc2);
    printf("Super Poder: %.2f\n", super2);

    //comparaçao das cartas 
    printf("======================================\n");
    printf("       Comparação de Cartas\n");
    printf("======================================\n");

    printf("1. População:\n"); //pop maior vence
    printf(" Carta 1: %lu | Carta 2: %lu\n", pop1, pop2);
    if (pop1 > pop2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (pop2 > pop1) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("2. Área:\n"); //area maior vence
    printf(" Carta 1: %.2lf km² | Carta 2: %.2lf km²\n", area1, area2);
    if (area1 > area2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (area2 > area1) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("3. PIB:\n"); // pib maior vence
    printf(" Carta 1: %.2lf bilhões | Carta 2: %.2lf bilhões\n", pib1, pib2);
    if (pib1 > pib2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("4. Pontos Turísticos:\n"); //turismo maior vence
    printf(" Carta 1: %d | Carta 2: %d\n", turismo1, turismo2);
    if (turismo1>turismo2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (turismo2>turismo2) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("5. Densidade Populacional:\n"); // densidade MENOR vence
    printf(" Carta 1: %.2lf hab/km² | Carta 2: %.2lf hab/km²\n", densi1, densi2);
    if (densi1<densi2) {
        printf("Vencedor: Carta 1 - Menor Densidade (%s)\n\n", cidade1);
    } else if (densi2<densi1) {
        printf("Vencedor: Carta 2 - Menor Densidade (%s)\n\n", cidade1);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("6. PIB per Capita:\n"); // pib per capita maior vence
    printf(" Carta 1: %.2lf | Carta 2: %.2lf\n", pibperc1, pibperc2);
    if (pibperc1>pibperc2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (pibperc2>pibperc1) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("7. Super Poder:\n");
    printf(" Carta 1: %.2f | Carta 2: %.2f\n", super1, super2);
    if (super1>super2) {
        printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
    } else if (super2>super1) {
        printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
    } else {
        printf("Resultado: Empate\n\n");
    }

    printf("===========================================================\n");

    return 0; 