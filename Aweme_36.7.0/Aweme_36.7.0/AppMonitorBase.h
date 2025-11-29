@interface AppMonitorBase : NSObject

+ (void)flushAllLog;
+ (void)setWriteLogInterval:(long long)a0;
+ (long long)writeLogInterval;

@end
