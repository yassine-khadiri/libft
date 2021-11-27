/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:16:10 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/11/20 16:22:07 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr;

	arr = (t_list *)malloc(sizeof(t_list));
	if (arr == NULL)
		return (NULL);
	arr->content = content;
	arr->next = NULL;
	return (arr);
}
