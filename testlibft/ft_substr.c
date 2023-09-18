/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ting <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:10:30 by ting              #+#    #+#             */
/*   Updated: 2023/09/18 23:33:22 by ting             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*str;
	unsigned int	i;

	i = 0;
	str = (char *) s;
	dest = (char *)malloc(len + 1);
	if (start >= ft_strlen(str))
			return (ft_calloc(1, 1));
	if (len > ft_strlen(str) - start)
		len = ft_strlen(s) - start;
	if (str == NULL || dest == NULL)
		return (NULL);
	while (str[start] != '\0' && (start <= ft_strlen(str)) && len > 0)
	{
		dest[i] = str[start + i];
		len--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	string[] = "hello i am bye";
	int	start = 3;
	size_t	len = 5;

	printf("%s", ft_substr(string, start, len));
}
*/
