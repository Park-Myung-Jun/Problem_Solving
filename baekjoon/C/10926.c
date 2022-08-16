#include <stdio.h>
#include <string.h>

int main()
{
  char str[1024] = {0};
  
  scanf("%s", str);
  
  strcat(str, "\?\?!");
  
  printf("%s\n", str);
  
  return 0;
}
