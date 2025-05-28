/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorsa <victorsa@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:57:59 by victorsa          #+#    #+#             */
/*   Updated: 2025/05/18 14:21:16 by victorsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1) + 1;
	len_s2 = ft_strlen(s2);
	res = malloc(len_s1 + len_s2);
	if (!res)
		return (NULL);
	ft_strlcpy((char *)res, (const char *)s1, len_s1);
	ft_strlcat((char *)res, s2, len_s1 + len_s2);
	return (res);
}
