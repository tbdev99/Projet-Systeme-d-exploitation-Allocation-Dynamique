CC = gcc
EXEC1 = demonstration
EXEC2 = test
all : $(EXEC1) $(EXEC2)

$(EXEC1) : test.o
	 $(CC) -o $(EXEC2) test.o

$(EXEC2) : demonstration.o
	  $(CC) -o $(EXEC1) demonstration.o

test.o: test.c test.h
	$(CC) -o test.o -c test.c

demonstration.o: demonstration.c
	 $(CC) -o demonstration.o -c demonstration.c

fonctionAllocations.o: fonctionAllocations.c includes.h
	 $(CC) -o fonctionAllocations.o -c fonctionAllocations.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)

doxygen :
	@doxygen ./Doxyfile
