@interface AppMonitorAlarm : AppMonitorBase

+ (void)flushAllLog;
+ (void)setWriteLogInterval:(long long)a0;
+ (long long)writeLogInterval;
+ (void)commitSuccessWithPage:(id)a0 monitorPoint:(id)a1 arg:(id)a2;
+ (void)commitFailWithPage:(id)a0 monitorPoint:(id)a1 errorCode:(id)a2 errorMsg:(id)a3 arg:(id)a4;
+ (void)commitSuccessWithPage:(id)a0 monitorPoint:(id)a1;
+ (void)commitFailWithPage:(id)a0 monitorPoint:(id)a1 errorCode:(id)a2 errorMsg:(id)a3;

@end
