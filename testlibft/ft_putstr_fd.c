#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char	string[] = "hello";
	int	fd = 1;
	ft_putstr_fd(string, fd);
}
*/
