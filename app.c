#include <string.h>
#include <stdio.h>
typedef struct {
        int id;
        int codigo;
        char titulo[200];
        char descricao[200];
        char status[200];
        int ano;
        char gerente[200];
    }Projetos;
int main(void) {
    //Código, Titulo, Descrição, Ano, Status e o Gerente de Projetos responsável.
    Projetos project[3];
    int i,j,y,x,w,indice;
    char inicial[6]="criado";
    int opcao1 = 1;
    int op = 1;
    int ope = 0;
    while(op != 0 ){
        printf(".....Cadastro de Projetos.....");
        printf("\n");
        printf("|....Cadrastar Projeto....[1]|\n");
        printf("|....Listar Projetos......[2]|\n");
        printf("|....Altera Projeto.......[3]|\n");
        printf("|.........Sair............[0]|\n");
        scanf("%d",&op);
        fflush(stdin);
        switch(op){
            case 1:
                while(opcao1!=0){
                    printf("Digite o titulo do projeto:\n");
                    scanf ( "%s%[^\n]", project[i].titulo);
                    fflush(stdin);
                    printf("Digite ano do projeto:\n");
                    scanf("%d",&project[i].ano);
                    fflush(stdin);
                    printf("Digite codigo do projeto:\n");
                    scanf("%d",&project[i].codigo);
                    printf("Digite descricao projeto:\n");
                    scanf("%s%[^\n]",&project[i].descricao);
                    printf("Gerente responsavel:\n");
                    scanf("%s%[^\n]",&project[i].gerente);
                    fflush(stdin);
                    memcpy(project[i].status,"criado", 6);
                    project[i].id = i;
                    printf("Deseja fazer outra operacao ? SIM[1] NAO[0]\n\n");
                    scanf("%d",&opcao1);
                    fflush(stdin);
                    i++;
                    indice=i;
                }
                i=0;
                break;
            case 2:
                while(j<indice){
                            printf("------------------------------------\n");
                            printf("ID.......%d\n",project[j].id);
                            printf("Nome.....%s\n",project[j].titulo);
                            printf("Ano....%d\n",project[j].ano);
                            printf("Codigo....%d\n",project[j].codigo);
                            printf("Descricao....%s\n",project[j].descricao);
                            printf("Gerente Responsavel....%s\n",project[j].gerente);
                            printf("Nome.....%s\n",project[j].status);
                            printf("------------------------------------\n");
                            j++;
                        }
                        j=0;
                		break;
            case 3:
                printf("Alterar-----------------\n");
                printf("\n\n");
                printf("Digite o codigo do projeto\n");
                scanf("%d",&y);
                fflush(stdin);
                    for(x=0;x<indice;x++){
                    	if(project[x].codigo == y){
                    		printf("Foi encontrado!!\n\n");
                    		printf("O que deseja mudar no projeto\n");
                    		printf("Titulo.......................[1]\n");
                    		printf("Gerente......................[2]\n");
                    		printf("Status.......................[3]\n");
                    		scanf("%d",&ope);
                    		switch(ope){
                    			case 1:
                    				printf("-------------Titulo-------------\n");
									printf("\n\n\n");
                    				printf("Digite o novo titulo do projeto\n");
                    				scanf("%s",project[x].titulo);
                    				printf("Novo nome registrado com sucesso !\n");
                    				printf("--------------------------\n");
                    				break;
                    			case 2:
                    				printf("-------------Gerente-------------\n");
									printf("\n\n\n");
                    				printf("Digite o novo nome do Gerente do projeto\n");
                    				scanf("%s",project[x].gerente);
                    				printf("Novo nome registrado com sucesso !\n");
                    				printf("--------------------------\n");
                    				break;
                    			case 3:
                    				printf("------------Status--------------\n");
									printf("\n\n\n");
									printf("Escolha o novo status do projeto\n");
                    				printf("Fazendo...................[1]\n");
                    				printf("Concluido................[2]\n");
                    				scanf("%d",&w);
                    				if(w == 1){
                    					memcpy(project[i].status,"Fazendo", 7);
									}else if(w == 2){
										memcpy(project[i].status,"Concluido", 9);
									}else{
										printf("ERRO!");
									}
									printf("Status atualizado com sucesso!z\n");
                    				printf("--------------------------\n");
                    				break;
							}
						}else{
							printf("Nao encontrado\n");
						}
					}
                break;
        }
    }
    
    return 0;
}
