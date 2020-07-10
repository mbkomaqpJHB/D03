/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:45:29 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/10 15:54:31 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int	main()
{
	int a = 20, b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d \n", a, b);
}
