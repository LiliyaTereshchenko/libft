#include <stdio.h>
#include "libft.h"

int main()
{
	char s1[100] = "LKNBLFJNN";
	char s2[100] = "";
	char s3[100] = "gbhghrghnrg";
	char s4[100] = "fefefefe";

	char s5[100] = "LKNBLFJNN";
	char s6[100] = "";
	char s7[100] = "gbhghrghnrg";
	char s8[100] = "fefefefe";

	printf("%s", ft_strncat(s1, s2, 4));
	printf("%c", '\n');
	printf("%s", ft_strncat(s3, s4, 5));
	printf("%c", '\n');
	printf("%s", strncat(s5, s6, 4));
	printf("%c", '\n');
	printf("%s", strncat(s7, s8, 5));
	return (0);
}
