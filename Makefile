CC = clang

CFLAGS = -Wall -Wextra
LDLIBS = -lncurses

ifdef DEBUG
	CFLAGS += -g -O0
else
	CFLAGS += -O2
endif

SRC_DIR = src
BUILD_DIR = build

PROGRAMS = $(patsubst $(SRC_DIR)/%.c,%,$(wildcard $(SRC_DIR)/*.c))

.PHONY: all clean

all: $(PROGRAMS)

%: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -rf $(BUILD_DIR)
