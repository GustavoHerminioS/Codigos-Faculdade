#include <stdio.h>
#include <locale.h>

int main(){

 setlocale(LC_ALL,"Portuguese");

 int opcao=0,opcao2=0,opcao3=0;

 printf("Gerenciador Geral Main Hortifruti.\n\n");

 // Tela inicial do menu
 while (1) {
	printf("[1] Gerenciar Produtos\n");
 	printf("[2] Gerenciar Fornecedores\n");
 	printf("[3] Finalizar\n"); 
 	printf("Escolha uma opção:");
		scanf("%d", &opcao);

 // Validação para escolhas do menu
 if (opcao < 1 || opcao > 3) {
 	printf("Opção inválida! Tente novamente.\n");
 	continue; // Voltar para o início do loop

 }
 
// Tela Gerenciador de produtos
  if (opcao == 1) {
 	printf("[1] Cadastrar Produtos\n ");
 	printf("[2] Listar Produtos\n ");
 	printf("[3] Voltar ao menu\n ");
 		scanf("%d",&opcao2);
 }

 if (opcao2 == 1){
 }

 else if (opcao2 == 2){
 }
 
 else if (opcao2 == 3){
 	continue;
 }
 
// Tela Gerenciador de Fornecedores
 else if (opcao == 3){
 	printf("[1] Cadastrar Fornecedor\n ");
 	printf("[2] Listar Fornecedores\n ");
 	printf("[3] Voltar ao menu\n ");
		scanf("%d",&opcao3);
 } 
 
 if (opcao3 == 1){
 }

 else if (opcao3 == 2){
 }
 
 else if (opcao3 == 3){
 	continue;
 }
 
// Finalizar programa
 if (opcao == 3) {
 break;
 } 
 
 return 0;
	}
}
