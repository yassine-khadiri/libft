/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:53:03 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/11/11 16:13:40 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*str;

	length = 0;
	i = 0;
	length = ft_strlen(s1);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < length)
	{
		str[i] = s1[i];
		i++;
	}
	str[length] = '\0';
	return (str);
}
