#include <stdio.h> //biblioteca de comunicacao com o usuario 
#include<stdlib.h>//biblioteca de alocacao de espaco em memoria
#include <locale.h> //biblioteca de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro() // Funcao responsavel por cadastrar os usuarios no sistema

{  
//inicio criacao de variaveis/strings
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
//Final da criacao de variaveis
    
    printf("digite o cpf a ser cadastrado: ");//coletando informacoes do usuario
    scanf("%s", cpf);//%s  refere-se a strings
    
    strcpy(arquivo, cpf); //responsavel por copiar os valores das string
    
    FILE * file; //cria o arquivo
    file = fopen(arquivo, "w");//cria o arquivo e o "w"significa escrever
    fprintf(file,cpf);//salva ovalor da variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o nome a ser cadastrado: ");//coletando informacoes do ususario
    scanf("%s",nome);//%s refere-se a strings
    
    file =  fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);//%s refare-se a strings
    
    file= fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);

    system("pause");
    
    
}

int consulta()

{
	setlocale(LC_ALL,"portuguese");//definindo a linguagen
     char cpf[40];
     char conteudo[200];
     
     printf("digite o cpf a ser consultado: ");
     scanf("%s",cpf);
     
     FILE *file;
     file = fopen(cpf,"r");
     
     if(file == NULL)
     {
     	printf("Nao foi possivel abrir o arquivo,nao localizado!.\n");
	 }
	 
	 while (fgets(conteudo,200,file) != NULL)
	 {
	 	printf("\nEssas Sao as informacoes do usuario: ");
	 	printf("%s",conteudo);
	 	printf("\n\n");
	 }
	 system("pause");
	 
}

int deletar()
{
	char cpf[40];
	
	printf("digite o cpf a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuario nao se encontra no sistema!.\n");
		system("pause");
	}
	
	
}

		
			
int main()
{
	int opcao=0;// definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");//responsavel por limpar a tela
	
	
    setlocale(LC_ALL, "Portuguese"); //definido a linguagem
	
	printf("### Cartorio Da Ebac ###\n\n"); //inicio do menu
	printf("Escolha a opcao desejada do menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("opcao: "); //fim do menu
	
	scanf("%d", &opcao);//armazenando a escolha do usuario
	
	system("cls");// responsavel por limpar a tela
	
	
	switch(opcao)//inicio da selecao
	{
	
		case 1:
		registro();// chamada de funcoes
		break;
		
		case 2:
	    consulta();
	    break;
	    
	    case 3:
	    deletar();
	    break;
	    
	 
	    
	    default:
	    printf("Essa opcao nao esta disponivel!\n");
	    system("pause");
	    break;
	}//fim da selecao
	
    }
 }
	    	

	
		
	             	
	
