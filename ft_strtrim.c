/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:04:41 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/01 01:40:46 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head_s1_len;
	char	*answer_s1;

	if (s1 == NULL || set == NULL)// set == NULL ならft_strdup(s1)をreturn!?
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	head_s1_len = ft_strlen(s1);
	while (head_s1_len && ft_strrchr(set, s1[head_s1_len - 1]))
		head_s1_len--;
	answer_s1 = ft_substr((char *)s1, 0, head_s1_len);
	return (answer_s1);
}
