NAME = UFO
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++11
SRC = ufo_functions.cpp ufo.cpp
OBJ_FOLDER = ./obj
RM = rm -rf
OBJ = $(SRC:%.cpp=$(OBJ_FOLDER)/%.o)


all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

$(OBJ_FOLDER)/%.o: %.cpp
	@mkdir -p $(OBJ_FOLDER)
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@$(RM) $(OBJ_FOLDER) $(NAME)

re: clean all 


run: $(NAME)
	@./$(NAME)

.PHONY: all clean re run