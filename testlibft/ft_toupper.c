
//#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
printf("If the char is a, result:%c", ft_toupper(c));printf("If the char is a, result:%c", ft_toupper(c));	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("If the char is a, result:%c\n", ft_toupper('a'));
	printf("If the char is z, result:%c\n", ft_toupper('z'));
	printf("If the char is 4, result:%c\n", ft_toupper('4'));
}
*/
