#pragma once
#include <map>
#include <unordered_map> 

class Maps 
{
	std::map<int, int> ordered;
	std::unordered_map<int, int> unordered;
	unsigned int ordered_duration;
	unsigned int unordered_duration;

public:
	//adds elements from 0 to n into both maps, with key == value
	inline void AddElements(int n);
	//deletes elements from 0 to n into both maps, with key == value
	inline void DeleteElements(int n);
	//accesses elements from 0 to n into both maps, with key == value
	inline void AccessElements(int n);
	//prints the time of the last executed operation in milliseconds
	inline void PrintOperationTime(const char*);
};