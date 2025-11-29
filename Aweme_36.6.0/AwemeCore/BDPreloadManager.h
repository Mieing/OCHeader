@class NSOperationQueue, NSMutableArray;

@interface BDPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *pendingTasks;
@property (retain, nonatomic) NSMutableArray *tempTasks;
@property (retain, nonatomic) NSOperationQueue *preloadQueue;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long finishCount;
@property (readonly, nonatomic) unsigned long long maxConcurrentTaskCount;

+ (id)hardManager;
+ (id)sharedInstance;

- (void)addPreloadTask:(id)a0;
- (BOOL)_taskIsLoading:(id)a0;
- (void)increaseFinish;
- (void)_startPendingTaskIfNeed;
- (void)_removePendingTaskWithKey:(id)a0;
- (void)resumeAllTask;
- (void)throttleInsertTask:(id)a0;
- (void)addPreloadTaskWithKey:(id)a0 onlyWifi:(BOOL)a1 withExecutionBlock:(id /* block */)a2;
- (void)addPreloadTaskWithKey:(id)a0 scene:(id)a1 preloadType:(unsigned long long)a2 onlyWifi:(BOOL)a3 withExecutionBlock:(id /* block */)a4;
- (void)refreshDebugView;
- (void)_tryInsertTempTasks:(BOOL)a0;
- (void)cancelAllPreloadTask;
- (void)suppendAllTask;
- (void)_cancelOperationWithKey:(id)a0;
- (void)_removePendingTaskWithScene:(id)a0;
- (void)_cancelOperationWithScene:(id)a0;
- (unsigned long long)maxRuningTime;
- (void)addPreloadTaskWithKey:(id)a0 withExecutionBlock:(id /* block */)a1;
- (void)addPreloadTaskWithKey:(id)a0 scene:(id)a1 onlyWifi:(BOOL)a2 withExecutionBlock:(id /* block */)a3;
- (void)cancelPreloadTaskWithKey:(id)a0;
- (void)cancelPreloadTasksWithScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_addOperation:(id)a0;

@end
