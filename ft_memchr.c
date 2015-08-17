/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:57:19 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 19:10:19 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	if (s)
	{
		i = 0;
		str = (char*)s;
		if (n == 0)
			return (NULL);
		while (str[i] != (char)c && i + 1 < n)
			i++;
		if (str[i] == (char)c)
			return ((void*)(str + i));
	}
	return (NULL);
}
