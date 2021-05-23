/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:54:58 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:37:17 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;
	char	*cpy_s;

	cpy_s = (char *)str;
	count = ft_strlen(str);
	while (count >= 0)
	{
		if (cpy_s[count] == c)
			return (cpy_s + count);
		count--;
	}
	return (0);
}
