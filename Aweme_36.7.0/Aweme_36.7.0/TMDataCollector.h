@interface TMDataCollector : NSObject

+ (void)appLogWithEventName:(id)a0 params:(id)a1 needContext:(BOOL)a2;
+ (void)userExceptionWithEventType:(id)a0 backTraces:(id)a1 customParams:(id)a2 filters:(id)a3 needContext:(BOOL)a4;
+ (void)userExceptionWithEventType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 needContext:(BOOL)a5;
+ (void)monitorWithEventType:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 needContext:(BOOL)a4;
+ (void)__generateContextWithCompletion:(id /* block */)a0;
+ (void)monitorWithEventType:(id)a0 tags:(id)a1 block:(id /* block */)a2 syncGenerateData:(BOOL)a3 needContext:(BOOL)a4;
+ (id)appLogCommonParamsWithSampleRate:(unsigned long long)a0;
+ (BOOL)shouldDelayEvent:(id)a0 params:(id)a1;
+ (void)delayEvent:(id)a0 params:(id)a1;
+ (void)appLogWithEventName:(id)a0 tags:(id)a1 block:(id /* block */)a2 syncGenerateData:(BOOL)a3 needContext:(BOOL)a4;
+ (void)__appLogWithEventName:(id)a0 tags:(id)a1 block:(id /* block */)a2 syncGenerateData:(BOOL)a3 needContext:(BOOL)a4 sampleRate:(id)a5;
+ (id)pageNameForControllerName:(id)a0;
+ (void)__exectuteOnMainThread:(id /* block */)a0;
+ (BOOL)enableAutoRelease;
+ (void)monitorWithEventType:(id)a0 tags:(id)a1 block:(id /* block */)a2 needContext:(BOOL)a3;
+ (void)appLogWithEventName:(id)a0 tags:(id)a1 block:(id /* block */)a2 needContext:(BOOL)a3;
+ (void)appLogNoSamplingWithEventName:(id)a0 tags:(id)a1 block:(id /* block */)a2 syncGenerateData:(BOOL)a3 needContext:(BOOL)a4;
+ (void)appLogNoSamplingWitWithEventName:(id)a0 params:(id)a1 needContext:(BOOL)a2;
+ (void)generateContextWithCompletion:(id /* block */)a0;
+ (id)monitor;
+ (id)tracker;
+ (id)userException;

@end
