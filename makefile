CC=gcc
OPTS=-g -Wall -Wextra
SOURCE=brackets.c
TARGET=brackets

all: $(TARGET)

clean:
	rm -f $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(OPTS) $(SOURCE) -o $(TARGET)
