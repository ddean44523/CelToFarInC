// author Daniel Dean dpd5518@psu.edu
// contributor Seulki Kim svk6271@psu.edu
// contributor Gloria Kang yjk5152@psu.edu
// // contributor Heonyeong Ha hzh5274@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temp;
  temp = readline("Enter temperature in celsius: ");

  double tempC = atof(temp);
  double tempF = ( tempC * 9/5) + 32;

  printf("%f° in Celsius is equivalent to %f° Fahrenheit.",tempC, tempF);

  return 0;
}