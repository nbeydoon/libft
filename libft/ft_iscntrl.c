/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:42:42 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:31:49 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || (c == 127));
}
