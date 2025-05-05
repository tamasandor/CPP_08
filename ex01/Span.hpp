/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:12:57 by atamas            #+#    #+#             */
/*   Updated: 2025/05/05 23:33:10 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span :
{
	private:
		int				*m_Array;
		unsigned int	m_Size;
		unsigned int	m_N;
	public:
		Span(unsigned int N);
		Span(const Span& original);
		Span &operator=(const Span& original);
		~Span();
};

#endif