/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:08:23 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/11/20 18:28:30 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	if (set == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	tab = (char *)malloc((end - start + 1) * sizeof(char));
	if (end < start || tab == NULL)
		return (NULL);
	while (start < end)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}
