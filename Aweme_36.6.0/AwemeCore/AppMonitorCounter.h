@interface AppMonitorCounter : AppMonitorBase

+ (void)flushAllLog;
+ (void)setWriteLogInterval:(long long)a0;
+ (long long)writeLogInterval;
+ (void)commitWithPage:(id)a0 monitorPoint:(id)a1 value:(double)a2 arg:(id)a3;
+ (void)commitWithPage:(id)a0 monitorPoint:(id)a1 value:(double)a2;

@end
