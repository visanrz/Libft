/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorsa <victorsa@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:33:03 by victorsa          #+#    #+#             */
/*   Updated: 2025/05/19 17:34:21 by victorsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	len_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	num_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
			i++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (i);
}

static int	get_word(char	**result, int i, char const *s, char c)
{
	int		len_word;

	len_word = len_char(s, c);
	result[i] = (char *)malloc(len_word + 1);
	if (!result[i])
	{
		while (--i >= 0)
			free(result[i]);
		free(result);
		return (0);
	}
	ft_memcpy(result[i], s, (unsigned long)len_word);
	result[i][len_word] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	res = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!get_word(res, i, s, c))
				return (NULL);
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	res[i] = 0;
	return (res);
}
