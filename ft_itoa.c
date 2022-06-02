/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:59:50 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/31 00:13:12 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h> 

static	int	count_digits(int n)
{
	int	digits_num;

	digits_num = 0;
	while (n != 0)
	{
		n /= 10;
		digits_num++;
	}
	return (digits_num);
}

static	int	ft_recursive_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power >= 1)
	{
		answer = nb * ft_recursive_power(nb, power - 1);
		return (answer);
	}
	return (0);
}

static	char	*change_num(int digits_num, char *change_c, int n)
{
	int	index;
	int	div;
	int	single_digit;

	index = 0;
	div = ft_recursive_power(10, digits_num - 1);
	while (digits_num > 0)
	{
		if (n < 0)
		{
			change_c[index++] = '-';
			n *= -1;
		}
		single_digit = n / div;
		n %= div;
		change_c[index] = single_digit + '0';
		div /= 10;
		index++;
		digits_num--;
	}
	return (change_c);
}

char	*ft_itoa(int n)
{
	int		digits_num;
	char	*change_c;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	digits_num = count_digits(n);
	change_c = (char *)malloc(sizeof(char) * digits_num + 2);
	if (change_c == NULL)
		return (NULL);
	change_num(digits_num, change_c, n);
	return (change_c);
}
