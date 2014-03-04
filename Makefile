CC=gcc

all: out/main out/chat_server
	$(CC) $^ -o app

out/main: src/main.c src/chat_server.h
	$(CC) src/main.c -c $@ -Isrc

out/chat_server: src/chat_server.c src/chat_server.h
	$(CC) src/chat_server.c -c $@ -Isrc

clean:
	rm ./out/*

run:
	@./out/app

