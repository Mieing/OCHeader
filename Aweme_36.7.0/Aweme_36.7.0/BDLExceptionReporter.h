@interface BDLExceptionReporter : NSObject

+ (void)reportException:(id)a0;
+ (id)backtraceWithMessage:(id)a0 bySkippedDepth:(unsigned long long)a1;
+ (id)shareInstance;

@end
