SERVER = server
CLIENT = client
CFLAGS = -Wall -Werror -Wextra
CC = cc
LIBFT =	libft
LIBF = libft.a

all:
	@make -C $(LIBFT)
	@cp libft/libft.a .
	$(CC) $(CFLAGS) src/ft-server.c $(LIBF) -o $(SERVER)
	$(CC) $(CFLAGS) src/ft-client.c $(LIBF) -o $(CLIENT)

clean:
	@make clean -s -C $(LIBFT)

fclean: clean
	@make fclean -s -C $(LIBFT)
	@rm -f $(SERVER) $(CLIENT) $(LIBF)

re: fclean all
