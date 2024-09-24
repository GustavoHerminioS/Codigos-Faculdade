#include <stdio.h>

#include <locale.h>

int main(){

 setlocale(LC_ALL,"Portuguese");

 int pix=1,debito=2,credito=3,escolha=0,opcao=0,opcao2=0,opcao3=0,retirar=0,quantidade_retira=0,quantidade,quantidade_banana = 0, quantidade_maca = 0, quantidade_melao = 0;

 float valor_total = 0.0;

 printf("Bem Vindo ao Main Hortifrut\n");

 printf("Dê uma olhada em nossas frutas e hortalicias!\n\n");

 

 // Preços das frutas

 const float preco_banana = 5.0;

 const float preco_maca = 10.0;

 const float preco_melao = 10.0;

 while (1) {

 printf("\nEscolha uma fruta para adicionar , 4 para sair ou 5 para ver o carrinho:\n");

 printf("Frutas:\n");

 printf("[1] Banana\n");

 printf("[2] Maçã\n");

 printf("[3] Melão\n");

 printf("[4] Sair e mostrar resumo\n");

 printf("[5] Mostrar carrinho\n");

 printf("Escolha uma opção:");

 scanf("%d", &opcao);

 

 if (opcao < 1 || opcao > 5) {

 printf("Opção inválida! Tente novamente.\n");

 continue; // Voltar para o início do loop

 }

 

 // Solicitar a quantidade para a fruta escolhida

 

 if (opcao == 1) {

 printf("Digite a quantidade de ");

 printf("Bananas: ");

 scanf("%d", &quantidade);

 quantidade_banana += quantidade;

 }

 

 else if (opcao == 2) {

 printf("Digite a quantidade de ");

 printf("Maçãs: ");

 scanf("%d", &quantidade);

 quantidade_maca += quantidade;

 } 

 else if (opcao == 3) {

 printf("Digite a quantidade de ");

 printf("Melões: ");

 scanf("%d", &quantidade);

 quantidade_melao += quantidade;

 }

 

 if (opcao == 4) {

 // Calcular valor total

 valor_total = (quantidade_banana * preco_banana) +

 (quantidade_maca * preco_maca) +

 (quantidade_melao * preco_melao);

 // Exibir o resumo e valor total

 printf("\nResumo das escolhas:\n");

 printf("Bananas: %d (R$ %.2f)\n", quantidade_banana, quantidade_banana * preco_banana);

 printf("Maçãs: %d (R$ %.2f)\n", quantidade_maca, quantidade_maca * preco_maca);

 printf("Melões: %d (R$ %.2f)\n", quantidade_melao, quantidade_melao * preco_melao);

 printf("Valor total: R$ %.2f\n", valor_total);

 break; // Sair do loop

 }

 

 if (opcao2 == 4) {

 break;

 } 

 

 //Carrinho

 if (opcao == 5){

 printf("\n[1] Retirar produtos do carrinho\n");

 printf("[2] Adicionar mais produtos\n");

 printf("[3] Sair\n");

 printf("Escolha uma opção: ");

 scanf("%d",&opcao2);

 }

 if (opcao2 == 3)

 break;

 

 

 if (opcao2 == 1){

 printf("\nQual produto quer tirar do carinho\n");

 printf("[1] Banana = %d \n",quantidade_banana);

 printf("[2] Maçã = %d\n",quantidade_maca);

 printf("[3] Melão = %d\n",quantidade_melao);

 printf("[4] Sair\n");

 printf("Escolha uma opcao: ");

 scanf("%d",&opcao3);

 }

 

 

 

 //Sistema para retirar do carrinho

 if (opcao3 == 1) {

 printf("Bananas: ");

 scanf("%d", &quantidade_retira);

 

 if (quantidade_retira > quantidade_banana) {

 printf("\nQuantidade Inválida\n");

 }

 else {

 printf("Agora você tem: %d Bananas",quantidade_banana-quantidade_retira);

 quantidade_banana -= quantidade_retira;

 }

 } 

 else if (opcao3 == 2) {

 printf("Maçãs: ");

 scanf("%d", &quantidade_retira);

 

 if (quantidade_retira > quantidade_maca) {

 printf("\nQuantidade Invalida\n");

 }

 else{

 printf("Agora você tem: %d Maças\n",quantidade_maca-quantidade_retira);

 quantidade_maca -= quantidade_retira;

 }

 } 

 else if (opcao3 == 3) {

 printf("Melões: ");

 scanf("%d", &quantidade_retira);

 

 if (quantidade_retira > quantidade_melao) {

 printf("\nQuantidade Invalida\n");

 }

 else{

 printf("Agora você tem: %d Maças\n",quantidade_melao-quantidade_retira);

 quantidade_melao -= quantidade_retira;

 }

 }

}

 

 // Seleção da forma de pagemento.

 printf("\nEscolha a forma de pagamento:\n");

 

 printf("[1] Pix\n[2] Debito \n[3] Credito ");

 printf("\nEscolha uma opção: ");

 scanf("%d",&escolha);

 if(escolha==1)

 printf("\nAguardando Pagamento...\n");

 

 else if(escolha==2)

 printf("\nEnviando informacoes para a maquininha:\n");

 

 else if(escolha==3)

 printf("\nEnviando informacoes para a maquininha:\n");

 

 printf("\nPagamento Concluido.\n");

 

 printf("\nObrigado, Volte Sempre\n");

 return 0;

}
