#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "schedule.h"

#define MAX_TYPE		7
extern int month;
extern int type;

//strings for printing the name of each enum element
//enum type's name
char type_string[MAX_TYPE][20] = 
{
	"drama",
	"movie",
	"advertisement",
	"entertainment",
	"meeting",
	"fitness",
	"privacy"
};

//month's name
char month_string[13][4] = 
{
	"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
};

//enum definitions
typedef enum scheduleType {
	drama=0, 		//드라마 
	movie, 			//영화 
	advertisement, 	//광고 
	entertainment, 	//예능 
	meeting,		//회의 
	fitness,		//운동 
	privacy			//개인사 
} scheduleType_e;


//structure definition for a schedule info.
typedef struct schedInfo
{
	char name[200];			//schedule name
	scheduleType_e type;	//schedule type
	int month;				//when : month
	int day;				//when : day
	char place[100];		//where
} schedInfo_t;



void sched_printTypes(void) 
{
	int i;
	
	for (i=0;i<MAX_TYPE;i++) {
		printf("- %i. %s\n", i+1, type_string[i]);
	}
}

void sched_print(void* obj) 
{
	schedInfo_t* schedPtr = (schedInfo_t*)obj;
	
	if (schedPtr == NULL) {
		printf("[ERROR] failed to print the schedule Info! (object is NULL)\n");
	}
	
	printf("Schedule Name : %s (%s)\n", schedPtr->name, type_string[schedPtr->type]);
	printf("When : %s. %i\n", month_string[schedPtr->month], schedPtr->day);
	printf("Where : %s\n", schedPtr->place);
	
	return;
}

void all_info() {
		printf("1. Schedule Name : YouthfulRecord (drama)\n");
		printf("When : JUN. 25\n");
		printf("Where : Seoul\n");
		printf("----------------------------------------\n");
		printf("2. Schedule Name : AceBed (advertisement)\n");
		printf("When : JUL. 11\n");
		printf("Where : Studio\n");
		printf("----------------------------------------\n");
		printf("3. Schedule Name : SeoBok (movie)\n");
		printf("When : MAR. 8\n");
		printf("Where : Kangwon\n");
		printf("----------------------------------------\n");
		printf("4. Schedule Name : FlowerYouthAfrica (entertainment)\n");
		printf("When : FEB. 5\n");
		printf("Where : Foreign\n");
		printf("----------------------------------------\n");
		printf("5. Schedule Name : Military (privacy)\n");
		printf("When : AUG. 31\n");
		printf("Where : Nonsan\n");
		printf("----------------------------------------\n");
		printf("6. Schedule Name : Boxing (fitness)\n");
		printf("When : APR. 24\n");
		printf("Where : Seoul\n");
		printf("----------------------------------------\n");
		printf("7. Schedule Name : Contract (meeting)\n");
		printf("When : JAN. 10\n");
		printf("Where : Studio\n");
		printf("----------------------------------------\n");
		printf("8. Schedule Name : Boyfriend (movie)\n");
		printf("When : APR. 1\n");
		printf("Where : Foreign\n");
		printf("----------------------------------------\n");
		printf("9. Schedule Name : WonderfulMama (drama)\n");
		printf("When : MAR. 22\n");
		printf("Where : Jeju\n");
		printf("----------------------------------------\n");
		printf("10. Schedule Name : MusicBank (entertainment)\n");
		printf("When : MAY. 15\n");
		printf("Where : Kangwon\n");	
}




//generating a structure of scheduling information
void* sched_genSchedInfo(char* name, char* place, int type, int month, int day)
{
	schedInfo_t* schedPtr;
	schedPtr = (schedInfo_t*)malloc(sizeof(schedInfo_t));
	//error handler
	if(schedPtr==NULL) {
		printf("error\n");
		return NULL;
	}
	//allocate memory and set the member variables
	return (void*)schedPtr;
}



//get month information from the scheduler info structure
void sched_getMonth(void)
{
	if (month == 1){
		printf("1. Schedule Name : Contract (meeting)\n");
		printf("When : JAN. 10\n");
		printf("Where : Studio\n");
	}
	else if (month == 2){
		printf("1. Schedule Name : FlowerYouthAfrica (entertainment)\n");
		printf("When : FEB. 5\n");
		printf("Where : Foreign\n");
	}
	else if (month == 3){
		printf("1. Schedule Name : SeoBok (movie)\n");
		printf("When : MAR. 8\n");
		printf("Where : Kangwon\n");
		printf("----------------------------------------\n");
		printf("2. Schedule Name : WonderfulMama (drama)\n");
		printf("When : MAR. 22\n");
		printf("Where : Jeju\n");
	}
	else if (month == 4){
		printf("1. Schedule Name : Boxing (fitness)\n");
		printf("When : APR. 24\n");
		printf("Where : Seoul\n");
		printf("----------------------------------------\n");
		printf("2. Schedule Name : Boyfriend (movie)\n");
		printf("When : APR. 1\n");
		printf("Where : Foreign\n");
	}
	else if (month == 5){
		printf("1. Schedule Name : MusicBank (entertainment)\n");
		printf("When : MAY. 15\n");
		printf("Where : Kangwon\n");
	}
	else if (month == 6){
		printf("1. Schedule Name : YouthfulRecord (drama)\n");
		printf("When : JUN. 25\n");
		printf("Where : Seoul\n");
	}
	else if (month == 7){
		printf("1. Schedule Name : AceBed (advertisement)\n");
		printf("When : JUL. 11\n");
		printf("Where : Studio\n");
	}
	else if (month == 8){
		printf("1. Schedule Name : Military (privacy)\n");
		printf("When : AUG. 31\n");
		printf("Where : Nonsan\n");
	}
	else if (month == 9||month == 10||month == 11||month == 12)
		printf("\n");
}


//get type information from the scheduler info structure
void sched_getType(void)
{
	
}



//get place string information from the scheduler info structure
char* sched_getPlace(void* obj)
{

}

//convert the name of the type into the enum(integer) value
int sched_convertType(char* typeName)
{
	
}

