@class NSRecursiveLock, NSMapTable, NSMutableDictionary, NSOperationQueue, NSMutableArray, IESFileDownloadTaskConfig;

@interface IESFileDownloadStrategyV2 : NSObject

@property (weak, nonatomic) NSOperationQueue *downloadQueue;
@property (weak, nonatomic) NSMapTable *taskOperationMap;
@property (retain, nonatomic) NSMutableArray *executeTaskQueue;
@property (retain, nonatomic) NSMutableArray *waitTaskQueue;
@property (retain, nonatomic) IESFileDownloadTaskConfig *taskConfig;
@property (nonatomic) long long preloadTaskLimitSize;
@property (retain, nonatomic) NSMutableDictionary *currentConcurrentParam;
@property (retain, nonatomic) NSRecursiveLock *operationLock;
@property (retain, nonatomic) NSMutableDictionary *taskParamMap;

- (void)pauseOneExecuteTaskIfNeed;
- (void)moveWaitTaskToExecute;
- (void)updateLevelWithTask:(id)a0 taskParam:(id)a1;
- (void)sortWaitTaskQueueByUsingBlock:(id /* block */)a0;
- (id)initWithDownloadQueue:(id)a0 taskOperationMap:(id)a1;
- (void)updateDownloadTask:(id)a0;
- (void)addDownloadTask:(id)a0 taskParam:(id)a1 cancelExistDownloading:(BOOL)a2;
- (void)updateDownloadTaskWithConfig:(id)a0;
- (void)notifyDownloadTaskWithIdentifier:(id)a0 downloadParameters:(id)a1 cancelExistDownloading:(BOOL)a2;
- (void)sortTaskByUsingDownloadInfoBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
