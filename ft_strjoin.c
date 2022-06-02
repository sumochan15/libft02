/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:05:12 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/29 01:24:59 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && s2)
		newstr = (char *)s2;
	if (!s2 && s1)
		newstr = (char *)s1;
	else if (!s1 && !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, len_s1 + 1);
	ft_strlcat(newstr, s2, len_s1 + len_s2 + 1);
	return (newstr);
}
