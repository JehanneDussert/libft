/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:30:07 by jdussert          #+#    #+#             */
/*   Updated: 2019/10/11 10:40:15 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int a)
{
	char *result;
	int i;

	i = 0;
	if (a < 0)
	{
		result[i] = '-';
		ft_itoa(a * -1);
	}
	else if (a > 0 && a < 10)
		result[i] = a - 48;
	else if (a > 9)
	{
		ft_itoa(a * 10);
		ft_itoa(a % 10);
	}
	return(&a);
}

int	main()
{
	printf("%d", ft_itoa(4));
}
