@class TTVideoEngineKVStorage, NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TTVideoEngineDownloaderDelegate;

@interface TTVideoEngineDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_diskOperationQueue;
}

@property (nonatomic) long long maxTaskId;
@property (retain, nonatomic) NSMutableArray *allTasks;
@property (retain, nonatomic) NSMutableSet *runningTasks;
@property (retain, nonatomic) NSMutableArray *waitingTasks;
@property (retain, nonatomic) TTVideoEngineKVStorage *storage;
@property (copy, nonatomic) NSString *tasksIndexPath;
@property (retain, nonatomic) NSMutableArray *indexArray;
@property (nonatomic) BOOL readAllTask;
@property (nonatomic) BOOL loadingData;
@property (nonatomic) unsigned long long maxDownloadOperationCount;
@property (nonatomic) long long limitFreeDiskSize;
@property (weak, nonatomic) id<TTVideoEngineDownloaderDelegate> delegate;

+ (id)shareLoader;

- (void)downloadFail:(id)a0 error:(id)a1;
- (void)downloadDidSuspend:(id)a0;
- (void)progress:(id)a0 info:(id)a1;
- (void)task:(id)a0 completeError:(id)a1;
- (BOOL)suspended:(id)a0;
- (void)tryNextWaitingTask:(id)a0;
- (BOOL)shouldResume:(id)a0;
- (id)vidTaskWithVideoModel:(id)a0 resolution:(unsigned long long)a1;
- (id)_readTasksFromDisk;
- (id)existVidTask:(id)a0 resolution:(unsigned long long)a1 codec:(long long)a2 baseDash:(BOOL)a3 https:(BOOL)a4;
- (id)vidTask:(id)a0 resolution:(unsigned long long)a1 codec:(long long)a2 baseDash:(BOOL)a3 https:(BOOL)a4;
- (void)_saveTaskInfo:(id)a0;
- (id)_taskForKey:(id)a0;
- (void)_writeTaskToDisk:(id)a0 allTasks:(id)a1;
- (void)_writeIndexToDisk:(id)a0;
- (id)existUrlTask:(id)a0;
- (id)urlTask:(id)a0 key:(id)a1 videoId:(id)a2;
- (id)existVidTask:(id)a0 resolution:(unsigned long long)a1 bytevc1:(BOOL)a2 baseDash:(BOOL)a3 https:(BOOL)a4;
- (id)vidTask:(id)a0 resolution:(unsigned long long)a1 bytevc1:(BOOL)a2 baseDash:(BOOL)a3 https:(BOOL)a4;
- (id)existVidTaskWithVideoModel:(id)a0 resolution:(unsigned long long)a1;
- (void)cancelTask:(id)a0;
- (void)resume:(id)a0;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_addTask:(id)a0;

@end
