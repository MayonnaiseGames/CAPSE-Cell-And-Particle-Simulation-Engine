CXX      := g++
CXXFLAGS := -std=c++23 -Iinclude
LDFLAGS  := -lglfw -lGL -lm -lpthread -ldl -lrt -lX11

SRC  := src/*.cpp src/glad/glad.c
OUT  := main

all: $(OUT)

$(OUT):
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

run: all
	@./$(OUT)
	@rm -f $(OUT)

clean:
	@rm -f $(OUT)
