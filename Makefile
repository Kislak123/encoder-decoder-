ecSOURCES=Main.c SetString.c TestString.c Coder.c
dcSOURCES=Main1.c SetString.c TestString.c Coder.c
ecTARGET=encoder
dcTARGET=decoder

all: $(ecTARGET)
    
$(ecTARGET): $(ecSOURCES:.c=.o) 
	gcc $(ecSOURCES:.c=.o) -o $@ -std=c99

%.o: %.c
	gcc $< -c -o $@ -std=c99

clean:
	rm *.o *.d $(ecTARGET)
