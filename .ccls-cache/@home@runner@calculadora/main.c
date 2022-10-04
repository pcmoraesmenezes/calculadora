#include <stdio.h>
int main()
{
  float primeiro, segundo;
  char sinal;
  printf("Digite a operação elementar : ");
  scanf("%c", &sinal);
  printf("Digite dois valores\n");
  scanf("%f %f", &primeiro, &segundo);
  switch(sinal)
    {
      case '+':
        printf("%3f", primeiro + segundo );
      break;
      case '-':
      printf("%f", primeiro - segundo);
      break;
      case '*':
      printf("%3f", primeiro * segundo);
      break;
      case '/':
      printf("%3f", primeiro / segundo);
    }
  }
