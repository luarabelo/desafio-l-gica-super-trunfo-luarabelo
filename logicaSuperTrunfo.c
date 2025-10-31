#include <stdio.h> //continuação do nivel mestre do desafio anterior

int main(){
    char estado1, estado2;
    char cod1[4], cod2[4], cidade1[50], cidade2[50]; 
    unsigned long int  pop1, pop2; 
    int turismo1, turismo2;
    double area1, area2, pib1, pib2;
    double densi1, densi2, pibperc1, pibperc2;
    float super1, super2;
    int atributo1, atributo2;
    double val1carta1, val1carta2, val2carta1, val2carta2;
    double somacarta1, somacarta2;
    int ptscarta1=0, ptscarta2=0;

    //cadastro de cartas
    printf("  Bem-vindo ao Super Trunfo - Desafio Lógica!"); //cabecalho inicial
    printf("\n"); 
    printf("====================================================\n"); 
   
    printf("Para cadastrar a Carta 1, digite as seguintes informações:\n"); //cabecalho para introducao de dados
    printf("\n") ;
    
        printf("Estado (letra de 'A' a 'H'): ");
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
        printf("Estado (letra de 'A' a 'H'): ");
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
    scanf("%d", &atributo1);

    //validação no 1o atributo
    if (atributo1 < 1 || atributo1 > 7) {
        printf("ERRO: Opção Inválida! O programa será encerrado.\n");
        return 1; //encerra o programa com código de erro
    }

    //menu para escolher um segundo atributo
    printf("\n\nEscolha o SEGUNDO atributo para comparar as cartas:\n\n ");

    //exclusão de atributo já escolhido
    if (atributo1 != 1) {
        printf("1 - População\n");
    }
    if (atributo1 != 2) {
        printf("2 - Área\n");
    }
    if (atributo1 != 3) {
        printf("3 - PIB\n");
    }
    if (atributo1 != 4) {
        printf("4 - Pontos Turísticos\n");
    }
    if (atributo1 != 5) {
        printf("5 - Densidade Populacional\n");
    }
    if (atributo1 != 6) {
        printf("6 - PIB per Capita\n");
    }
    if (atributo1 != 7) {
        printf("7 - Super Poder\n");
    }

    printf("\nDigite a opçao desejada: ");
    scanf("%d", &atributo2);

    //validação no 2o atributo
    if (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1) {
        printf("ERRO: Opção Inválida! O programa será encerrado.\n");
        return 1; //encerra o programa com código de erro
    }

    //primeira comparação
    printf("\n\n");
    printf("======================================\n");
    printf("      RESULTADO DA PRIMEIRA COMPARAÇÃO\n");
    printf("======================================\n");

    switch(atributo1)   {
        case 1: //pop maior vence
            printf("Atributo escolhido: População\n\n"); 
            val1carta1 = (double)pop1;
            val1carta2 = (double)pop2;
            printf(" Carta 1: %s (%c): %lu habitantes\n", cidade1, estado1, pop1);
            printf(" Carta 2: %s (%c): %lu habitantes\n\n", cidade2, estado2, pop2);
    
            if (pop1 > pop2) { //decisão
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pop2 > pop1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n\n");
            val1carta1 = area1;
            val1carta2 = area2;
            printf(" Carta 1: %s (%c): %.2lf km²\n", cidade1, estado1, area1);
            printf(" Carta 2: %s (%c): %.2lf km²\n\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;
        
        case 3:
            printf("Atributo escolhido: PIB\n\n");
            val1carta1 = pib1;
            val1carta2 = pib2; 
            printf(" Carta 1: %s (%c): %.2lf bilhões de reais\n", cidade1, estado1, pib1);
            printf(" Carta 2: %s (%c): %.2lf bilhões de reais\n\n", cidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n\n"); 
            val1carta1 = (double)turismo1;
            val1carta2 = (double)turismo2;
            printf(" Carta 1: %s (%c): %d pontos turísticos\n", cidade1, estado1, turismo1);
            printf(" Carta 2: %s (%c): %d pontos turísticos\n\n", cidade2, estado2, turismo2);
            
            if (turismo1>turismo2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (turismo2>turismo1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Populacional\n\n");
            printf("Obs: Neste atributo, o MENOR valor vence.\n");
            val1carta1 = densi1;
            val1carta2 = densi2;
            printf(" Carta 1: %s (%c): %.2lf hab/km²\n", cidade1, estado1, densi1);
            printf(" Carta 2: %s (%c): %.2lf hab/km²\n\n", cidade2, estado2, densi2);
            
            if (densi1<densi2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (densi2<densi1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n");
            val1carta1 = pibperc1;
            val1carta2 = pibperc2; 
            printf(" Carta 1: %s (%c): R$ %.2lf\n", cidade1, estado1, pibperc1);
            printf(" Carta 2: %s (%c): R$ %.2lf\n\n", cidade2, estado2, pibperc2);
            
            if (pibperc1>pibperc2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pibperc2>pibperc1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 7:
            printf("Atributo escolhido: Super Poder\n\n"); 
            val1carta1 = (double)super1;
            val1carta2 = (double)super2;
            printf(" Carta 1: %s (%c): %.2f pontos\n", cidade1, estado1, super1);
            printf(" Carta 2: %s (%c): %.2f pontos\n\n", cidade2, estado2, super2);
           
            if (super1>super2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (super2>super1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        default: //en caso de opção inválda
            printf("ERRO: Opção Inválida!\n");
            return 1;

    }

    switch(atributo2)   {
        case 1: //pop maior vence
            printf("Atributo escolhido: População\n\n"); 
            val2carta1 = (double)pop1;
            val2carta2 = (double)pop2;
            printf(" Carta 1: %s (%c): %lu habitantes\n", cidade1, estado1, pop1);
            printf(" Carta 2: %s (%c): %lu habitantes\n\n", cidade2, estado2, pop2);
    
            if (pop1 > pop2) { //decisão
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pop2 > pop1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n\n");
            val2carta1 = area1;
            val2carta2 = area2;
            printf(" Carta 1: %s (%c): %.2lf km²\n", cidade1, estado1, area1);
            printf(" Carta 2: %s (%c): %.2lf km²\n\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;
        
        case 3:
            printf("Atributo escolhido: PIB\n\n");
            val2carta1 = pib1;
            val2carta2 = pib2; 
            printf(" Carta 1: %s (%c): %.2lf bilhões de reais\n", cidade1, estado1, pib1);
            printf(" Carta 2: %s (%c): %.2lf bilhões de reais\n\n", cidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n\n"); 
            val2carta1 = (double)turismo1;
            val2carta2 = (double)turismo2;
            printf(" Carta 1: %s (%c): %d pontos turísticos\n", cidade1, estado1, turismo1);
            printf(" Carta 2: %s (%c): %d pontos turísticos\n\n", cidade2, estado2, turismo2);
            
            if (turismo1>turismo2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (turismo2>turismo1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Populacional\n\n");
            printf("Obs: Neste atributo, o MENOR valor vence.\n");
            val2carta1 = densi1;
            val2carta2 = densi2;
            printf(" Carta 1: %s (%c): %.2lf hab/km²\n", cidade1, estado1, densi1);
            printf(" Carta 2: %s (%c): %.2lf hab/km²\n\n", cidade2, estado2, densi2);
            
            if (densi1<densi2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (densi2<densi1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n\n");
            val2carta1 = pibperc1;
            val2carta2 = pibperc2; 
            printf(" Carta 1: %s (%c): R$ %.2lf\n", cidade1, estado1, pibperc1);
            printf(" Carta 2: %s (%c): R$ %.2lf\n\n", cidade2, estado2, pibperc2);
            
            if (pibperc1>pibperc2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (pibperc2>pibperc1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        case 7:
            printf("Atributo escolhido: Super Poder\n\n"); 
            val2carta1 = (double)super1;
            val2carta2 = (double)super2;
            printf(" Carta 1: %s (%c): %.2f pontos\n", cidade1, estado1, super1);
            printf(" Carta 2: %s (%c): %.2f pontos\n\n", cidade2, estado2, super2);
           
            if (super1>super2) {
                printf("Vencedor: Carta 1 (%s)\n\n", cidade1);
                ptscarta1++;
            } else if (super2>super1) {
                printf("Vencedor: Carta 2 (%s)\n\n", cidade2);
                ptscarta2++;
            } else {
                printf("Resultado: Empate\n\n");
            }
            break;

        default: //en caso de opção inválda
            printf("ERRO: Opção Inválida!\n");
            return 1;

    }
    //calculo dos pontos totais
    somacarta1 = val1carta1 + val2carta1;
    somacarta2 = val1carta2 + val2carta2;

    printf("======================================\n");
    printf("      SOMA DOS ATRIBUTOS ESCOLHIDOS\n");
    printf("======================================\n");

    printf(" Carta 1: %s: %.2lf + %.2lf = %.2lf\n", cidade1, val1carta1, val2carta1, somacarta1);
    printf(" Carta 2: %s: %.2lf + %.2lf = %.2lf\n\n", cidade2, val1carta2, val2carta2, somacarta2);

    printf("======================================\n");
    printf("      RESULTADO FINAL\n");
    printf("======================================\n");

    printf("Placar:\n");
    printf(" Carta 1 (%s): %d pontos\n", cidade1, ptscarta1);
    printf(" Carta 2 (%s): %d pontos\n\n", cidade2, ptscarta2);

    // operador ternário para decisão final
    char *vencedorFinal = (ptscarta1 > ptscarta2) ? cidade1 : (ptscarta2 > ptscarta1) ? cidade2 : "Empate";

    if (somacarta1 > somacarta2) {
        printf("Vencedor da rodada: Carta 1 (%s)!\n\n", cidade1);
        printf("A carta 1 (%s) venceu com uma soma total de %.2lf pontos!\n", cidade1, somacarta1);
    } else if (somacarta2 > somacarta1) {
        printf("Vencedor da rodada: Carta 2 (%s)!\n\n", cidade2);
        printf("A carta 2 (%s) venceu com uma soma total de %.2lf pontos!\n", cidade2, somacarta2);
    } else {
        printf("Resultado Final: Empate!\n\n");
        printf("Ambas as cartas empataram com uma soma total de %.2lf pontos!\n", somacarta1);
    }
    printf("======================================================\n");
    printf("      Obrigado(a) por jogar o Super Trunfo!\n");
    printf("           Até a proxima batalha!\n");
    printf("======================================================\n");

    return 0; 
}