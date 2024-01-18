GCC = gcc
FLAGS = -Wall -Werror -Wextra

all: rebuild

main:
	$(GCC) $(FLAGS) *.c -o viewer -lGL -lGLU -lglut

clean:
	rm -rf viewer

rebuild: clean main