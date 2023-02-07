#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

typedef struct rrrggghhh{
	int nota=44731;
	char Restaurante[100], bairro[100], cidade[100], tipo[100];
	
};

int main(){
	rrrggghhh restaurante[20]; 
	int capet=0,ca;
	int a=1,cont=0,del=0;
	char ku[100],rest[100];
	while(a != 0){
		printf("\nDigite 1 para incluir um novo restaurante\nDigite 2 para listar todos os restaurantes na tela\nDigite 3 para excluir um restaurante da lista\nDigite 4 para listar por nota\nDigite 5 para listar pelo tipo de comida\nDigite 0 para sair\n\n\t\t\t Digite agora: ");
        scanf("%d", &a);
        getchar();
        
        switch(a) {
                case 1:
                	if(del !=0){
                	printf("Digite o nome do restaurante: ");
                	gets(restaurante[del].Restaurante);
                	printf("Digite o nome do bairro: ");
                	gets(restaurante[del].bairro);
                	printf("Digite o nome da cidade: ");
                	gets(restaurante[del].cidade);
                	printf("Digite o tipo: ");
                	gets(restaurante[del].tipo);
                	printf("Digite a nota entre 0 e 5: ");
                	scanf("%d", &restaurante[cont].nota);
                	 if (restaurante[del].nota > 5){
                	 	restaurante[del].nota=5;
					 }
					 system("CLS");
					}
					else{
                	printf("Digite o nome do restaurante: ");
                	gets(restaurante[cont].Restaurante);
                	printf("Digite o nome do bairro: ");
                	gets(restaurante[cont].bairro);
                	printf("Digite o nome da cidade: ");
                	gets(restaurante[cont].cidade);
                	printf("Digite o tipo: ");
                	gets(restaurante[cont].tipo);
                	printf("Digite a nota entre 0 e 5: ");
                	scanf("%d", &restaurante[cont].nota);
                	 if (restaurante[cont].nota > 5){
                	 	restaurante[cont].nota=5;
					 }
					 system("CLS");
                	cont ++;
                }
             	break;
             	
             	case 2:
             		for(int i=0,p=1;i < 20;i++){
             			if(restaurante[i].nota == 44731){
             				
						 }
						 else {
						 	printf("\n\t\t\t\tO %dº restaurante\n\n", p++);
						  printf("Restautrante: %s\nBairro: %s\nCidade: %s\nTipo: %s\nNota: %d\n",restaurante[i].Restaurante,restaurante[i].bairro,restaurante[i].cidade,restaurante[i].tipo,restaurante[i].nota);	
						 }
					 }
             		
             	break;
             	
             	case 3:
             		printf("Digite o nome do restaurante que você queira deletar\n: ");
             	    gets(ku);
             	    for(int y=0;y < 20;y++)
					 {
             	    	if (strcmp(ku,restaurante[y].Restaurante)==0)
             	    	{
             	    		capet=y;
             	    		restaurante[y].nota=44731;
						 }
					 }
             	break;
             	
             	case 4:
             		puts("digite a nota base dos restaurantes que serão mostrados na tela:\n");
             		scanf("%d", &ca);
             		getchar();
             		for (int u=0;u<20;u++)
             		if (restaurante[u].nota==44731)
             		{
             			
					 }
					 else 
					 {
             		if (restaurante[u].nota>=ca)
             	    	{
             	    		printf("Restautrante: %s\nBairro: %s\nCidade: %s\nTipo: %s\nNota: %d\n",restaurante[u].Restaurante,restaurante[u].bairro,restaurante[u].cidade,restaurante[u].tipo,restaurante[u].nota);
						 }
					}
             	break;
             	
             	case 5:
             		puts("digite o tipo de comida de restaurante que quer que seja exibido na tela:\n");
             		gets(rest);
             		for (int f=0;f<20;f++)
             		if (strcmp(rest,restaurante[f].tipo)==0)
             	    	{
             	    		printf("Restautrante: %s\nBairro: %s\nCidade: %s\nTipo: %s\nNota: %d\n",restaurante[f].Restaurante,restaurante[f].bairro,restaurante[f].cidade,restaurante[f].tipo,restaurante[f].nota);
						 }
             	break;
             	
             	default:
             	printf(".");
}
}
}
