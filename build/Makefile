CPP = g++
BIN_DIR=../bin/
SRC_DIR=../src/
#OBJS_DIR=../src/include/
OBJS_FILES=  ../src/IDriver.interface.cpp ../src/CDriver_type1.class.cpp ../src/test1.cpp 
OBJS= IDriver.interface.o CDriver_type1.class.o test1.o 
FLAGS= -Wall


#
#all: objects
#
#objects:  IDriver.interface.o CDriver_type1.class.o test1.o 
#	$(CPP) -o objects  IDriver.interface.o CDriver_type1.class.o test1.o 
#
#	
#IDriver.interface.o: IDriver.interface.cpp IDriver.interface.h
#	$(CPP) $(FLAGS) -o IDriver.interface.o -c IDriver.interface.cpp 
#
#CDriver_type1.class.o: CDriver_type1.class.cpp CDriver_type1.class.h
#	$(CPP) $(FLAGS) -o $@ -c CDriver_type1.class.cpp 
#
#test1.o: test1.cpp
#	$(CPP) $(FLAGS) -o $@ -c test1.cpp 




.cpp .o :
	$(CPP) $(FLAGS) -c $<

exec: $(OBJS_FILES)
	$(CPP) $(FLAGS) -o $@ $(OBJS_FILES)
	




#CC=g++
#CFLAGS= -Wall 
#LDFLAGS=
#EXEC=test1
#SRC= ../src/IDriver.interface.cpp ../src/CDriver_type1.class.cpp ../src/test1.cpp 
#OBJ= $(SRC:.cpp=.o)
#
#all: $(EXEC)
#
#hello: $(OBJ)
#	$(CC) -o $@ $^ $(LDFLAGS)
#
#test1.o: IDriver.interface.h CDriver_type1.class.h
#
#%.o: %.cpp
#	$(CC) -o $@ -c $< $(CFLAGS)
#
#.PHONY: clean mrproper
#
#clean:
#	rm *.o
#
#mrproper: clean
#	rm $(EXEC)





