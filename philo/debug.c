/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malapoug <malapoug@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:47:11 by malapoug          #+#    #+#             */
/*   Updated: 2025/01/27 16:41:55 by malapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"


void	show_philo(t_philo philo)
{
	printf("o-----------------------------------------------o\n");
	printf("|nbr of philos:\t\t\t\t%d\t|\n", philo.n_philo);
	printf("|ms to die:\t\t\t\t%lld\t|\n", philo.t_die);
	printf("|ms to eat:\t\t\t\t%lld\t|\n", philo.t_eat);
	printf("|ms to sleep:\t\t\t\t%lld\t|\n", philo.t_sleep);
	printf("|nbr of times philos eat to end:\t%lld\t|\n", philo.n_eat);
	printf("o-----------------------------------------------o\n");
}

