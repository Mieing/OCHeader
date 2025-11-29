@interface AppMonitorStat : AppMonitorBase

+ (void)flushAllLog;
+ (void)registerWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2 dimensionSet:(id)a3;
+ (void)registerWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2 dimensionSet:(id)a3 isCommitDetail:(BOOL)a4;
+ (void)commitWithModule:(id)a0 monitorPoint:(id)a1 dimensionValueSet:(id)a2 measureValueSet:(id)a3;
+ (void)commitWithModule:(id)a0 monitorPoint:(id)a1 dimensionValueSet:(id)a2 value:(double)a3;
+ (void)registerWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2;
+ (void)registerWithModule:(id)a0 monitorPoint:(id)a1 measureSet:(id)a2 isCommitDetail:(BOOL)a3;
+ (void)commitWithModule:(id)a0 monitorPoint:(id)a1 value:(double)a2;
+ (void)beginWithModule:(id)a0 monitorPoint:(id)a1 measureName:(id)a2;
+ (void)endWithModule:(id)a0 monitorPoint:(id)a1 measureName:(id)a2;
+ (id)createTransactionWithModule:(id)a0 monitorPoint:(id)a1;
+ (void)setWriteLogInterval:(long long)a0;
+ (long long)writeLogInterval;

@end
