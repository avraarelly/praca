// Sprawdzanie Jezyka.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;
double k1, k2, k3, k4;
vector<string> text1, text2,text3,text4,testSprawdzany;
int siz1, siz2, siz3, siz4, sizSpr;
vector<double> st1, st2, st3, st4, stSpr;
map<char, int> mapa1,mapa2,mapa3,mapa4,mapaSprawdzany;
map<char, int>::iterator it=mapa1.begin();
void treningText() {
	fstream file;
	string linia;
	file.open("Text1.txt", ios::out);
	if (file.good() == true) {
		while (file.eof()) {
			file >> linia;
			text1.push_back(linia);
		}
	}
	file.close();
	file.open("Text2.txt", ios::out);
	if (file.good() == true) {
		while (file.eof()) {
			file >> linia;
			text2.push_back(linia);
		}
	}
	file.close();
	file.open("Text3.txt", ios::out);
	if (file.good() == true) {
		while (file.eof()) {
			file >> linia;
			text3.push_back(linia);
		}
	}
	file.close();
	file.open("Text4.txt", ios::out);
	if (file.good() == true) {
		while (file.eof()) {
			file >> linia;
			text4.push_back(linia);
		}
	}
	file.close();
}
void training() {
	for (int i = 0; i < text1.size(); i++) {
		for (int j = 0; j < text1.at(i).size(); j++) {
			if (text1.at(i).at(j) == 'a' || 'A') {
				mapa1['a'] = mapa1['a']++;
			}
			if (text1.at(i).at(j) == 'b' || 'B') {
				mapa1['b'] = mapa1['b']++;
			}
			if (text1.at(i).at(j) == 'c' || 'C') {
				mapa1['c'] = mapa1['c']++;
			}
			if (text1.at(i).at(j) == 'd' || 'D') {
				mapa1['d'] = mapa1['d']++;
			}
			if (text1.at(i).at(j) == 'e' || 'E') {
				mapa1['e'] = mapa1['e']++;
			}
			if (text1.at(i).at(j) == 'f' || 'F') {
				mapa1['f'] = mapa1['f']++;
			}
			if (text1.at(i).at(j) == 'g' || 'G') {
				mapa1['g'] = mapa1['g']++;
			}
			if (text1.at(i).at(j) == 'h' || 'H') {
				mapa1['h'] = mapa1['h']++;
			}
			if (text1.at(i).at(j) == 'i' || 'I') {
				mapa1['i'] = mapa1['i']++;
			}
			if (text1.at(i).at(j) == 'j' || 'J') {
				mapa1['j'] = mapa1['j']++;
			}
			if (text1.at(i).at(j) == 'k' || 'K') {
				mapa1['k'] = mapa1['k']++;
			}
			if (text1.at(i).at(j) == 'l' || 'L') {
				mapa1['l'] = mapa1['l']++;
			}
			if (text1.at(i).at(j) == 'm' || 'M') {
				mapa1['m'] = mapa1['m']++;
			}
			if (text1.at(i).at(j) == 'n' || 'N') {
				mapa1['n'] = mapa1['n']++;
			}
			if (text1.at(i).at(j) == 'o' || 'O') {
				mapa1['o'] = mapa1['o']++;
			}
			if (text1.at(i).at(j) == 'p' || 'P') {
				mapa1['p'] = mapa1['p']++;
			}
			if (text1.at(i).at(j) == 'r' || 'R') {
				mapa1['r'] = mapa1['r']++;
			}
			if (text1.at(i).at(j) == 'q' || 'Q') {
				mapa1['q'] = mapa1['q']++;
			}
			if (text1.at(i).at(j) == 's' || 'S') {
				mapa1['s'] = mapa1['s']++;
			}
			if (text1.at(i).at(j) == 't' || 'T') {
				mapa1['t'] = mapa1['t']++;
			}
			if (text1.at(i).at(j) == 'u' || 'U') {
				mapa1['u'] = mapa1['u']++;
			}
			if (text1.at(i).at(j) == 'v' || 'V') {
				mapa1['v'] = mapa1['v']++;
			}
			if (text1.at(i).at(j) == 'w' || 'W') {
				mapa1['w'] = mapa1['w']++;
			}
			if (text1.at(i).at(j) == 'x' || 'X') {
				mapa1['x'] = mapa1['x']++;
			}
			if (text1.at(i).at(j) == 'y' || 'Y') {
				mapa1['y'] = mapa1['y']++;
			}
			if (text1.at(i).at(j) == 'z' || 'Z') {
				mapa1['z'] = mapa1['z']++;
			}
		}
	}
	for (int i = 0; i < text2.size(); i++) {
		for (int j = 0; j < text2.at(i).size(); j++) {
			if (text2.at(i).at(j) == 'a' || 'A') {
				mapa2['a'] = mapa2['a']++;
			}
			if (text2.at(i).at(j) == 'b' || 'B') {
				mapa2['b'] = mapa2['b']++;
			}
			if (text2.at(i).at(j) == 'c' || 'C') {
				mapa2['c'] = mapa2['c']++;
			}
			if (text2.at(i).at(j) == 'd' || 'D') {
				mapa2['d'] = mapa2['d']++;
			}
			if (text2.at(i).at(j) == 'e' || 'E') {
				mapa2['e'] = mapa2['e']++;
			}
			if (text2.at(i).at(j) == 'f' || 'F') {
				mapa2['f'] = mapa2['f']++;
			}
			if (text2.at(i).at(j) == 'g' || 'G') {
				mapa2['g'] = mapa2['g']++;
			}
			if (text2.at(i).at(j) == 'h' || 'H') {
				mapa2['h'] = mapa2['h']++;
			}
			if (text2.at(i).at(j) == 'i' || 'I') {
				mapa2['i'] = mapa2['i']++;
			}
			if (text2.at(i).at(j) == 'j' || 'J') {
				mapa2['j'] = mapa2['j']++;
			}
			if (text2.at(i).at(j) == 'k' || 'K') {
				mapa2['k'] = mapa2['k']++;
			}
			if (text2.at(i).at(j) == 'l' || 'L') {
				mapa2['l'] = mapa2['l']++;
			}
			if (text2.at(i).at(j) == 'm' || 'M') {
				mapa2['m'] = mapa2['m']++;
			}
			if (text2.at(i).at(j) == 'n' || 'N') {
				mapa2['n'] = mapa2['n']++;
			}
			if (text2.at(i).at(j) == 'o' || 'O') {
				mapa2['o'] = mapa2['o']++;
			}
			if (text2.at(i).at(j) == 'p' || 'P') {
				mapa2['p'] = mapa2['p']++;
			}
			if (text2.at(i).at(j) == 'r' || 'R') {
				mapa2['r'] = mapa2['r']++;
			}
			if (text2.at(i).at(j) == 'q' || 'Q') {
				mapa2['q'] = mapa2['q']++;
			}
			if (text2.at(i).at(j) == 's' || 'S') {
				mapa2['s'] = mapa2['s']++;
			}
			if (text2.at(i).at(j) == 't' || 'T') {
				mapa2['t'] = mapa2['t']++;
			}
			if (text2.at(i).at(j) == 'u' || 'U') {
				mapa2['u'] = mapa2['u']++;
			}
			if (text2.at(i).at(j) == 'v' || 'V') {
				mapa2['v'] = mapa2['v']++;
			}
			if (text2.at(i).at(j) == 'w' || 'W') {
				mapa2['w'] = mapa2['w']++;
			}
			if (text2.at(i).at(j) == 'x' || 'X') {
				mapa2['x'] = mapa2['x']++;
			}
			if (text2.at(i).at(j) == 'y' || 'Y') {
				mapa2['y'] = mapa2['y']++;
			}
			if (text2.at(i).at(j) == 'z' || 'Z') {
				mapa2['z'] = mapa2['z']++;
			}
		}
	}
	for (int i = 0; i < text3.size(); i++) {
		for (int j = 0; j < text3.at(i).size(); j++) {
			if (text3.at(i).at(j) == 'a' || 'A') {
				mapa3['a'] = mapa3['a']++;
			}
			if (text3.at(i).at(j) == 'b' || 'B') {
				mapa3['b'] = mapa3['b']++;
			}
			if (text3.at(i).at(j) == 'c' || 'C') {
				mapa3['c'] = mapa3['c']++;
			}
			if (text3.at(i).at(j) == 'd' || 'D') {
				mapa3['d'] = mapa3['d']++;
			}
			if (text3.at(i).at(j) == 'e' || 'E') {
				mapa3['e'] = mapa3['e']++;
			}
			if (text3.at(i).at(j) == 'f' || 'F') {
				mapa3['f'] = mapa3['f']++;
			}
			if (text3.at(i).at(j) == 'g' || 'G') {
				mapa3['g'] = mapa3['g']++;
			}
			if (text3.at(i).at(j) == 'h' || 'H') {
				mapa3['h'] = mapa3['h']++;
			}
			if (text3.at(i).at(j) == 'i' || 'I') {
				mapa3['i'] = mapa3['i']++;
			}
			if (text3.at(i).at(j) == 'j' || 'J') {
				mapa3['j'] = mapa3['j']++;
			}
			if (text3.at(i).at(j) == 'k' || 'K') {
				mapa3['k'] = mapa3['k']++;
			}
			if (text3.at(i).at(j) == 'l' || 'L') {
				mapa3['l'] = mapa3['l']++;
			}
			if (text3.at(i).at(j) == 'm' || 'M') {
				mapa3['m'] = mapa3['m']++;
			}
			if (text3.at(i).at(j) == 'n' || 'N') {
				mapa3['n'] = mapa3['n']++;
			}
			if (text3.at(i).at(j) == 'o' || 'O') {
				mapa3['o'] = mapa3['o']++;
			}
			if (text3.at(i).at(j) == 'p' || 'P') {
				mapa3['p'] = mapa3['p']++;
			}
			if (text3.at(i).at(j) == 'r' || 'R') {
				mapa3['r'] = mapa3['r']++;
			}
			if (text3.at(i).at(j) == 'q' || 'Q') {
				mapa3['q'] = mapa3['q']++;
			}
			if (text3.at(i).at(j) == 's' || 'S') {
				mapa3['s'] = mapa3['s']++;
			}
			if (text3.at(i).at(j) == 't' || 'T') {
				mapa3['t'] = mapa3['t']++;
			}
			if (text3.at(i).at(j) == 'u' || 'U') {
				mapa3['u'] = mapa3['u']++;
			}
			if (text3.at(i).at(j) == 'v' || 'V') {
				mapa3['v'] = mapa3['v']++;
			}
			if (text3.at(i).at(j) == 'w' || 'W') {
				mapa3['w'] = mapa3['w']++;
			}
			if (text3.at(i).at(j) == 'x' || 'X') {
				mapa3['x'] = mapa3['x']++;
			}
			if (text3.at(i).at(j) == 'y' || 'Y') {
				mapa3['y'] = mapa3['y']++;
			}
			if (text3.at(i).at(j) == 'z' || 'Z') {
				mapa3['z'] = mapa3['z']++;
			}
		}
	}
	for (int i = 0; i < text4.size(); i++) {
		for (int j = 0; j < text4.at(i).size(); j++) {
			if (text4.at(i).at(j) == 'a' || 'A') {
				mapa4['a'] = mapa4['a']++;
			}
			if (text4.at(i).at(j) == 'b' || 'B') {
				mapa4['b'] = mapa4['b']++;
			}
			if (text4.at(i).at(j) == 'c' || 'C') {
				mapa4['c'] = mapa4['c']++;
			}
			if (text4.at(i).at(j) == 'd' || 'D') {
				mapa4['d'] = mapa4['d']++;
			}
			if (text4.at(i).at(j) == 'e' || 'E') {
				mapa4['e'] = mapa4['e']++;
			}
			if (text4.at(i).at(j) == 'f' || 'F') {
				mapa4['f'] = mapa4['f']++;
			}
			if (text4.at(i).at(j) == 'g' || 'G') {
				mapa4['g'] = mapa4['g']++;
			}
			if (text4.at(i).at(j) == 'h' || 'H') {
				mapa4['h'] = mapa4['h']++;
			}
			if (text4.at(i).at(j) == 'i' || 'I') {
				mapa4['i'] = mapa4['i']++;
			}
			if (text4.at(i).at(j) == 'j' || 'J') {
				mapa4['j'] = mapa4['j']++;
			}
			if (text4.at(i).at(j) == 'k' || 'K') {
				mapa4['k'] = mapa4['k']++;
			}
			if (text4.at(i).at(j) == 'l' || 'L') {
				mapa4['l'] = mapa4['l']++;
			}
			if (text4.at(i).at(j) == 'm' || 'M') {
				mapa4['m'] = mapa4['m']++;
			}
			if (text4.at(i).at(j) == 'n' || 'N') {
				mapa4['n'] = mapa4['n']++;
			}
			if (text4.at(i).at(j) == 'o' || 'O') {
				mapa4['o'] = mapa4['o']++;
			}
			if (text4.at(i).at(j) == 'p' || 'P') {
				mapa4['p'] = mapa4['p']++;
			}
			if (text4.at(i).at(j) == 'r' || 'R') {
				mapa4['r'] = mapa4['r']++;
			}
			if (text4.at(i).at(j) == 'q' || 'Q') {
				mapa4['q'] = mapa4['q']++;
			}
			if (text4.at(i).at(j) == 's' || 'S') {
				mapa4['s'] = mapa4['s']++;
			}
			if (text4.at(i).at(j) == 't' || 'T') {
				mapa4['t'] = mapa4['t']++;
			}
			if (text4.at(i).at(j) == 'u' || 'U') {
				mapa4['u'] = mapa4['u']++;
			}
			if (text4.at(i).at(j) == 'v' || 'V') {
				mapa4['v'] = mapa4['v']++;
			}
			if (text4.at(i).at(j) == 'w' || 'W') {
				mapa4['w'] = mapa4['w']++;
			}
			if (text4.at(i).at(j) == 'x' || 'X') {
				mapa4['x'] = mapa4['x']++;
			}
			if (text4.at(i).at(j) == 'y' || 'Y') {
				mapa4['y'] = mapa4['y']++;
			}
			if (text4.at(i).at(j) == 'z' || 'Z') {
				mapa4['z'] = mapa4['z']++;
			}
		}
	}
}
void size() {
	/*for (int i = 0; i < 26; i++)
	{
		siz1 = siz1 + mapa1.find('a' + i)->second;
	}
	for (int i = 0; i < 26; i++) {
		siz2 = siz2 + mapa2.find('a' + i)->second;
	}
	for (int i = 0; i < 26; i++) {
		siz3 = siz3 + mapa3.find('a' + i)->second;
	}
	for (int i = 0; i < 26; i++) {
		siz4 = siz4 + mapa4.find('a' + i)->second;
	}*/
	siz1 = mapa1.find('a')->second + mapa1.find('b')->second + mapa1.find('c')->second + mapa1.find('d')->second + mapa1.find('e')->second + mapa1.find('f')->second + mapa1.find('g')->second + mapa1.find('h')->second + mapa1.find('i')->second + mapa1.find('j')->second	+ mapa1.find('k')->second	+ mapa1.find('l')->second	+ mapa1.find('m')->second	+ mapa1.find('n')->second	+ mapa1.find('o')->second	+ mapa1.find('p')->second	+ mapa1.find('r')->second	+ mapa1.find('q')->second		+ mapa1.find('s')->second		+ mapa1.find('t')->second		+ mapa1.find('u')->second		+ mapa1.find('v')->second		+ mapa1.find('w')->second		+ mapa1.find('x')->second		+ mapa1.find('y')->second + mapa1.find('z')->second;
	for (char i = 'a'; i < '{'; i=i+1) {
		st1.push_back(mapa1.find(i)->second / siz1);
	}
	siz2 = mapa2.find('a')->second + mapa2.find('b')->second + mapa2.find('c')->second + mapa2.find('d')->second + mapa2.find('e')->second + mapa2.find('f')->second + mapa2.find('g')->second + mapa2.find('h')->second + mapa2.find('i')->second + mapa2.find('j')->second + mapa2.find('k')->second + mapa2.find('l')->second + mapa2.find('m')->second + mapa2.find('n')->second + mapa2.find('o')->second + mapa2.find('p')->second + mapa2.find('r')->second + mapa2.find('q')->second + mapa2.find('s')->second + mapa2.find('t')->second + mapa2.find('u')->second + mapa2.find('v')->second + mapa2.find('w')->second + mapa2.find('x')->second + mapa2.find('y')->second + mapa2.find('z')->second;
	siz3 = mapa3.find('a')->second + mapa3.find('b')->second + mapa3.find('c')->second + mapa3.find('d')->second + mapa3.find('e')->second + mapa3.find('f')->second + mapa3.find('g')->second + mapa3.find('h')->second + mapa3.find('i')->second + mapa3.find('j')->second + mapa3.find('k')->second + mapa3.find('l')->second + mapa3.find('m')->second + mapa3.find('n')->second + mapa3.find('o')->second + mapa3.find('p')->second + mapa3.find('r')->second + mapa3.find('q')->second + mapa3.find('s')->second + mapa3.find('t')->second + mapa3.find('u')->second + mapa3.find('v')->second + mapa3.find('w')->second + mapa3.find('x')->second + mapa3.find('y')->second + mapa3.find('z')->second;
	siz4 = mapa4.find('a')->second + mapa4.find('b')->second + mapa4.find('c')->second + mapa4.find('d')->second + mapa4.find('e')->second + mapa4.find('f')->second + mapa4.find('g')->second + mapa4.find('h')->second + mapa4.find('i')->second + mapa4.find('j')->second + mapa4.find('k')->second + mapa4.find('l')->second + mapa4.find('m')->second + mapa4.find('n')->second + mapa4.find('o')->second + mapa4.find('p')->second + mapa4.find('r')->second + mapa4.find('q')->second + mapa4.find('s')->second + mapa4.find('t')->second + mapa4.find('u')->second + mapa4.find('v')->second + mapa4.find('w')->second + mapa4.find('x')->second + mapa4.find('y')->second + mapa4.find('z')->second;
	for (char i = 'a'; i < '{'; i = i + 1) {
		st2.push_back(mapa2.find(i)->second / siz2);
	}
	for (char i = 'a'; i < '{'; i = i + 1) {
		st3.push_back(mapa3.find(i)->second / siz3);
	}
	for (char i = 'a'; i < '{'; i = i + 1) {
		st4.push_back(mapa4.find(i)->second / siz4);
	}
}
void save() {
	fstream file;
	file.open("Angielski.txt", ios::in);
	if (file.good() == true) {
		for (int i = 0; i < st1.size(); i++) {
			file << st1.at(i);
		}
	}
	file.close();
	file.open("Niemiecki.txt", ios::in);
	if (file.good() == true) {
		for (int i = 0; i < st2.size(); i++) {
			file << st2.at(i);
		}
	}
	file.close();
	file.open("Polski.txt", ios::in);
	if (file.good() == true) {
		for (int i = 0; i < st3.size(); i++) {
			file << st3.at(i);
		}
	}
	file.close();
	file.open("Hiszpanski.txt", ios::in);
	if (file.good() == true) {
		for (int i = 0; i < st4.size(); i++) {
			file << st4.at(i);
		}
	}
	file.close();
}
void finalText() {
	fstream file;
	string linia;
	file.open("Text5.txt", ios::out);
	if (file.good() == true) {
		while (file.eof()) {
			file >> linia;
			testSprawdzany.push_back(linia);
		}
	}
	file.close();
	for (int i = 0; i < testSprawdzany.size(); i++) {
		for (int j = 0; j < testSprawdzany.at(i).size(); j++) {
			if (testSprawdzany.at(i).at(j) == 'a' || 'A') {
				mapaSprawdzany['a'] = mapaSprawdzany['a']++;
			}
			if (testSprawdzany.at(i).at(j) == 'b' || 'B') {
				mapaSprawdzany['b'] = mapaSprawdzany['b']++;
			}
			if (testSprawdzany.at(i).at(j) == 'c' || 'C') {
				mapaSprawdzany['c'] = mapaSprawdzany['c']++;
			}
			if (testSprawdzany.at(i).at(j) == 'd' || 'D') {
				mapaSprawdzany['d'] = mapaSprawdzany['d']++;
			}
			if (testSprawdzany.at(i).at(j) == 'e' || 'E') {
				mapaSprawdzany['e'] = mapaSprawdzany['e']++;
			}
			if (testSprawdzany.at(i).at(j) == 'f' || 'F') {
				mapaSprawdzany['f'] = mapaSprawdzany['f']++;
			}
			if (testSprawdzany.at(i).at(j) == 'g' || 'G') {
				mapaSprawdzany['g'] = mapaSprawdzany['g']++;
			}
			if (testSprawdzany.at(i).at(j) == 'h' || 'H') {
				mapaSprawdzany['h'] = mapaSprawdzany['h']++;
			}
			if (testSprawdzany.at(i).at(j) == 'i' || 'I') {
				mapaSprawdzany['i'] = mapaSprawdzany['i']++;
			}
			if (testSprawdzany.at(i).at(j) == 'j' || 'J') {
				mapaSprawdzany['j'] = mapaSprawdzany['j']++;
			}
			if (testSprawdzany.at(i).at(j) == 'k' || 'K') {
				mapaSprawdzany['k'] = mapaSprawdzany['k']++;
			}
			if (testSprawdzany.at(i).at(j) == 'l' || 'L') {
				mapaSprawdzany['l'] = mapaSprawdzany['l']++;
			}
			if (testSprawdzany.at(i).at(j) == 'm' || 'M') {
				mapaSprawdzany['m'] = mapaSprawdzany['m']++;
			}
			if (testSprawdzany.at(i).at(j) == 'n' || 'N') {
				mapaSprawdzany['n'] = mapaSprawdzany['n']++;
			}
			if (testSprawdzany.at(i).at(j) == 'o' || 'O') {
				mapaSprawdzany['o'] = mapaSprawdzany['o']++;
			}
			if (testSprawdzany.at(i).at(j) == 'p' || 'P') {
				mapaSprawdzany['p'] = mapaSprawdzany['p']++;
			}
			if (testSprawdzany.at(i).at(j) == 'r' || 'R') {
				mapaSprawdzany['r'] = mapaSprawdzany['r']++;
			}
			if (testSprawdzany.at(i).at(j) == 'q' || 'Q') {
				mapaSprawdzany['q'] = mapaSprawdzany['q']++;
			}
			if (testSprawdzany.at(i).at(j) == 's' || 'S') {
				mapaSprawdzany['s'] = mapaSprawdzany['s']++;
			}
			if (testSprawdzany.at(i).at(j) == 't' || 'T') {
				mapaSprawdzany['t'] = mapaSprawdzany['t']++;
			}
			if (testSprawdzany.at(i).at(j) == 'u' || 'U') {
				mapaSprawdzany['u'] = mapaSprawdzany['u']++;
			}
			if (testSprawdzany.at(i).at(j) == 'v' || 'V') {
				mapaSprawdzany['v'] = mapaSprawdzany['v']++;
			}
			if (testSprawdzany.at(i).at(j) == 'w' || 'W') {
				mapaSprawdzany['w'] = mapaSprawdzany['w']++;
			}
			if (testSprawdzany.at(i).at(j) == 'x' || 'X') {
				mapaSprawdzany['x'] = mapaSprawdzany['x']++;
			}
			if (testSprawdzany.at(i).at(j) == 'y' || 'Y') {
				mapaSprawdzany['y'] = mapaSprawdzany['y']++;
			}
			if (testSprawdzany.at(i).at(j) == 'z' || 'Z') {
				mapaSprawdzany['z'] = mapaSprawdzany['z']++;
			}
		}
	}
	sizSpr = mapaSprawdzany['a'] + mapaSprawdzany['b'] + mapaSprawdzany['c'] + mapaSprawdzany['d'] + mapaSprawdzany['e'] + mapaSprawdzany['f'] + mapaSprawdzany['g'] + mapaSprawdzany['h'] + mapaSprawdzany['i'] + mapaSprawdzany['j'] + mapaSprawdzany['k'] + mapaSprawdzany['l'] + mapaSprawdzany['m'] + mapaSprawdzany['n'] + mapaSprawdzany['o'] + mapaSprawdzany['p'] + mapaSprawdzany['r'] + mapaSprawdzany['q'] + mapaSprawdzany['s'] + mapaSprawdzany['t'] + mapaSprawdzany['u'] + mapaSprawdzany['v'] + mapaSprawdzany['w'] + mapaSprawdzany['x'] + mapaSprawdzany['y'] + mapaSprawdzany['z'];
	for (int i = 0; i < 26; i++) {
		stSpr.push_back(mapaSprawdzany['a' + i] / sizSpr);
	}
}
void end() {
	
	for (int i = 0; i < 26; i++) {
		k1=k1+(st1.at(i) - stSpr.at(i));
	}
	for (int i = 0; i < 26; i++) {
		k2 = k2 + (st2.at(i) - stSpr.at(i));
	}
	for (int i = 0; i < 26; i++) {
		k3 = k3 + (st3.at(i) - stSpr.at(i));
	}
	for (int i = 0; i < 26; i++) {
		k4 = k4 + (st4.at(i) - stSpr.at(i));
	}
	if (k1 < 0) {
		k1 = (-1)*k1;
	}
	if (k2 < 0) {
		k2 = (-1)*k2;
	}
	if (k3 < 0) {
		k3 = (-1)*k3;
	}
	if (k4 < 0) {
		k4 = (-1)*k4;
	}
	if (k1 < k2) {
		if (k1 < k3) {
			if (k1 < k4) {
				cout << "Tekst jest po Angielsku" << endl;
			}
			if (k3 < k4) {
				cout << "teskt jest po Polsku" << endl;
			}
			else cout << "teskt jest po Hiszpansku" << endl;
		}
		if (k2 < k3) {
			if (k2 < k3) {
				cout << "tekst jest po Niemiecku" << endl;
			}
		}
	}
	
}
int main()
{
	treningText();
	training();
	size();
	save();
	finalText();
	end();
    return 0;
}

