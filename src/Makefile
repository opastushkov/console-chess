CC=g++
CFLAGS=-c -Wall -std=c++17
SOURCES=main.cpp board.cpp input.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=chess_game

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
		$(CC) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o $(EXECUTABLE)
