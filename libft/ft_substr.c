/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:45:09 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/16 12:02:25 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len - 1)
		start = s_len;
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	printf("%s\n", ft_substr(argv[1], 0, 15));
}*/
