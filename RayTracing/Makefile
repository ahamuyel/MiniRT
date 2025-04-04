NAME = rayTracing

SRC = main.c
OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror 
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) -lm

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

