#include <iostream>
#include "QueryProcess.h"

void mian(int argc, char* argv[])
{
	QueryProcess* pQueryProcess;
	//build map from standrd input
	while(getline() != "Done")
	{
		pQueryProcess->buildRelation();
	}		
	//1s ready to query
	
	while(true)
	{
		while(getline() != "F")
		{
			//parser and build query tree
			pQueryProcess->buildQueryTree();
		
			//query
			pQueryProcess->exeutiveQuery()
		
			//return value
			pQueryProcess->calculateResult();
		}
		printResult();
	}
}
