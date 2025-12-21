//
//  smm_node.c
//  SMMarble
//
//  Created by Juyeop Kim on 2023/11/05.
//

#include "smm_common.h"
#include "smm_object.h"
#include <string.h>
#include <stdlib.h>  

#define MAX_NODENR     100
#define MAX_NODETYPE    7


#define GRADE_A_PLUS       0
#define GRADE_A0           1
#define GRADE_A_MINUS      2
#define GRADE_B_PLUS       3
#define GRADE_B0           4
#define GRADE_B_MINUS      5
#define GRADE_C_PLUS       6
#define GRADE_C0           7
#define GRADE_C_MINUS      8
#define GRADE_D_PLUS       9
#define GRADE_D0           10
#define GRADE_D_MINUS      11
#define GRADE_F            12

static char smmObj_nodeName [MAX_NODETYPE][MAX_CHARNAME]={
  "lecture",
  "restaurant",   
  "laboratory",
  "home",
  "gotoLab",
  "foodChance",
  "festival"
};

static char smmObj_gradeName [SMMNODE_MAX_GRADE][MAX_CHARNAME]={
  "A+",
  "A0",   
  "A-",
  "B+",
  "B-",
  "B0",
  "C+",
  "C0",
  "C-",
  "D+",
  "D0",
  "D-",
  "F"
  
};



//structure type definition

typedef struct {
    char name[MAX_CHARNAME];
    int objType;
    int type;
    int credit;
    int energy;
    smmGrade_e grade;
} smmObj_object_t;



//object generation
void* smmObj_genObject(char* name, int objType, int type, int credit, int energy, int grade)
{
    smmObj_object_t* ptr=(smmObj_object_t*)malloc(sizeof(smmObj_object_t));
    
    strcpy(ptr->name, name);
    ptr->type = type;
    ptr->objType= objType;
    ptr->credit = credit;
    ptr->energy = energy;
    ptr->grade = grade;

    return (ptr);
}



//member retrieving
char* smmObj_getObjectNameByPtr(void* ptr)
{
    if (!ptr) return NULL;
    return ((smmObj_object_t*)ptr)->name;
}

int smmObj_getObjectCredit(void *ptr)
{
    if(!ptr) return 0;
    return ((smmObj_object_t*)ptr)->credit;
}

int smmObj_getObjectEnergy(void *ptr)
{
      if (!ptr) return 0;
      return ((smmObj_object_t*)ptr)->energy;
}

char* smmObj_getTypeName(int node_type)
{
      return (smmObj_nodeName[node_type]);
}


int smmObj_getObjectGrade(void* ptr)
{
    if (!ptr) return SMMGRADE_NONE;
    return ((smmObj_object_t*)ptr)->grade;
}

char* smmObj_getGradeName(smmGrade_e grade)
{
    return smmObj_gradeName[grade];
}



