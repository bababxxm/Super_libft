/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:42:34 by sklaokli          #+#    #+#             */
/*   Updated: 2024/11/17 03:47:10 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((!lst) || (!del))
		return ;
	del(lst -> content);
	free(lst);
}
