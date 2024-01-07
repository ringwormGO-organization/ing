
CC=g++
CF=-Wall -Wextra -O3 -lGL -lglut
LF= -lGL -lglut

#
#	Ignore the executable, since there are no
#	tests written as of now.
#
override EXE = ing
override C++ = $(shell find ./ -type f -name '*.cpp')
override OBJ = $(C++:.cpp=.o)

.PHONY: all
all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@ $(LF)

%.o: %.cpp
	$(CC) -c $< -o $@ $(CF)

.PHONY: clean
clean:
	rm $(OBJ)
	rm $(EXE)
