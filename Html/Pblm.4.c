#include <stdio.h>
int
Input_Number ()
{
 int input_number;
 scanf ("%d", &input_number);

return input_number;
}

void
character_extractor (int user_input)
{
 int tmp_input = user_input;
 int digit = 0;

while (tmp_input != 0)
 {
  tmp_input /= 10;
  digit++;
  }
   if (digit != 5)
 {
 printf ("Wrong input");
 }
  else
{
int digits[5], n = 0;
tmp_input = user_input;
while (tmp_input != 0)
{
 digits[n] = tmp_input % 10;
 n++;
 tmp_input = tmp_input / 10;
}

char pass_char[] =
	{ '?', '#', 'a', 't', 'j', '9', 'E', '@', '2', 'F' };

for (int r = 4; r >= 0; r--)
	{
    printf ("%c", pass_char[digits[r]]);
    }
}
}
int main ()
{
character_extractor (Input_Number ());
return 0;
}
