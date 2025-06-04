CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = Lab5.c cJSON.c
OBJ = $(SRC:.c=.o)
TARGET = build/lab5

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p build
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build *.o
