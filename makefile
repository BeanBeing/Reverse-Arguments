# Compiler
CC = gcc

# C Files
CFILES = main.c

# Compiler Flags
CFLAGS = -Wall -Wextra -Werror -pedantic

#COUT
COUT = reverse

.PHONY: app clean

app: $(OBJS)
	mkdir -p bin ; $(CC) $(CFLAGS) -o bin/$(COUT) $(CFILES)

clean:
	rm -rf bin
