#include "QueryProcess.h"

QueryProcess::QueryProcess()
{
	for(int i = 0; i < MAX_RELATION_NUM; i++)
	{
		relationArray[i] = 0;
	}
}
