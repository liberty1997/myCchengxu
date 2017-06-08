# helloworld is a binary file
CC=gcc

helloworld_exec: helloworld.o
	echo "good"
	$(CC) -o $@ $^


helloworld.o: helloworld.c
	$(CC) -c -o $@ $^
