﻿// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CSWomen.h"
#include "LinkedList.h"
#include <iostream>


int main()
{
	CSWoman * woman1 = new CSWoman("Ada Lovelace", 1815, "Ada is considered the first computer programmer.");
	CSWoman * woman2 = new CSWoman("Grete Hermann", 1901, "Grete created the foundations of computational algebra.");
	CSWoman * woman3 = new CSWoman("Grace Hopper", 1906, "Grace created COBOL and the first compiler.");
	CSWoman * woman4 = new CSWoman("Ida Rhodes", 1900, "Ida co-designed the C-10 language for the UNIVAC 1 computer.");
	CSWoman * woman5 = new CSWoman("Dana Ulery", 1938, "Dana was the first female enngineer at the US JPL.");
	CSWoman * woman6 = new CSWoman("Mary Wilkes", 1937, "Mary was the first developer of LAP, the operating system for the first minicomputer.");
	CSWoman * woman7 = new CSWoman("Margaret R. Fox", 1916, "Margaret served as the first Secretary for the AFIPS.");
	CSWoman * woman8 = new CSWoman("Margaret Hamilton", 1936, "Margaret helped develop the onboard flight software for Apollo 11.");
	CSWoman * woman9 = new CSWoman("Patricia Selinger", 1949, "Patricia was a key author of IBM System R, and an IBM Fellow.");
	CSWoman * woman10 = new CSWoman("Marissa Mayer", 1975, "Marissa was the first female engineer at Google.");

	return 0;
}

