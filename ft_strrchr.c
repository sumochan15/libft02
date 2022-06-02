/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 05:25:27 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/30 23:14:04 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	size_t	ft_strlen2(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len + 1);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen2(s);
	while (len_s > 0)
	{
		if (s[len_s - 1] == (unsigned char)c)
			return ((char *)&s[len_s - 1]);
		len_s--;
	}
	return (NULL);
}
