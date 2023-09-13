/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ting <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:40:38 by ting              #+#    #+#             */
/*   Updated: 2023/09/12 22:57:15 by ting             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*string;
	char	cc;

	string = (char *) s;
	cc = (char) c;
	i = 0;
	while (*string != cc)
	{
		if (*string == '\0')
			return (NULL);
		string++;
	}
	return (string);
}
/*
int	main(void)
{
	char	string[] = "hello";
	int	c = 'l';

	printf("ft_strchr: %s\n", ft_strchr(string, c));
	printf("strchr: %s", strchr(string, c));
}
*/
