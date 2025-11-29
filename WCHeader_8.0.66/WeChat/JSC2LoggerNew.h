@class NSThread, WCOSLogger;

@interface JSC2LoggerNew : NSObject {
    int _pipeReadEnd;
    int _pipeWriteEnd;
}

@property (retain, nonatomic) WCOSLogger *logger;
@property (retain, nonatomic) NSThread *thread;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (void)internalStart;
- (void)threadEntry;
- (void)processBuffer:(const char *)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;

@end
