/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ting <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:03:29 by ting              #+#    #+#             */
/*   Updated: 2023/09/25 15:55:00 by ting             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_list;
	t_list	*new_link;

	result_list = NULL;
	while (lst)
	{
		new_link = ft_lstnew(f(lst->content));
		if (!new_link)
		{
			while (result_list)
			{
				new_link = result_list->next;
				(*del)(result_list->content);
				free(result_list);
				result_list = new_link;
			}
			lst = NULL;
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&result_list, new_link);
	}
	return (result_list);
}
