@class NSString, JsWorkerIOS, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACCDynamicJSManager : NSObject <ErrorCallback>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *backupCdn;
@property (copy, nonatomic) id /* block */ moduleRegister;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property BOOL isLoading;
@property (retain) NSMutableArray *waitingCall;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) double fetchDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startLoad;

- (id)generateCacheFilePath;
- (void)launchJS:(id)a0;
- (void)configWorker;
- (id)initWithFileName:(id)a0 backupCdn:(id)a1 moduleRegister:(id /* block */)a2;
- (void)invokeFunction:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleError:(id)a0;
- (void)dealloc;

@end
