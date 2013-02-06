CC = g++

hello	:helloWorld.cpp
	$(CC) -o hello helloWorld.cpp
clean:
	rm -rf hello
