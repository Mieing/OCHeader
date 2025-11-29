@interface TPThumbPlayerLog : NSObject

+ (void)setLogDelegate:(id)a0;
+ (void)setLogLevel:(long long)a0;
+ (void)logWithLevel:(long long)a0 tag:(id)a1 content:(id)a2;
+ (id)getLogLevelName:(long long)a0;

@end
