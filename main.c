#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temp;
  temp = readline("Enter temperature in celsius: ");

  double tempC = atof(temp);
  double tempF = ( tempC * 9/5) + 32;

  printf("%f° in Celsius is equivalent to %f°  Fahrenheit./n",tempC, tempF);

  return 0;
}