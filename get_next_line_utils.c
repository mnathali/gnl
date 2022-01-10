/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:14:44 by mnathali          #+#    #+#             */
/*   Updated: 2021/11/24 19:14:50 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr_mod(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] != c)
		return (-1);
	return (i);
}

char	*ft_strjoin_mod(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && s2[j] != '\n')
		j++;
	if (s2[j] == '\n')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (0);
	while (s1 && *s1 != '\0')
		*str++ = *s1++;
	while (*s2 != '\0' && *s2 != '\n')
		*str++ = *s2++;
	if (*s2 == '\n')
		*str++ = *s2++;
	*str++ = '\0';
	return (str - (i + j + 1) * sizeof(char));
}
