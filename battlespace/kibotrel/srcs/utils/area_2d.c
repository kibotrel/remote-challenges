/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area_2d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 04:43:42 by kibotrel          #+#    #+#             */
/*   Updated: 2020/06/01 22:00:38 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

uint8_t	area_2d(t_cell min, t_cell max)
{
	return ((max.y - min.y + 1) * (max.x - min.x + 1));
}
