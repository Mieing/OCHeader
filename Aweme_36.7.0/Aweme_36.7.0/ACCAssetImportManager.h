@class ACCThreadSafeMutableDictionary, ACCThreadSafeArray;
@protocol ACCAssetImportDataConsumerProtocol;

@interface ACCAssetImportManager : NSObject

@property (retain, nonatomic) ACCThreadSafeArray *tasks;
@property (retain, nonatomic) ACCThreadSafeArray *highPriorityTasks;
@property (retain, nonatomic) ACCThreadSafeArray *runningTasks;
@property (retain, nonatomic) ACCThreadSafeArray *readyTasks;
@property (retain, nonatomic) ACCThreadSafeArray *finishedTasks;
@property (retain, nonatomic) ACCThreadSafeArray *callbackImmediatelyTasks;
@property (retain, nonatomic) ACCThreadSafeMutableDictionary *cachedTasks;
@property (retain, nonatomic) ACCThreadSafeMutableDictionary *taskDisposable;
@property (nonatomic) long long maxImageConcurrentCount;
@property BOOL runningLoop;
@property BOOL debugEnable;
@property (weak, nonatomic) id<ACCAssetImportDataConsumerProtocol> dataConsumer;

+ (void)debug_didChangeCacheStatus:(id)a0;
+ (id)sharedInstance;

- (void)onTaskComplete:(id)a0;
- (id)getCachedTaskWithID:(id)a0 ofClass:(Class)a1;
- (void)queryAllFinishedTaskWithCompletion:(id /* block */)a0;
- (BOOL)hasFinishedOrExecutingTaskWithID:(id)a0;
- (void)cancelWithAvailableIDs:(id)a0;
- (void)cancelCached;
- (void)queryCachedTaskWithID:(id)a0 completion:(id /* block */)a1;
- (void)tiggerDebugIfNeed;
- (void)cancelTasks:(id)a0 withAvailableIDs:(id)a1;
- (void)callbackNeedRecallImmediatelyTaskIfNeed;
- (void)waitNormalLock;
- (void)signalNormalLock;
- (void)observeTask:(id)a0;
- (void)waitSuperLock;
- (void)signalSuperLock;
- (void)runBarrierAsync:(id /* block */)a0;
- (id)getCachedTaskWithID:(id)a0;
- (id)normalLock;
- (id)superLock;
- (void)clearFinishedTask;
- (void)queryAllPreparingTaskWithCompletion:(id /* block */)a0;
- (void)queryAllRunningTaskWithCompletion:(id /* block */)a0;
- (void)queryAllTaskWithCompletion:(id /* block */)a0;
- (void)runAsync:(id /* block */)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)run;
- (id)queue;
- (void)cancelAll;
- (id)nextTask;
- (void)cancelTasks:(id)a0;

@end
