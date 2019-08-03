all: lockdown
	@echo done

lockdown: main.o
	gcc  main.o -L. -o lockdown

main.o: main.c
	gcc -Wextra -Wall -Wvla -D_WIN_ -DNDEBUG -std=c99 -c main.c

clean:
	rm -f *.o *.a main

.PHONY: all, clean