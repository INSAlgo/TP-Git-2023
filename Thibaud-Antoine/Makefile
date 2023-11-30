PROJECT=$(shell basename $(CURDIR))
ifeq (, $(shell which clang))
CC=gcc
else
CC=clang
endif
SOURCES=$(shell ls *.c)
OBJECTS=$(subst .c,.o,$(SOURCES))
HEADERS=$(shell ls *.h)
INCLUDES=-I/usr/local/Cellar/2.5.1/include 
LIBS_EXTRA=-L/usr/local/Cellar/csfml/2.5.1/lib/ 
LIBS=-lcsfml-system -lcsfml-graphics -lcsfml-window -lm $(LIBS_EXTRA)

%.o: %.c $(HEADERS)
	$(CC) $(INCLUDES) -g -c $< -o $@

$(PROJECT): $(OBJECTS)
	$(CC) $(LIBS) -o $(PROJECT) $(OBJECTS)

$(PROJECT).zip: $(SOURCES) $(HEADERS) Makefile
	zip $(PROJECT).zip $(SOURCES) $(HEADERS) Makefile

all: $(PROJECT)
package: $(PROJECT).zip
clean:
	rm -f $(PROJECT).zip $(OBJECTS)