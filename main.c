#include <stdio.h>
#include <time.h>


int main()
{
	unsigned int UID;
	char activ;
	char sex;
	char mariage;
	char email[25];
	char phone[15];
	struct tm bday;

	struct NAME
	{
		char firstName[13];
		char lastName[13];
		char fatherName[20];
	};

	struct ADDRESS
	{
		char index[7];

		char country[13];
		char region[13];
		char city[13];	
		char street[13];
		char buildNumb[5];
		char roomNumb[5];

	};

	struct WORK
	{
		unsigned int wage;
		char post[15];
		struct tm startDay;
	};

	struct WORKER
	{
		struct NAME name;
		struct ADDRESS address;
		struct WORK work;
	};

	return 0;
}
