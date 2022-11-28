NAME		= path

SRCS		= path.c

OBJS		= $(SRCS:%.c=%.o)

RM		= rm -f

CC		= gcc -Wall -Wextra -Werror #-g -fsanitize=address

.c.o:
			@$(CC) -c $< -o $@

all:		$(NAME)

$(NAME): 	 $(OBJS)
			$(CC) $(OBJS) -o $(NAME)
			@echo "$(GREEN)Successfully built --> $(YELLOW)$(NAME)$(DEFAULT)"

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			@echo "$(RED)Files Removed!$(DEFAULT)"

re:			fclean all

god:
			git status
			git add .
			git commit -m "random Makefile commit😋"

.PHONY:		all clean re fclean

#COLORS
GREEN = \033[1;32m
RED = \033[1;31m
DEFAULT = \033[0m
YELLOW = \033[1;33m