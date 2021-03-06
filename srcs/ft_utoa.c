#include "libft.h"

static size_t		len_res(unsigned int	nbr)
{
	size_t		len;

	len = 1;
	while (nbr /= 10)
		len++;
	return (len);
}

char			*ft_utoa(unsigned int	nbr)
{
	char		*res;
	size_t		len;

	len = len_res(nbr);
	if (!(res = ft_strnew(len)))
		return (res);
	while (len-- > 0)
	{
		res[len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (res);
}
