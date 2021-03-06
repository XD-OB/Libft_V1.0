/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poslltoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ishaimou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 07:01:24 by ishaimou          #+#    #+#             */
/*   Updated: 2019/04/17 07:02:03 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		len_res(long long nbr)
{
	size_t		len;

	len = 1;	
	while (nbr /= 10)
		len++;
	return (len);
}

char			*ft_poslltoa(long long nbr)
{
	size_t		len;
	char		*res;

	if (nbr == LLONG_MIN)
		return (ft_strdup("9223372036854775808"));
	if (nbr < 0)
		nbr *= -1;
	len = len_res(nbr);
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		res[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}
