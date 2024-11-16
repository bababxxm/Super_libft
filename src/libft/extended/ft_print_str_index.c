/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:54:25 by sklaokli          #+#    #+#             */
/*   Updated: 2024/11/17 03:46:36 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/libft.h"

void	ft_print_str_index(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		printf("s[%d]: %c\n", i, s[i]);
}

int	main(void)
{
	ft_print_str_index("dsadasd");
}
