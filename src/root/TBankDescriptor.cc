/**
* Autogenerated Source File for TBankDescriptor
* \\file TBankDescriptor.cc
* \\author G.Gavalian
* \\date 2014-09-26
*/
#include "TBankDescriptor.h"

ClassImp(TBankDescriptor)

TBankDescriptor::TBankDescriptor()
{
}

TBankDescriptor::TBankDescriptor(const char *name)
{
	descName = name;
}
/* 
TBankDescriptor::TBankDescriptor(const TBankDescriptor &obj)
{
}
*/

TBankDescriptor::~TBankDescriptor()
{
}

void TBankDescriptor::SetName(const char *name)
{
	descName = name;
}

/* const TBankDescriptor &TBankDescriptor::operator=(const TBankDescriptor &obj){} */
void   TBankDescriptor::AddEntry(const char *name, const char *type, int tag, int num)
{

}

string TBankDescriptor::GetFormatString()
{
	string format = "entries/I";
	for(int loop = 0; loop < entryTagNum.size(); loop++){
		format.append(":");	
		format.append(entryNameType[loop].first);
		format.append("[entries]/");
		format.append(entryNameType[loop].second);
	}
	return format;
}

int    TBankDescriptor::GetEntries()
{
	return (int) entryTagNum.size();
}

bool   TBankDescriptor::isInt8   ( int entry )
{
	if(entry>=entryNameType.size()) return false;
	return (entryNameType[entry].second.compare("C")==0);
}

bool   TBankDescriptor::isInt32  ( int entry )
{
	if(entry>=entryNameType.size()) return false;
	return (entryNameType[entry].second.compare("I")==0);
}
bool   TBankDescriptor::isInt16  ( int entry )
{
	if(entry>=entryNameType.size()) return false;
	return (entryNameType[entry].second.compare("S")==0);
}
bool   TBankDescriptor::isFloat  ( int entry )
{
	if(entry>=entryNameType.size()) return false;
	return (entryNameType[entry].second.compare("F")==0);
}
bool   TBankDescriptor::isDouble ( int entry )
{
	if(entry>=entryNameType.size()) return false;
	return (entryNameType[entry].second.compare("D")==0);
}

int    TBankDescriptor::GetTag(int entry)
{
	if(entry>=entryTagNum.size()) return 0;
	return entryTagNum[entry].first;
}
int    TBankDescriptor::GetNum(int entry)
{
	if(entry>=entryTagNum.size()) return 0;
	return entryTagNum[entry].second;
}

const char *TBankDescriptor::GetName()
{
	return descName.c_str();
}

const char *TBankDescriptor::GetEntryName(int entry)
{

}