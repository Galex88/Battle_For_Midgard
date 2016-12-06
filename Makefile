CC	= gcc
NAME	= my_bfm
SRC	= Sources/main.c	\
	Sources/my_string.c	\
	Sources/readline.c	\
	Sources/random.c	\
	Sources/my_put_nbr.c	\
	Sources/getCreature.c

OBJ	= $(SRC:%.c=%.o)
CFLAGS	= -Werror -Wextra -Wall
RM	= rm -f

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)
