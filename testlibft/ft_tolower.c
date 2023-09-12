
//#include "libft.h"
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The char is A, result:%c\n", ft_tolower('A'));
	printf("The char is Z, result:%c\n", ft_tolower('Z'));
	printf("The char is 4, result:%c\n", ft_tolower('4'));
}
*/
