executable = main		
GCC = g++
UTILS = ../../Utils
CFLAGS = -Wall -g -MMD 
OBJ = main.o $(UTILS)/sorting.o


$(executable): $(OBJ)
	$(GCC) $(CFLAGS) $(OBJ) -o $(executable)

%.o: %.cpp
	$(GCC) $(CFLAGS) -c $<


-include $(OBJ:.o=.d)


.PHONY: clean

clean:
	rm -f $(OBJ) $(executable) $(OBJ:.o=.d)
