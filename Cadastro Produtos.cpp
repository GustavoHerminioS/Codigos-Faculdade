#include <stdio.h>
#include <locale.h>

#define LIMITE_PRODUTOS 100 // Limite de produtos
#define LIMITE_NOME 50 // Comprimento maximo dos nomes para os produtos e fornecedores (Caracteres)
#define LIMITE_FORNECEDORES 100 // Limite de fornecedores
#define LIMITE_CONTATO 20  // Comprimento maximo dos contatos  (Caracteres)

int main(){

 setlocale(LC_ALL,"Portuguese");

 int opcao=0,opcao2=0,opcao3=0;
 int contProdutos=0, contFornecedores=0;
 
 char nomesProdutos[LIMITE_PRODUTOS][LIMITE_NOME];
 float precosProdutos[LIMITE_PRODUTOS];
 int codProdutos[LIMITE_PRODUTOS];

 char nomesFornecedores[LIMITE_FORNECEDORES][LIMITE_NOME];
 char contatosFornecedores[LIMITE_FORNECEDORES][LIMITE_CONTATO];
 char cnpjsFornecedores[LIMITE_FORNECEDORES][20]; 
 char emailsFornecedores[LIMITE_FORNECEDORES][50]; 

 printf("Gerenciador Geral Main Hortifruti.\n\n");

 // Tela inicial do menu
 while (1) {
	printf("\n[1] Gerenciar Produtos\n");
 	printf("[2] Gerenciar Fornecedores\n");
 	printf("[3] Finalizar\n"); 
 	printf("Escolha uma opção:");
		scanf("%d", &opcao);

 // Validação para escolhas do menu
 if (opcao < 1 || opcao > 3) {
 	printf("Opção inválida! Tente novamente.\n");
 	continue; // Voltar para o início do loop

 }
 
// Gerenciador de produtos
  if (opcao == 1) {
  	while(1){
 	printf("\n[1] Cadastrar Produtos\n");
 	printf("[2] Listar Produtos\n");
 	printf("[3] Voltar ao menu\n");
 	printf("Escolha uma opção:");
 		scanf("%d",&opcao2);
	 

 if (opcao2 == 1){		
 	if (contProdutos < LIMITE_PRODUTOS) {
    	printf("\nDigite o código do produto: ");
    	scanf("%d", &codProdutos[contProdutos]); // Lê o código
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", nomesProdutos[contProdutos]); // Lê o nome
        printf("Digite o preço do produto: ");
        scanf("%f", &precosProdutos[contProdutos]); // Lê o preço
        contProdutos++;
    }
 	else{
 		printf("Limite de produtos atingido\n");
	 }
 }

 else if (opcao2 == 2){
 	printf("\nProdutos Cadastrados\n");
 		for(int i=0; i < contProdutos; i++){
 			printf("Código: %d, Produto: %s, Preço: %.2f\n", codProdutos[i], nomesProdutos[i], precosProdutos[i]);
		 }
 }
 
 else if (opcao2 == 3){
 	break;
  }
  else{
  	printf("Opção inválida! Tente novamente.\n");
  }
 }
}
 
// Tela Gerenciador de Fornecedores
 else if (opcao == 2){
 	while(1){
 	printf("\n[1] Cadastrar Fornecedor\n");
 	printf("[2] Listar Fornecedores\n");
 	printf("[3] Voltar ao menu\n");
 	printf("Escolha uma opção:");
	scanf("%d",&opcao3);
 
 
 if (opcao3 == 1){
 	if(contFornecedores < LIMITE_FORNECEDORES){
 		printf("Digite o nome do fornecedor: ");
 		scanf(" %[^\n]", nomesFornecedores[contFornecedores]);
 		printf("Digite o contato do fornecedor: ");
 		scanf(" %[^\n]", contatosFornecedores[contFornecedores]);
 		printf("Digite o CNPJ do fornecedor: ");
 		scanf(" %[^\n]", cnpjsFornecedores[contFornecedores]);
 		printf("Digite o e-mail do fornecedor: ");
 		scanf(" %[^\n]", emailsFornecedores[contFornecedores]);
 		contFornecedores++;
	 }
	 else 	{
	 	printf("Limite de Fornecedores atingido\n");
	 }
 }

 else if (opcao3 == 2){
	printf("\nFornecedores Cadastrados\n");
 		for (int i=0; i < contFornecedores; i++){
 			printf("Fornecedor: %s, Contato: %s, CNPJ: %s, E-mail: %s\n", nomesFornecedores[i], contatosFornecedores[i],cnpjsFornecedores[i], emailsFornecedores[i]);
		 }
 }
 
 else if (opcao3 == 3){
 	break;
  }
  else {
    printf("Opção inválida! Tente novamente.\n");
  }
 }
}
 
// Finalizar programa
 if (opcao == 3) {
 break;
 } 
}
 printf("Programa finalizado.\n");
 return 0;
	
}
