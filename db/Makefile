mysqllib  = mysqlclient
mysqlinc  = /usr/include/mysql/
mysqlL    = /usr/lib/mysql
CC	  = g++
FLAGS	  = -l$(mysqllib) -I$(mysqlinc) -L$(mysqlL)
insert	:insert.cpp
	$(CC) -o insert.out insert.cpp $(FLAGS)

update	:update.cpp
	$(CC) -o update.out update.cpp $(FLAGS)

delete	:delete.cpp
	$(CC) -o delete.out delete.cpp $(FLAGS)	

hello	:helloWorld.cpp
	$(CC) -o hello.out helloWorld.cpp

clean:
	rm -rf *.out
	rm -rf *.o
