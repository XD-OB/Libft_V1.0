#include "libft.h"

static size_t		len_res(unsigned long long nbr, int base)
{
	size_t		len;

	len = 1;
	while (nbr /= base)
		len++;
	return (len);
}

char			*ft_ulltoa_base(unsigned long long nbr, int base)
{
	size_t		len;
	char		*res;

	len = len_res(nbr, base);
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		if (nbr % base < 10)
			res[len] = (nbr % base) + '0';
		else
			res[len] = (nbr % base) + 'A' - 10;
		nbr /= base;
	}
	return (res);
}
