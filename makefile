compile: dispStat.c
	gcc dispStat.c -o dispStat

clean:
	rm *~ *# dispStat

run: dispStat
	./dispStat
