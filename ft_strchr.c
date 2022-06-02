/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:07:47 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 12:39:50 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(s) + 1;
	while (i < len_s)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	const char	*s = "abc 123def";
	int			c = ' ';
	
	char *test1 = ft_strchr(s,c);
	char *test2 = strchr(s,c);
	printf("ft_strchr : %s\n", test1);
	printf("libc : %s\n", test2);
}
*/