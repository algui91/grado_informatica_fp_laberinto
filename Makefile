BIN     = bin
SRC 	  = src
INC 	  = ./include
OBJ 	  = obj
CXX 	  = g++
CPPFLAGS  = -Wall -O3 -ansi -I$(INC) 

LABS = laberinto
SOURCE = $(SRC)/*.cpp
OBJS = $(OBJ)/main.o $(OBJ)/Laberinto.o
INCS = $(INC)/*.h

all: $(BIN)/$(LABS)

$(BIN)/$(LABS): $(OBJS)
	@echo Creando $@... con $?
	$(CXX) $(CPPFLAGS) $^ -o $@

$(OBJ)/main.o: $(SRC)/main.cpp
	@echo Creando $@... con $^
	$(CXX) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

$(OBJ)/Laberinto.o: $(SRC)/Laberinto.cpp $(INCS)
	@echo Creando $@... con $^
	$(CXX) $(CPPFLAGS) -c  $(SRC)/Laberinto.cpp -o $(OBJ)/Laberinto.o


# ************ Limpieza ************
.PHONY: clean
clean :
	@echo Limpiando archivos intermedios...
	rm $(OBJ)/*
	rm $(SRC)/*.*~
