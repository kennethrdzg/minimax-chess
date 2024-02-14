APP=minimax-chess
default: clean build run
build: 
	if [ ! -d "bin" ]; then mkdir "bin"; fi;
	g++ src/*.cpp -o bin/$(APP)
run: 
	if [ -f "bin/$(APP)" ]; then ./bin/$(APP); fi;
clean: 
	if [ -d "bin" ]; then rm -r bin; fi; 