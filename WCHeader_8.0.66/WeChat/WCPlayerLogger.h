@interface WCPlayerLogger : NSObject {
    unsigned long long _loggerPtr;
}

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)shouldLog:(int)a0;
- (void)logWithLevel:(int)a0 module:(const char *)a1 errorCode:(unsigned int)a2 file:(const char *)a3 line:(int)a4 func:(const char *)a5 message:(id)a6;
- (void)logToFile:(int)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 func:(const char *)a4 message:(id)a5;

@end
