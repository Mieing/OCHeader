@interface MMWebCanvasReporter : MMObject

+ (void)reportEventWithKey:(unsigned int)a0;
+ (void)reportCostWithKey:(unsigned int)a0 costInMs:(unsigned long long)a1;
+ (void)reportCanvasVMSetup:(unsigned long long)a0;
+ (void)reportLogicJsEngineSetup:(unsigned long long)a0;
+ (void)reportLogicJsEngineMainContextSetup:(unsigned long long)a0;
+ (void)reportLogicJsEngineEngineContextSetup:(unsigned long long)a0;
+ (void)reportLogicJsEngineClientContextSetup:(unsigned long long)a0;
+ (void)reportRenderJsEngineSetup:(unsigned long long)a0;
+ (void)reportRenderJsEngineMainContextSetup:(unsigned long long)a0;
+ (void)reportRenderJsEngineCanvasViewCreate:(unsigned long long)a0;
+ (void)reportRenderJsEngineClientContext:(unsigned long long)a0;
+ (void)reportQualityEventWithKey:(unsigned int)a0;
+ (void)reportLogicMainJsException:(id)a0;
+ (void)reportLogicEngineJsException:(id)a0;
+ (void)reportLogicClientJsException:(id)a0 bizType:(id)a1;
+ (void)reportRenderMainJsException:(id)a0;
+ (void)reportRenderClientJsException:(id)a0 bizType:(id)a1;
+ (void)reportExceptionWithJsEgineType:(unsigned int)a0 contextType:(unsigned int)a1 bizType:(id)a2 exceptionInfo:(id)a3;
+ (void)logEvent:(id)a0;
+ (void)report26632CanvasFirstExpose:(id)a0 sureHeightPositive:(BOOL)a1;

@end
