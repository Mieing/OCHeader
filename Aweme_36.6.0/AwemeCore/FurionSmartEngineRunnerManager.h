@class NSString, NSMutableArray;

@interface FurionSmartEngineRunnerManager : NSObject <FurionSmartEngineRunnerManagerProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableArray *queueTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)queryPackage:(id)a0 callback:(id /* block */)a1;
- (id)createRunnerWithConfigBuilder:(id /* block */)a0;
- (void)runTaskWhenEngineReady:(unsigned long long)a0 onMainQueue:(BOOL)a1 taskExecuteBlock:(id /* block */)a2;
- (void)queryPackage:(id)a0 downloadIfNeeded:(BOOL)a1 callback:(id /* block */)a2;
- (id)createRunnerWithConfig:(id)a0;
- (void)onPitayaReady:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
