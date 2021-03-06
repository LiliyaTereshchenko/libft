#include <stdio.h>
#include "libft.h"

int main()
{
    char s1[100]= "hchckkshchckhso";
    char s2[100] = "hck";
	printf ("s1 = %s; s2 = %s, n = 5\n", s1, s2);
    printf ("%d\n",ft_strncmp(s1, s2, 5));
    printf ("%d\n",strncmp(s1, s2, 5));
  	
	char s3[100]= "";
	char s4[100] = "";
	printf ("s1 = %s; s2 = %s (empty str), n = 5 \n", s3, s4);
	printf ("%d\n",ft_strncmp(s3, s4, 5));
	printf ("%d\n",strncmp(s3, s4, 5));

	char s5[100]= "12";
	char s6[100] = "12";
	printf ("s1 = %s; s2 = %s, n = 1 \n", s5, s6);
	printf ("%d\n",ft_strncmp(s5, s6, 1));
	printf ("%d\n",strncmp(s5, s6, 1));

	char s9[100]= "1234";
	char s10[100] = "12";
	printf ("s1 = %s; s2 = %s, n = 2\n", s9, s10);
	printf ("%d\n",ft_strncmp(s9, s10, 2));
	printf ("%d\n",strncmp(s9, s10, 2));

	char s7[100]= "\0";
	char s8[100] = "\0";
	printf ("s1 = %s; s2 = %s (term), n = 3 \n", s7, s8);
	printf ("%d\n",ft_strncmp(s7, s8, 3));
	printf ("%d\n",strncmp(s7, s8, 3));
  	return (0);
}

