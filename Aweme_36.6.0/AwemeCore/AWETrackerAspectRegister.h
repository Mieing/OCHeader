@interface AWETrackerAspectRegister : NSObject

+ (id)applyAspectsForEvent:(id)a0 context:(id)a1;
+ (void)collectAllAspectsFromCollector;
+ (void)strategyWhenApplyTimeoutForEvent:(id)a0 withTimeout:(double)a1;

@end
