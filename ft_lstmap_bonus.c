/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:05:34 by mflury            #+#    #+#             */
/*   Updated: 2022/11/28 16:15:35 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resp;
	t_list	*bloc;

	if (!f || !lst || !del)
		return (NULL);
	resp = NULL;
	while (lst)
	{
		bloc = ft_lstnew(f(lst->content));
		if (bloc == NULL)
		{
			ft_lstclear(&resp, del);
			return (NULL);
		}
		ft_lstadd_back(&resp, bloc);
		lst = lst->next;
	}
	return (resp);
}
