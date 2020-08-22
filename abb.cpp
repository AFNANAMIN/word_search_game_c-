#pragma comment(lib, "winmm.lib")
#include <iostream>
#include"fstream"
#include "wordsearch.h"
#include <SFML/Graphics.hpp>
#include"mmsystem.h"
#include"puzzle.h"
using namespace std;

int main() {
	PlaySound(TEXT("loop.wav"), NULL, SND_FILENAME | SND_ASYNC);
	
	screen_1 s;
	s.play();
	WordSearch w; 
	w.generate(); 
	w.solve();

	
}



	//
		
	
