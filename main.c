#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temp;
  temp = readline("Enter temp in Celsius: ");
  double tempC = atof(temp);
  printf("%f!/n",tempC);
  //= atof(strT);

  return 0;
}