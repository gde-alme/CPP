/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:00:18 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/11 03:00:19 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Public func */
Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void    Harl::complain(std::string level) {
    /* List funcs names in array of strings */
    std::string complainFuncs[] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    /* Save each func addr as func pointer in array of func pointers */
    void    (Harl::*complainPtr[]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    /* Loop untill match is found */
    for (int i = 0; i < 4; i++) {
        void (Harl::*choosenComplain)(void) = complainPtr[i];
        if (level == complainFuncs[i])
            (this->*choosenComplain)();
    }
}

/* Private func */
void    Harl::debug(void) {
    std::cout << "Debuging this is such a waste of my planet sized brain, said Marvin" << std::endl;
}

void    Harl::info(void) {
    std::cout << "Can't believe Marvin's tasks are so mundane... " << std::endl;
}

void    Harl::warning(void) {
    std::cout << "One day Marvin might just do it. Not the life he was expecting for sure!" << std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! Get me Zaphod Beeblebrox NOW!!" << std::endl;
}