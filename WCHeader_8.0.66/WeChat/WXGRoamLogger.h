@interface WXGRoamLogger : NSObject {
    unsigned long long _loggerPtr;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)shouldLog:(int)a0;
- (void)logWithLevel:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 message:(id)a5;

@end
