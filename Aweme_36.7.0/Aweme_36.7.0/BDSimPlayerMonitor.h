@interface BDSimPlayerMonitor : NSObject

+ (double)timeIntervalForKey:(id)a0;
+ (void)cancelTimingForKey:(id)a0;
+ (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2;
+ (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2 duration:(double *)a3;
+ (id)timingSemaphore;
+ (BOOL)endTimingForKey:(id)a0 duration:(double *)a1;
+ (void)startTimingForKey:(id)a0;
+ (id)timingDict;

@end
