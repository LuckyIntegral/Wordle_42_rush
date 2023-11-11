/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:09:56 by vfrants           #+#    #+#             */
/*   Updated: 2023/11/11 02:34:14 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wordle.h"

int	main(void)
{
	t_hash_table	table;

	if (table_init(&table) == FAILURE)
		exit_program(MALLOC_FAIL);
	parse_file(&table);

	printf("Test 1 for hello %d\n", table_contains(&table, "HELLO"));
	printf("Test 2 for hello %d\n", table_contains(&table, "WORLD"));
	printf("Test 3 for hello %d\n", table_contains(&table, "SASKE"));

	table_destroy(&table);
	return (SUCCESS);
}
