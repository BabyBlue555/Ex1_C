# written by Michal Elisha
CC=gcc
OBJECTS_MAIN=main.o
OBJECTS_ALL=libclassloops.a libclassrec.a libclassloops.so libclassrec.so mains maindloop maindrec
OBJECTS_REC=advancedClassificationRecursion.o
OBJECTS_LOOP=advancedClassificationLoop.o
OBJECTS_BASE=basicClassification.o

REC_C=advancedClassificationRecursion.c 
LOOP_C=advancedClassificationLoop.c
BASE_C=basicClassification.c

NUM_H = NumClass.h
FLAGS= -g -Wall 



all: $(OBJECTS_ALL)

# creating the libraries
loops: libclassloops.a
recursives:libclassrec.a
loopd:libclassloops.so
recursived:libclassrec.so

# executables
# it is possible to change the order of and put -o before the others.
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) $(OBJECTS_MAIN) ./libclassrec.a -o mains -lm


maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS)  $(OBJECTS_MAIN) ./libclassloops.so -o maindloop -lm


maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) $(OBJECTS_MAIN) ./libclassrec.so -o maindrec -lm

# libraries
# check if ranlib is ok

libclassloops.a: $(OBJECTS_LOOP) $(OBJECTS_BASE) 
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP) $(OBJECTS_BASE) 
	

libclassrec.a: $(OBJECTS_REC) $(OBJECTS_BASE) 
	$(AR) -rcs libclassrec.a $(OBJECTS_REC) $(OBJECTS_BASE) 


libclassloops.so: $(OBJECTS_LOOP) $(OBJECTS_BASE) 
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP) $(OBJECTS_BASE) 
  
libclassrec.so: $(OBJECTS_REC) $(OBJECTS_BASE) 
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC) $(OBJECTS_BASE) 


# compiling the o. files
$(OBJECTS_LOOP): $(LOOP_C) $(NUM_H)
	$(CC) $(FLAGS) -c $(LOOP_C) $(NUM_H) -lm

$(OBJECTS_REC): $(REC_C)  $(NUM_H)
	$(CC) $(FLAGS) -c $(REC_C) $(NUM_H) -lm

$(OBJECTS_BASE): $(BASE_C) $(NUM_H)
	$(CC) $(FLAGS) -c $(BASE_C) $(NUM_H) 

$(OBJECTS_MAIN): main.c $(NUM_H)
	$(CC) $(FLAGS) -c main.c $(NUM_H) -lm

.PHONY: clean loops recursives recursived loopd all

clean:
	rm -f *.o *.a *.so  *.gch mains maindrec maindloop



