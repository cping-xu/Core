/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:31:55 by cping-xu          #+#    #+#             */
/*   Updated: 2022/11/30 14:31:55 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pb(char **a, char **b)
{
	char	*temp;
	int		i;

	i = 0;
	temp = a[0];
	if (!(b[i]))
		b[i] = NULL;
	while (b[i])
		i++;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = temp;
	while (a[i + 1])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = NULL;
	write (1, "pb\n", 3);
}
