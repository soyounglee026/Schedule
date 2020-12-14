void* sched_genSchedInfo(char* name, char* place, int type, int month, int day);
void sched_print(void* obj);
void all_info();
void sched_getMonth();
void sched_getType();
char* sched_getPlace(void* obj);
void sched_printTypes(void);
int sched_convertType(char* typeName);
