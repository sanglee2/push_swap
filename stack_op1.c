/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:36:02 by sanglee2          #+#    #+#             */
/*   Updated: 2023/03/17 19:28:01 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// 굳이 이중 연결리스트로 구현을 해야 했을까?

void push_top(t_stack *stack, t_node *node)
{
	if (stack->a_size == 0)
	{
		stack->a_top = node;
		stack->a_bot = node;
	}
	else if (stack->a_size == 1) // 이중 연결리스트 때문에 일어나는 일일
	{
		stack->a_bot->prev = node;
		node->next = stack->a_top;
		//stack->a_top = node;
		//stack->a_top->next = stack->a_bot;
		stack->a_top = node;

	}
	else
	{
		stack->a_top->prev = node;
		node->next = stack->a_top;
		stack->a_top = node;	
	}
}

void push_bot(t_stack *stack, t_node *node)
{
	// stack a가 비어있을 때.
	// top 과 bot 모두가 현재 노드를 가리킬 수 있도록.
	if (stack->a_size == 0)
	{
		stack->a_top = node;
		stack->a_bot = node;
	}
	else if (stack->a_size == 1)
	{
		stack->a_top->next = node;
		stack->a_bot = node;
		stack->a_bot->prev = stack->a_top;
	}
	else
	{
		stack->a_bot->next = node;
		node->prev = stack->a_bot;
		stack->a_bot = node;
	}
}

t_node* pop_top(t_stack *stack)
{
	t_node *node;

	//stack이 비어있는지 확인.
	node = stack->a_top;
	stack->a_top = node->next;
	return (node);
} 

t_node pop_bot(t_stack *stack)
{
	t_node *node;

	//stack이 비어있는지 확인.
	node = stack->a_bot;
	stack->a_bot = node->prev;
	return (node);
}