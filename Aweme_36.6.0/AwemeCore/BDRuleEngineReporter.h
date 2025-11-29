@interface BDRuleEngineReporter : NSObject

+ (void)log:(id)a0 tags:(id)a1 block:(id /* block */)a2;
+ (void)delayLog:(id)a0 tags:(id)a1 block:(id /* block */)a2;
+ (void)log:(id)a0 tags:(id)a1 delay:(unsigned long long)a2 block:(id /* block */)a3;
+ (BOOL)shouldSampleWithTags:(id)a0;
+ (void)log:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)monitor;
+ (id)tracker;

@end
