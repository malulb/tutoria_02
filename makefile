bin: main.c
	gcc $< -o $@

.PHONE: run clean

run: 
	./bin & ps -l
clean:
	rm bin
