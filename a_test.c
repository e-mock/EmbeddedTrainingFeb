#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "main.h"

//the add function is a stub
int add(int a, int b){
  return a + b;
}


void test_add(void)
{
    CU_ASSERT(add(2,2) == 4);
    CU_ASSERT(add(0, 0) == 0);
    CU_ASSERT(add(-1, 1) == 0);
}

int main() {

    CU_initialize_registry();

    printf("initialized\n");
  
    CU_pSuite suite1 = CU_add_suite("test_add", 0, 0);
  
    printf("made suite\n");    
    CU_add_test(suite1, "test_add", test_add);
    
    printf("added test\n");
           
    CU_basic_set_mode(CU_BRM_VERBOSE);
    printf("set mode\n");
    CU_basic_run_tests();
    printf("ran tests\n");
    CU_cleanup_registry();
    printf("cleaned up\n");


    return 0;

}
