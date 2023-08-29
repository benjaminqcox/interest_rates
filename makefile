all: main

main: main.out libs
	gcc main.out -o main -L. userInput.a account.a

main.out: main.c
	gcc -c main.c -o main.out

account.out: account.c
	gcc -c account.c -o account.out

account.a: account.out
	ar rcs account.a account.out

userInput.out: userInput.c
	gcc -c userInput.c -o userInput.out	

userInput.a: userInput.out
	ar rcs userInput.a userInput.out

libs: userInput.a account.a

clean:
	rm -f main *.out *.a