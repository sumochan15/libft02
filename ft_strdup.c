/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 07:17:42 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/30 23:43:34 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(src);
	i = 0;
	if (src != NULL && dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (str_len);
}
*/

char	*ft_strdup(const char *s1)
{
	char	*cpy_s1;
	void	*cpy_space;
	size_t	len;

	cpy_s1 = (char *)s1;
	len = ft_strlen(s1);
	cpy_space = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy_space == NULL)
		return (NULL);
	ft_strlcpy(cpy_space, cpy_s1, len + 1);
	return (cpy_space);
}
