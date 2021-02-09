#include <iostream>
#include "Maps.h"
#include <chrono>

using namespace std;
using namespace chrono;

void Maps::AddElements(int n) {
	int i;
	auto t1 = high_resolution_clock::now();
	for (i = 0; i < n; i++)
		ordered[i] = i;
	auto t2 = high_resolution_clock::now();
	ordered_duration = duration_cast<milliseconds>(t2 - t1).count();

	t1 = high_resolution_clock::now();
	for (i = 0; i < n; i++)
		unordered[i] = i;
	t2 = high_resolution_clock::now();
	unordered_duration = duration_cast<milliseconds>(t2 - t1).count();
}

void Maps::AccessElements(int n) {
	int i, a, b;
	auto t1 = high_resolution_clock::now();
	for (i = 0; i < n; i++) {
		a = i;
		b = ordered[i];
	}
	auto t2 = high_resolution_clock::now();
	ordered_duration = duration_cast<milliseconds>(t2 - t1).count();

	t1 = high_resolution_clock::now();
	for (i = 0; i < n; i++) {
		a = i;
		b = unordered[i];
	}
	t2 = high_resolution_clock::now();

	unordered_duration = duration_cast<milliseconds>(t2 - t1).count();
}

void Maps::DeleteElements(int n) {
	int i;
	auto t1 = high_resolution_clock::now();
	for (i = 0; i < 500000; i++)
		ordered.erase(i);
	auto t2 = high_resolution_clock::now();
	ordered_duration = duration_cast<milliseconds>(t2 - t1).count();
	

	t1 = high_resolution_clock::now();
	for (i = 0; i < 500000; i++)
		unordered.erase(i);
	t2 = high_resolution_clock::now();
	unordered_duration = duration_cast<milliseconds>(t2 - t1).count();
}

void Maps::PrintOperationTime(const char* operation) {
	cout << operation <<" elements in ordered map : " << ordered_duration << " ms" <<'\n';
	cout << operation << " elements in unordered map : " << unordered_duration << " ms" <<'\n';
}