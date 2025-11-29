@interface ACCTimeTraceUtil : NSObject

+ (double)timeIntervalForKey:(id)a0;
+ (void)startTraceTimeForKey:(id)a0;
+ (void)cancelTraceTimeForKey:(id)a0;
+ (BOOL)alreadyTraceForKey:(id)a0;
+ (id)timingDict;

@end
