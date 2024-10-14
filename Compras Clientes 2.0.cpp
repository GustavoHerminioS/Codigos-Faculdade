#include <stdio.h>

#include <locale.h>

int main(){

 setlocale(LC_ALL,"Portuguese");

 int pix=1,debito=2,credito=3,escolha=0,opcao=0,opcao2=0,opcao3=0,retirar=0,quantidade_retira=0,quantidade,quantidade_banana = 0, quantidade_maca = 0, quantidade_melao = 0, quantidade_caqui;
 
 float valor_total = 0.0;

 printf("Bem Vindo ao Main Hortifrut\n");

 printf("Dê uma olhada em nossas frutas e hortalicias!\n\n");

 

 // Preços das frutas

 const float preco_banana = 5.0;
 
 const float preco_caqui = 5.0;

 const float preco_maca = 10.0;

 const float preco_melao = 10.0;

 while (1) {


 printf("[1] Catalogo de produtos \n");

 printf("[2] Sair e mostrar resumo\n");

 printf("[3] Mostrar carrinho\n");

 printf("Escolha uma opção:");

 scanf("%d", &opcao);

 

 if (opcao < 1 || opcao > 3) {

 printf("Opção inválida! Tente novamente.\n");

 continue; // Voltar para o início do loop

 }

 

 // Solicitar a quantidade para a fruta escolhida

 

 if (opcao == 1) {

 printf("[1] Banana: ");

 printf("[2] Maça: ");

 printf("[3] Melão ");
 
 printf("[4] Caqui ");
 
 printf("[5] Menu ");
 
 scanf("%d", &escolha);
 }
 
 if (opcao == 1) {

 printf("Digite a quantidade de ");

 printf("Banana: ");

 scanf("%d", &quantidade);

 quantidade_banana += quantidade;

 } 
 
 else if (opcao == 2) {

 printf("Digite a quantidade de ");

 printf("Maça: ");

 scanf("%d", &quantidade);

 quantidade_maca += quantidade;

 } 
 
 else if (opcao == 3) {

 printf("Digite a quantidade de ");

 printf("Melão: ");

 scanf("%d", &quantidade);

 quantidade_melao += quantidade;

 } 
 
 else if (opcao == 4) {

 printf("Digite a quantidade de ");

 printf("Caqui: ");

 scanf("%d", &quantidade);

 quantidade_caqui += quantidade;

 } 
 
else if (opcao == 5) {
continue;
 } 
 
 // Calcular valor total

 valor_total = (quantidade_banana * preco_banana) +

 (quantidade_maca * preco_maca) +

 (quantidade_melao * preco_melao);
 
 (quantidade_caqui * preco_caqui);

 // Exibir o resumo e valor total

 printf("\nResumo das escolhas:\n");

 printf("Bananas: %d (R$ %.2f)\n", quantidade_banana, quantidade_banana * preco_banana);

 printf("Maçãs: %d (R$ %.2f)\n", quantidade_maca, quantidade_maca * preco_maca);

 printf("Melões: %d (R$ %.2f)\n", quantidade_melao, quantidade_melao * preco_melao);
 
 printf("Melões: %d (R$ %.2f)\n", quantidade_caqui, quantidade_melao * preco_caqui);

 printf("Valor total: R$ %.2f\n", valor_total);

 break; // Sair do loop

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

 continue;

 

 

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
