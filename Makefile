CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main 

cachorro_quente:
	$(CC) $(FLAGS) -c $(SRC)/cachorro_quente.cpp -o $(BUILD)/cachorro_quente.o
	
acai:
	$(CC) $(FLAGS) -c $(SRC)/acai.cpp -o $(BUILD)/acai.o

pedido:
	$(CC) $(FLAGS) -c $(SRC)/pedido.cpp -o $(BUILD)/pedido.o

pizza:
	$(CC) $(FLAGS) -c $(SRC)/pizza.cpp -o $(BUILD)/pizza.o

produto:
	$(CC) $(FLAGS) -c $(SRC)/produto.cpp -o $(BUILD)/produto.o

util:
	$(CC) $(FLAGS) -c $(SRC)/util.cpp -o $(BUILD)/util.o

venda:
	$(CC) $(FLAGS) -c $(SRC)/venda.cpp -o $(BUILD)/venda.o

main: acai cachorro_quente pizza produto pedido venda util
	$(CC) $(FLAGS) $(BUILD)/*.o $(SRC)/main.cpp -o $(TARGET)

clean: 
	$(RM) -r $(BUILD)/*.$(TARGET)