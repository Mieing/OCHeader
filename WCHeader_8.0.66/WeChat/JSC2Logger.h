@class MemoryMappedKV, WCOSLogger, NSString, NSObject;
@protocol OS_dispatch_source;

@interface JSC2Logger : NSObject

@property (retain, nonatomic) WCOSLogger *logger;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (copy, nonatomic) NSString *rawLogPath;
@property (nonatomic) int rawLogFD;
@property (nonatomic) char placeHolder;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (void)duplicateStderr;
- (void)internalStart;
- (void)transferCurrentLog;
- (void)routine;
- (void)transferPreviousLog:(id)a0 offset:(long long)a1;
- (void)processBuffer:(const char *)a0 size:(unsigned long long)a1;
- (id)readRawLogPath;
- (void)saveRawLogPath:(id)a0;
- (long long)readRawLogOffset;
- (void)saveRawLogOffset:(long long)a0;
- (void).cxx_destruct;

@end
