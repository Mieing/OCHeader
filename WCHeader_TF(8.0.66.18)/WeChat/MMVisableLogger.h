@interface MMVisableLogger : NSObject

+ (void)__setupSwiftUIDSO;
+ (void)logWithLevel:(unsigned long long)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 printXLog:(BOOL)a5 format:(id)a6;
+ (void)__onLogWithType:(unsigned long long)a0 module:(id)a1 file:(id)a2 line:(int)a3 func:(id)a4 message:(id)a5;
+ (void)setupSwiftUISO;
+ (void *)getSwiftUIMachHeader;

@end
