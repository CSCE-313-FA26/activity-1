# CSCE 313 - Activity 1
#
#   make            build both programs
#   make clean      remove them
#
# Same toolchain as Lab 1: g++ -std=c++17 -g. The -g is what lets GDB show you
# source lines and variable names.

CXX      = g++
CXXFLAGS = -std=c++17 -g -Wall -Wextra

PROGS = observe spawn

all: $(PROGS)

observe: observe.cpp
	$(CXX) $(CXXFLAGS) observe.cpp -o observe

spawn: spawn.cpp
	$(CXX) $(CXXFLAGS) spawn.cpp -o spawn

clean:
	rm -f $(PROGS)

.PHONY: all clean
