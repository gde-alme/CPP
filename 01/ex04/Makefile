# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 02:59:56 by gde-alme          #+#    #+#              #
#    Updated: 2023/03/11 02:59:57 by gde-alme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================================= #
NAME	= SedLosers
# ================================================= #

# ================================================= #
SRCS_DIR	=	./
SRCS		=	SedLoser.cpp
SRCS		+=	main.cpp
# ================================================= #

# ================================================= #
INC			=	SedLoser.hpp
# ================================================= #

# ================================================= #
OBJS_DIR	=	obj/
OBJ			=	$(SRCS:%.cpp=%.o)
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJ))
# ================================================= #

# ================================================= #
CC			=	@g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	@rm -rf
# ================================================= #

# ================================================= #
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "\033[0;32mCompiling $<\033[0m"
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(INC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "\033[0;32mCleaning: $(OBJS_DIR) && .replace file\033[0m"
	$(RM) $(OBJS_DIR)
	$(RM) *.replace
	
fclean: clean
	@echo "\033[0;32mCleaning: $(NAME)\033[0m"
	$(RM) $(NAME)

re: fclean all
# ================================================= #

.PHONY: all clean fclean re
