all: compile run

compile:
	g++ main.cpp Block.cpp BlockChain.cpp -o main.exe

run:
	main.exe