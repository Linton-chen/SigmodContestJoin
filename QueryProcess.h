#include<iostream>

#define MAX_RELATION_NUM 10

class QueryProcess
{
public:
	int relationArray[MAX_RELATION_NUM];	//map relation 
	void* relationAddr[MAX_RELATION_NUM];	//relation file/mem address
	QueryTree* pQueryTree;

private:
	buildRelation(char *fileName);	//return the No. of fileName
	buildQueryTree(char* cmdline);	//build QueryTree according to cmdline
	executionQuery();
	calculateResult();		//return sum
}
