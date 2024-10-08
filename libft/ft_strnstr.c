/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heda-sil <heda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:35:38 by heda-sil          #+#    #+#             */
/*   Updated: 2022/11/21 11:52:12 by heda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if ((!big || !little) && !len)
		return (NULL);
	if (!*little)
		return ((char *) big);
	i = 0;
	while (big[i] && len > 0)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j])
		{
			if (len - j < 1)
				break ;
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		len--;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char *big;

	big = "aaabcabcd";
	printf("%s\n", ft_strnstr(big, "a", 0));
	return (0);
}*/
