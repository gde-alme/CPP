/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:38 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 18:56:21 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using std::cout;
using std::string;

int	main() {
	PhoneBook	phoneb;
	string		input = "";

	phoneb.welcome();
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0)
			phoneb.add_cc();
		else if (input.compare("SEARCH") == 0)
			phoneb.search_cc();
		//cin.ignore();
		cout << "> " << std::flush;
		cin >> input;
		//std::getline(cin, input); //??newline why
	}
	return (0);
}
