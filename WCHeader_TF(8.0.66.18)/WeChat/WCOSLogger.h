@interface WCOSLogger : NSObject {
    unsigned long long _loggerPtr;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)getLoggerPtr;
- (void)logToFile:(const char *)a0;

@end
