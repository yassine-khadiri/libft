/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:24:24 by ykhadiri          #+#    #+#             */
/*   Updated: 2021/11/20 18:28:42 by ykhadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_table(int index, char **tab)
{
	while (index-- >= 0)
		free(tab[index]);
	free(tab);
	return (NULL);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	word_length(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len] != '\0' )
		len++;
	return (len);
}

static char	**add_to_table(const char *s, int c, int words, char **arr)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_length(s, c);
		arr[i] = (char *)malloc((len) * sizeof(char) + 1);
		if (arr == NULL)
			return (free_table(i, arr));
		j = 0;
		while (j < len)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb_words;
	char	**res;

	if (s == NULL)
		return (NULL);
	i = 0;
	nb_words = count_words(s, c);
	res = (char **)malloc((nb_words) * sizeof(char *) + 1);
	if (res == NULL)
		return (NULL);
	add_to_table(s, c, nb_words, res);
	return (res);
}
