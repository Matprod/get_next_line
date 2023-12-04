/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:33:49 by Matprod           #+#    #+#             */
/*   Updated: 2023/12/04 17:58:40 by Matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*strjoin;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	strjoin = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		strjoin[j + i] = s2[j];
		j ++;
	}
	strjoin[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (strjoin);
}

char	*ft_strdup(const char *s)
{
	char			*dup_str;
	unsigned int	index;
	unsigned int	length;

	length = ft_strlen(s);
	dup_str = malloc((length + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	index = 0;
	while (index < length)
	{
		dup_str[index] = s[index];
		index ++;
	}
	dup_str[index] = '\0';
	return (dup_str);
}
