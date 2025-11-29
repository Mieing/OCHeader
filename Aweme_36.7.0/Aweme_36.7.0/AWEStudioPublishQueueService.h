@class NSRecursiveLock, NSString, AWEPublishTaskPersist, NSMutableArray;
@protocol IESLCMessageHandlerProtocol;

@interface AWEStudioPublishQueueService : HTSService <AWEPublishTaskMessage, IESLCMessageHandlerService, AWEStudioPublishQueueService>

@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) NSMutableArray *temporaryTaskQueue;
@property (retain, nonatomic) AWEPublishTaskPersist *taskPersist;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)onServiceInit;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (BOOL)hasTaskExecuting;
- (void)executeTask;
- (BOOL)hasAsyncTaskExecuting;
- (id)currentTemporaryTask;
- (id)allTasksForSaveAlbum;
- (id)firstShowProgressTask;
- (id)secondShowProgressTaskWithFilterBlock:(id /* block */)a0;
- (BOOL)checkConflicts;
- (void)retryRetryTask:(id)a0;
- (void)retryRetryTaskWithTaskId:(id)a0 taskConfigBlock:(id /* block */)a1;
- (void)removeRetryTask;
- (void)removeCachedTaskID:(id)a0;
- (id)cachedTaskIds;
- (BOOL)isContainQuickSharePublishTask;
- (BOOL)isContainQuickSharePublishTaskWithFeedType:(long long)a0;
- (id)retryTaskId;
- (long long)normalFlowTaskCount;
- (id)taskInQueueWithTaskId:(id)a0;
- (id)taskInQueueWithCreateId:(id)a0;
- (void)taskExistsWithTaskId:(id)a0 completion:(id /* block */)a1;
- (void)p_observeTask:(id)a0;
- (void)onListenDraftDelete:(id)a0;
- (unsigned long long)preUploadTaskCount;
- (id)enumerateTasksQueue;
- (void)removePreUploadTaskWithTask:(id)a0;
- (BOOL)removeTemporaryTask:(id)a0;
- (id)getShowProgressTaskWithIndex:(long long)a0 filter:(id /* block */)a1;
- (void)p_handlerPublishLivePlaybackFinishedWithMsg:(id)a0;
- (void)p_handlerPublishReplaceMusicVideoFinishedWithMsg:(id)a0;
- (void)notifyWithPublishSuccess:(BOOL)a0 itemID:(id)a1 task:(id)a2;
- (void)replaceMusicNotifyWithPublishSuccess:(BOOL)a0 itemID:(id)a1 task:(id)a2;
- (void)reveryTaskFromDraft:(id)a0 skipLoadVideo:(BOOL)a1 taskConfigBlock:(id /* block */)a2;
- (void)beginUploadVideoWithTaskV2:(id)a0 completion:(id /* block */)a1;
- (BOOL)addTask:(id)a0;
- (BOOL)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)currentTask;
- (id)allTasks;
- (void)dealloc;

@end
