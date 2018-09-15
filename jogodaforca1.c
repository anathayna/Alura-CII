#include <stdio.h>
#include <string.h>

int main(void) {
  char palavrasecreta[20];

  sprintf(palavrasecreta, "MELANCIA"); //s de string

  int acertou = 0; //condição booleana
  int enforcou = 0;

  //! = negação = interção

  char chutes[26];
  int tentativas = 0;

  do {

    for(int i=0; i<strlen(palavrasecreta); i++){
      
      int achou = 0;

      for(int j=0; j < tentativas; j++){
        if(chutes[j] == palavrasecreta[i]){
          achou = 1;
          break;
        }
      }
      if(achou){
        printf("%c ", palavrasecreta[i]);
      }
      else{
      printf("_ ");
      }
    }
    printf("\n\n");

    char chute;
    scanf(" %c", &chute); //espaço %c p/ ignorar o enter

    chutes[tentativas] = chute;
    tentativas++;

  } while(!acertou && !enforcou); //!acertou = acertou = 0

  return 0;
}
