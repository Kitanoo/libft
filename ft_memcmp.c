/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouk <mel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:55:46 by mel-mouk          #+#    #+#             */
/*   Updated: 2014/12/23 18:57:02 by mel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    size_t          i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    while(i < n && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}