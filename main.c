#include <stdio.h>

int main() {
  int cadastrado, ativo, logado;
  char opcao;

  printf("deseja cadastrar sua conta? S/N \n");
  scanf(" %c " , &opcao);

  if(apcao == 'S'){
    cadastrado = 1;
    printf("\n conta cadastrada.");
}
  printf("deseja ativar sua conta? S/N \n");
   scanf(" %c " , &opcao);

     if(apcao == 'S'){
        ativado = 1;
    printf("\n conta ativada.");
}
printf("deseja logar sua conta? S/N \n");
   scanf(" %c " , &opcao);

     if(apcao == 'S'){
        logado = 1;
    printf("\n conta logada.");
}
if((cadastrado = 1) && (ativo = 1) && (logado = 1)){
    printf("\n Seja bem vindo.\n");
} else{
    printf("\n Algo deu errado.\n");
}
     
    
    