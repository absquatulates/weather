

OBJDIR := objdir
CCC = g++

CCFLAGS +=  -Wno-deprecated-declarations -Wall -Wextra -pedantic -std=c++1z -Weffc++ -I$(SFML_ROOT)/include
LDFLAGS += -L$(SFML_ROOT)/lib -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system


MAINFILE := main.cc
OBJECTS := $(OBJDIR)/main.o $(OBJDIR)/window.o

 main: $(OBJECTS) Makefile
		$(CCC) $(CCFLAGS) -o weather $(OBJECTS) $(LDFLAGS)

 run: $(OBJECTS) Makefile
		$(CCC) $(CCFLAGS) -o weather $(OBJECTS) $(LDFLAGS)
		./weather

 $(OBJDIR)/main.o: main.cc dir
	$(CCC) $(CCFLAGS) -c main.cc -o $(OBJDIR)/main.o

 $(OBJDIR)/window.o: window.cc dir
	$(CCC) $(CCFLAGS) -c window.cc -o $(OBJDIR)/window.o



dir:
	@mkdir -p $(OBJDIR)

clean:
	@ \rm -rf $(OBJDIR)/*.o *.gch core
	@ \rm -rf weather *~
	@ \rm -rf objdir *~