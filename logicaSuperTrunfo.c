#include <stdio.h> //continuação do nivel mestre do desafio anterior

int main(){
    char estado1, estado2;
    char cod1[4], cod2[4], cidade1[50], cidade2[50]; 
    unsigned long int  pop1, pop2; 
    int turismo1, turismo2;
    double area1, area2, pib1, pib2;
    double densi1, densi2, pibperc1, pibperc2;
    float super1, super2;
    int opcao;

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

    //MENU DE EXIBIÇÃO DE OPÇÕES
    printf("\n\n");
    printf("======================================\n");
    printf("       MENU DE COMPARAÇÃO\n");
    printf("======================================\n");
    printf("Escolha o atributo para comparar as cartas:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("\n Digite o número da opção desejada: ");
    scanf("%d", &opcao);
    
    //comparaçao das cartas 
    printf("======================================\n");
    printf("      RESULTADO DA COMPARAÇÃO\n");
    printf("======================================\n");

    switch(opcao)   {
        case 1: //pop maior vence
            printf("Atributo escolhido: População\n\n"); 
            printf(" Carta 1: %s (%c): %lu habitantes\n", cidade1, estado1, pop1);
            printf(" Carta 2: %s (%c): %lu habitantes\n\n", cidade2, estado2, pop2);
    
            if (pop1 > pop2) { //decisão
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (pop2 > pop1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n\n"); 
            printf(" Carta 1: %s (%c): %.2lf km²\n", cidade1, estado1, area1);
            printf(" Carta 2: %s (%c): %.2lf km²\n\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;
        
        case 3:
            printf("Atributo escolhido: PIB\n\n"); 
            printf(" Carta 1: %s (%c): %.2lf bilhões de reais\n", cidade1, estado1, pib1);
            printf(" Carta 2: %s (%c): %.2lf bilhões de reais\n\n", cidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n\n"); 
            printf(" Carta 1: %s (%c): %d pontos turísticos\n", cidade1, estado1, turismo1);
            printf(" Carta 2: %s (%c): %d pontos turísticos\n\n", cidade2, estado2, turismo2);
            
            if (turismo1>turismo2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (turismo2>turismo1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Populacional\n\n");
            printf("Obs: Neste atributo, o MENOR valor vence.\n");
            printf(" Carta 1: %s (%c): %.2lf hab/km²\n", cidade1, estado1, densi1);
            printf(" Carta 2: %s (%c): %.2lf hab/km²\n\n", cidade2, estado2, densi2);
            
            if (densi1<densi2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (densi2<densi1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n"); 
            printf(" Carta 1: %s (%c): R$ %.2lf\n", cidade1, estado1, pibperc1);
            printf(" Carta 2: %s (%c): R$ %.2lf\n\n", cidade2, estado2, pibperc2);
            
            if (pibperc1>pibperc2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (pibperc2>pibperc1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 7:
            printf("Atributo escolhido: Super Poder\n\n"); 
            printf(" Carta 1: %s (%c): %.2f pontos\n", cidade1, estado1, super1);
            printf(" Carta 2: %s (%c): %.2f pontos\n\n", cidade2, estado2, super2);
           
            if (super1>super2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
            } else if (super2>super1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        default: //en caso de opção inválda
            printf("ERRO: Opção Inválida!\n");
            printf("Escolha um número entre 1 e 7\n");
            break;

    }
    printf("===========================================================\n");

    return 0; 
}