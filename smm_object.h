//
//  smm_object.h
//  SMMarble object
//
//  Created by Juyeop Kim on 2023/11/05.
//

#ifndef smm_object_h
#define smm_object_h
    

#define SMMNODE_TYPE_LECTURE                0
#define SMMNODE_TYPE_RESTAURANT             1
#define SMMNODE_TYPE_LABORATORY             2
#define SMMNODE_TYPE_HOME                   3
#define SMMNODE_TYPE_GOTOLAB                4
#define SMMNODE_TYPE_FOODCHANGE             5
#define SMMNODE_TYPE_FESTIVAL               6

#define SMMNODE_OBJTYPE_BOARD     0
#define SMMNODE_OBJTYPE_GRADE     1
#define SMMNODE_OBJTYPE_FOOD      2
#define SMMNODE_OBJTYPE_FEST      3





//grade
typedef enum {
    SMMGRADE_NONE = -1, 
    SMMGRADE_F = 0,
    SMMGRADE_D_MINUS,
    SMMGRADE_D,
    SMMGRADE_D_PLUS,
    SMMGRADE_C_MINUS,
    SMMGRADE_C,
    SMMGRADE_C_PLUS,
    SMMGRADE_B_MINUS,
    SMMGRADE_B,
    SMMGRADE_B_PLUS,
    SMMGRADE_A_MINUS,
    SMMGRADE_A,
    SMMGRADE_A_PLUS,
    SMMGRADE_MAX
} smmGrade_e;
#define SMMNODE_MAX_GRADE    SMMGRADE_MAX


//object generation

void* smmObj_genObject(char* name, int objType, int type, int credit, int energy, int grade);
int smmObj_getObjectEnergy(void *ptr);
char* smmObj_getTypeName(int node_type);
int smmObj_getObjectCredit(void *ptr);
char* smmObj_getObjectNameByPtr(void *ptr);
int   smmObj_getObjectGrade(void *ptr);
int smmObj_getObjectType(void* ptr);


//member retrieving

//element to string

#endif

 /* smm_object_h */
