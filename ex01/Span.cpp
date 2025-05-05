/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:52 by atamas            #+#    #+#             */
/*   Updated: 2025/05/05 23:37:54 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_N(N), m_Size(0), m_Array(new int[N])
{

}

Span::Span(const Span& original) : m_N(original.m_N), m_Size(original.m_Size), m_Array(new int[original.m_N])
{
	*this = &original;
}

Span &Span::operator=(const Span& original)
{
	if (this != &original)
	{
		m_N = original.m_N;
		m_Size = original.m_Size;
		delete[] m_Array;
		m_Array = new int[original.m_N];
		for (unsigned int i; i < m_N; i++)
			m_Array[i] = original.m_Array[i];
	}
	return *this;
}

~Span::Span()
{
	delete m_Array[];
}
