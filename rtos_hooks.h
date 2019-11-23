 /*
 * To be able to call the following C++ functions
 * from C, the C++ compiler needs to be instructed
 * that the functions should be have C linkage.
 * I.e. extern "C" is needed.
 *
 *---------------------------------------------------
 */
#ifdef __cplusplus
extern "C" {
#endif
    
void vApplicationMallocFailedHook( void );
void vApplicationStackOverflowHook( TaskHandle_t pxTask, char *pcTaskName );
void vApplicationTickHook( void );
    
#ifdef __cplusplus
}
#endif
