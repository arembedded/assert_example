INC_DIR=/home/arembedded/Projects/assert_example

ex: test.c assert_util.c
	gcc test.c assert_util.c -I$(INC_DIR) -o test.o

all: ex

clean:
	rm -rf *.o	
