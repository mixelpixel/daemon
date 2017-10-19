CC=gcc

daemon: clean
	$(CC) daemon.c -o daemon

clean:
	rm -f daemon
