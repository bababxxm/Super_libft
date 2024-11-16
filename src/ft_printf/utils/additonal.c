/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additonal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:53:42 by sklaokli          #+#    #+#             */
/*   Updated: 2024/11/17 03:44:54 by sklaokli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/ft_printf.h"

int	ft_printf_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_printf_puthex(unsigned long n, const char c)
{
	if (n >= 16)
	{
		ft_printf_puthex(n / 16, c);
		ft_printf_puthex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_printf_putchar(n + '0');
		else if (n >= 10)
		{
			if (c == 'x' || c == 'p')
				ft_printf_putchar(n - 10 + 'a');
			else if (c == 'X')
				ft_printf_putchar(n - 10 + 'A');
		}
	}
}

void	ft_printf_putnbr(int num)
{
	long	n;

	n = num;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_printf_putnbr(n / 10);
		ft_printf_putnbr(n % 10);
	}
	else
		ft_printf_putchar(n + '0');
}

void	ft_printf_putuns(unsigned int n)
{
	if (n >= 10)
	{
		ft_printf_putuns(n / 10);
		ft_printf_putuns(n % 10);
	}
	else
		ft_printf_putchar(n + '0');
}
