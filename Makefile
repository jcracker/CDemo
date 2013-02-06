CC = g++

hello	:helloWorld.cpp
	$(CC) -o hello.out helloWorld.cpp
clean:
	rm -rf *.out
