// CSCI 2530
// Assignment: 7
// Author:     Johnnie Hernandez
// File:       event.h
// Tab stops:  8

#include <cstdio>


#ifndef EVENT_H
#define EVENT_H

//documentation for type Event


struct Event{
	Event* next;
	int sender;
	int receiver;
	double times;
	Event(int u, int v, double t)
	{
		next = NULL;
		sender = u;
		receiver = v;
		times = t;
		
	}	
};
//typedef Event* ItemType;

#endif
