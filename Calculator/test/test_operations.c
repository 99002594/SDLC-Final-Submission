#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_logarithm(void);
void test_natural_logarithm(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_cotangent(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "logarithm", test_logarithm);
  CU_add_test(suite, "natural_logarithm", test_natural_logarithm);
  CU_add_test(suite, "sine", test_sine);
  CU_add_test(suite, "cosine", test_cosine);
  CU_add_test(suite, "tangent", test_tangent);
  CU_add_test(suite, "cotangent", test_cotangent);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_power(void) {
  CU_ASSERT(1 == power(1, 0));
  CU_ASSERT(0==power(0,0);
  CU_ASSERT(256==power(4,4);
  /* Dummy fail*/
  CU_ASSERT(3 == power(2, 2));
}
void test_logarithm(void) {
  CU_ASSERT(0 == logarithm(1));
  CU_ASSERT(0 == logarithm(0));
  CU_ASSERT(0 == logarithm(-1));
  CU_ASSERT(2 == logarithm(100));
  
  /* Dummy fail*/
  CU_ASSERT(3 == logarithm(2));
}
void test_natural_logarithm(void) {
  CU_ASSERT(0 == natural_logarithm(1));
  CU_ASSERT(0 == natural_logarithm(0));
  CU_ASSERT(0 == natural_logarithm(-1));
  CU_ASSERT(4.605 == natural_logarithm(100));
  
  /* Dummy fail*/
  CU_ASSERT(3 == natural_logarithm(2));
}
void test_sine(void) {
  CU_ASSERT(1.5707 == sine(1));
  
  /* Dummy fail*/
  CU_ASSERT(3 == sine(2));
}
void test_cosine(void) {
  CU_ASSERT(1 == cosine(0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == cosine(2));
}
void test_tangent(void) {
  CU_ASSERT(0.7853 == tangent(1));
  
  /* Dummy fail*/
  CU_ASSERT(3 == tangent(2));
}
void test_cotangent(void) {
  CU_ASSERT(1.2732 == cotangent(1));
  
  /* Dummy fail*/
  CU_ASSERT(3 == cotangent(2));
}
