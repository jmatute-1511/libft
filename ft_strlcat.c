/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:06:47 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/23 20:19:43 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;
	size_t	count3;

	count = 0;
	count2 = ft_strlen(dst);
	count3 = ft_strlen(src);
	if (dstsize == 0)
		return (count2);
	while (src[count] && (count2 + count) < dstsize - 1)
	{
		dst[count2 + count] = src[count];
		count++;
	}
	dst[count2 + count] = '\0';
	if (dstsize < count2)
		return (count3 + dstsize);
	return (count2 + count3);
}
