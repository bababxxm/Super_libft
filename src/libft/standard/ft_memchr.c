/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:26:19 by sklaokli          #+#    #+#             */
/*   Updated: 2024/11/17 03:47:57 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}