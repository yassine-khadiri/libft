/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:47:07 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/11/20 16:19:55 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *neww)
{
	t_list	*tmp;

	if (*alst == NULL)
		*alst = neww;
	else
	{
		tmp = ft_lstlast(*alst);
		tmp->next = neww;
	}
}
