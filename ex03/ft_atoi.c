/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:12:25 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/14 13:18:47 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	nonsense_calc(int i)
{
	int	j;
	int	k;

	j = -1;
	k = 1;
	while (++j != i)
		k *= 10;
	return (k);
}

int	len(char *str, int i)
{
	int	cant;

	cant = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		cant++;
		i++;
	}
	return (cant);
}

int	calc_atoi(char *str, int i, int sign)
{
	int	number;
	int	cant;
	int	lenn;

	lenn = len(str, i);
	cant = 0;
	number = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		++cant;
		number += (str[i] - 48) * nonsense_calc(lenn - cant) * sign;
		i++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = -1;
	sign = 1;
	num = 0;
	while (str[++i] == ' ' || str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			sign *= -1;
	if (str[i] > 47 && str[i] < 58)
		num = calc_atoi(str, i, sign);
	return (num);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  -+----+-2147483648--+-ab567"));
}
