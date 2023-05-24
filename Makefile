CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
SRC_DIR = src
BIN_DIR = bin

PROGRAM = height-calculator

.PHONY: clean

$(PROGRAM): $(SRC_DIR)/main.c
	@echo "Compiling... Please hold on!"
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $< -o $(BIN_DIR)/$@
	@echo "Compilation successful! Enjoy the chaos!"

clean:
	@echo "Cleaning up... Removing executable and temporary files."
	@rm -rf $(BIN_DIR)
	@echo "All cleaned up! Your mess is gone."

.PHONY: all
all: $(PROGRAM)
