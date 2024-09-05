NAME = UFO
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = ufo_functions.cpp ufo.cpp
OBJ_FOLDER = ./obj
RM = rm -rf
OBJ = $(SRC:%.cpp=$(OBJ_FOLDER)/%.o)


all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

$(OBJ_FOLDER)/%.o: %.cpp
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ_FOLDER)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re