#pragma once
#include <string>
#include <iostream>
#include <time.h>

int N = 10;
std::string* Hash_table;


int h(std::string str) {
	int res = 0;
	for (int i = 0; i < str.length(); ++i) {
		res += int(str[i]);
	}
	return res % N;
}


int Add(std::string str, std::string* A = Hash_table) {
	int res = h(str);
	if (A[res] == "-1") {
		A[res] = str;
		return 1;
	}
	return -1;
}

int Search(std::string str, std::string* A = Hash_table) {
	int res = h(str);
	if (A[res] == str) {
		return res;
	}
	return -1;
}