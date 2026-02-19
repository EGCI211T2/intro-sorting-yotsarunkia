DEPS= test
compile: main.cpp
	 @g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 @./$(DEPS)  $(var)

runtest: $(DEPS)
	 @./$(DEPS)  2 1 6 3 4 5 3 23 4 234 32 45 54 56

clean: $(DEPS)
	 rm $(DEPS)
