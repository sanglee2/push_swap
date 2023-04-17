/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 08:18:15 by sanglee2          #+#    #+#             */
/*   Updated: 2023/04/15 22:48:04 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 스택 초기화 하는 부분이 필요하다.
// atoi에서 인자를 어떻게 받아올지.

t_node* init_node(int data) // calloc + content만 data. -- calloc
							// count = 1, sizeof (구조체)
{
	t_node *node;

	node = (t_node *)malloc(1 * sizeof(t_node));
	if (!node)
		return (0);
	node->prev = NULL;
	node->content = data;
	node->next = NULL;
	return (node);
}
//stack

// deq_a, deq_b 필요한 만큼, 필요한 형식으로 초기화.

t_deq *deq_init(t_deq *deq_a)
{
	push_bot(deq_a, node); //node에 담았던 데이터들이 필요한 부분 아니냐?
	deq_a->a_size = 

}




