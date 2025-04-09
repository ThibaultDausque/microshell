CC = cc
CFLAGS = -g -Wall -Wextra -Werror
LDFLAGS = -lreadline
NAME = ./microshell

SRCS = main.c \
	parse.c \
	utils.c 

OBJ_DIR = objs
OBJ = $(SRCS:%.c=$(OBJ_DIR)/%.o)


all: $(NAME) $(PRINTF_A)
	@echo "Compilation of $(NAME) : \033[1;32mOK\033[0m"

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $@


clean:
	@rm -rf $(OBJ_DIR)
	@echo "Clean of $(NAME) : \033[1;32mOK\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "Fclean of $(NAME) : \033[1;32mOK\033[0m"

re: fclean all

.PHONY: all clean fclean
