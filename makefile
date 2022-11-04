all:
	gcc -o app backend.c frontend.c
backend:
	gcc -c backend.c
frontend:
	gcc -c frontend.c
clean:
	$(RM) app backend.o frontend.o
