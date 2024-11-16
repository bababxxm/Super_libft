/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:22:57 by sklaokli          #+#    #+#             */
/*   Updated: 2024/11/17 03:48:09 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		tmp[n - 1] = (char)c;
		n--;
	}
	return ((char *)tmp);
}
