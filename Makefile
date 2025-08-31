CPP = g++
LINK = wx-config --cxxflags --libs 

all: 
	$(CPP) *.cpp -o basicframe `$(LINK)` 
