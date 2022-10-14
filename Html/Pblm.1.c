#include <stdio.h>
int main()
{
  char str[100], rev[100];
  int i, j, count = 0;
  scanf("%[^\n]s", str);

  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nString After Reverse: %s", rev);
}
