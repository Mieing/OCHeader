@class PTYSetupInfo, NSObject;
@protocol OS_dispatch_queue;

@interface Pitaya : NSObject {
    BOOL _isHost;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _init_lock;
    PTYSetupInfo *_setupInfo;
    struct shared_ptr<pitaya::PitayaCore> { struct PitayaCore *__ptr_; struct __shared_weak_count *__cntrl_; } _core;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *packQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *featureQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flTaskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *globalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;

+ (id)createCustomInstance;
+ (id)dictValueForSettingKey:(id)a0;
+ (BOOL)isReady;
+ (id)sharedInstance;

- (void)runTask:(id)a0 input:(id)a1 config:(id)a2 callback:(id /* block */)a3;
- (BOOL)requestUpdateAll;
- (void)downloadPackage:(id)a0 callback:(id /* block */)a1;
- (void)queryPackage:(id)a0 callback:(id /* block */)a1;
- (void)registerMessageHandler:(id)a0 callback:(id /* block */)a1;
- (void)removeMessageHandler:(id)a0;
- (void)registerAppLogRunEventCallback:(id)a0 callback:(id /* block */)a1;
- (void)releaseEngine:(id)a0;
- (void)releaseAllEngines;
- (void)requestUpdate:(id)a0 config:(id)a1 callback:(id /* block */)a2;
- (void)setup:(id)a0 callback:(id /* block */)a1;
- (void)ensurePackageReady:(id)a0 timeout:(double)a1 ensureLatest:(BOOL)a2 callback:(id /* block */)a3;
- (void)runTask:(id)a0 input:(id)a1 config:(id)a2 callback:(id /* block */)a3 llmCallback:(id /* block */)a4;
- (void)removeAppLogRunEventCallback:(id)a0;
- (void)deepClean:(id)a0 callback:(id /* block */)a1;
- (float)getDeepCleanSize;
- (void)deepCleanWithStrategy:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)networkNotification:(id)a0;
- (void)downloadPakcage:(id)a0 callback:(id /* block */)a1;
- (id)dictValueForSettingKey:(id)a0;
- (id)loadSetupInfo;
- (void)setupInternal:(id)a0 callback:(id /* block */)a1;
- (void)loadModules:(id)a0;
- (BOOL)isByteNNCoreMLSupported;
- (void)runTaskInternal:(id)a0 input:(id)a1 config:(id)a2 poolStart:(double)a3 poolEnd:(double)a4 callback:(id /* block */)a5 llmCallback:(id /* block */)a6;
- (void)preDownloadAllPackage;
- (void)stopAllDownloadTask;
- (void)registerCustomTaskHandler:(id)a0 callback:(id /* block */)a1;
- (void)removeCustomTaskHandler:(id)a0;
- (BOOL)connectSocket:(id)a0 startCallback:(id /* block */)a1 stateCallback:(id /* block */)a2;
- (void)socketLogInfo:(id)a0;
- (void)socketLogWarn:(id)a0;
- (void)socketLogError:(id)a0;
- (void)appDidEnterForground:(id)a0;
- (void)onDeviceStatusChanged:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id).cxx_construct;
- (void)appDidEnterBackground:(id)a0;
- (id)initWithHost:(BOOL)a0;

@end
