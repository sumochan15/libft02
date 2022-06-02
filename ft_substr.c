/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:43:51 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/28 17:49:49 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	void	*res;

	s_len = ft_strlen(s);
	if ((size_t)start + len > s_len)
	{
		if (s_len > (size_t)start)
			len = s_len - (size_t)start;
		else
			len = 0;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}

// int main (void)
// {
// 	char 	test[] = "Helloworld!";
// 	char 	*answer;
// 	int		i;
// 	char	c_answer;

// 	i = 1;
// 	answer = ft_substr(test, 15, 11);
// 	while (answer && i <= 11)
// 	{
// 		c_answer = *answer;
// 		printf("%c", c_answer);
// 		answer = answer + 1;
// 		i++;
// 	}
// 	return(0);
// }