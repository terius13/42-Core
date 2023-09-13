
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i] && s2[i] && r == 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	char	s1[] = "baa";
	char	s2[] = "aa";
	size_t	n = 3;
	int	r;

	r = ft_strncmp(s1, s2, n);
	if (r == 0)
		printf("The string are equal");
	else if (r < 0)
		printf("s1 is bigger than s2");
	else
		printf("s1 is smaller than s2");
}
*/
