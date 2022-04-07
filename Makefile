.cpp.o:	$*.h
	g++	-c $*.cpp

all:	AlgOrdenacaoNlogN

AlgOrdenacaoNlogN:  AlgOrdenacaoNlogN.o ordenacao.o
	g++ -o $@ $^

clean:
	rm AlgOrdenacaoNlogN *.o 