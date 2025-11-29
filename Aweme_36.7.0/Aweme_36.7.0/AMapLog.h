@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface AMapLog : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *loggingGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore;
@property (nonatomic) unsigned long long numProcessors;
@property (retain, nonatomic) NSMutableDictionary *logHandlerDic;
@property BOOL inBackground;

+ (void)log:(BOOL)a0 level:(unsigned long long)a1 component:(id)a2 session:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 request:(id)a7 response:(id)a8 jsonData:(id)a9 error:(id)a10;
+ (void)log:(BOOL)a0 level:(unsigned long long)a1 component:(id)a2 session:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 info:(id)a7;
+ (void)log:(BOOL)a0 level:(unsigned long long)a1 component:(id)a2 session:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 reformer:(id)a7 jsonData:(id)a8 error:(id)a9;
+ (void)log:(BOOL)a0 level:(unsigned long long)a1 component:(id)a2 session:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 exception:(id)a7;
+ (void)registerLogHandler:(id)a0 cloudConfig:(id)a1;
+ (void)uploadLogWithComponent:(id)a0 level:(unsigned long long)a1 complete:(id /* block */)a2;
+ (void)registerLogHandler:(id)a0 consoleEnable:(BOOL)a1;
+ (void)log:(BOOL)a0 level:(unsigned long long)a1 component:(id)a2 session:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 format:(id)a7;
+ (id)sharedInstance;

- (BOOL)currentIsInBackground;
- (void)_defaultUpload;
- (void)_uploadLogWithComponentName:(id)a0 levelStr:(id)a1 traversalUpload:(BOOL)a2 complete:(id /* block */)a3;
- (void)_addLogger:(id)a0 config:(id)a1;
- (void)_log:(BOOL)a0 message:(id)a1 level:(unsigned long long)a2 component:(id)a3 file:(const char *)a4 function:(const char *)a5 line:(unsigned long long)a6 session:(id)a7;
- (void)_queueLogMessage:(id)a0 asynchronously:(BOOL)a1;
- (void)_logMessage:(id)a0;
- (void)_addTTYLogHandler;
- (void)_removeLogger:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)_initSingleton;

@end
