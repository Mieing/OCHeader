@class NSMutableArray, NSString, EcUploadDispatch, NSMutableDictionary, NSError, NSObject, EcClient;
@protocol OS_dispatch_queue, EcTaskChangeProtocol;

@interface EcUploadTaskMgr : NSObject

@property (copy, nonatomic) NSString *defaultPauseReason;
@property (weak, nonatomic) EcClient *client;
@property (weak, nonatomic) EcUploadDispatch *uploadDispatch;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSMutableDictionary *allItem;
@property (retain, nonatomic) NSMutableDictionary *pauseItem;
@property (retain, nonatomic) NSMutableArray *readyItem;
@property (retain, nonatomic) NSMutableDictionary *runningItem;
@property (retain, nonatomic) NSMutableArray *successTask;
@property (retain, nonatomic) NSMutableArray *failedTask;
@property (retain, nonatomic) NSMutableDictionary *runningTask;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id<EcTaskChangeProtocol> taskDelegate;
@property (copy, nonatomic) id /* block */ taskStageChange;

- (void)pauseTask;
- (void)resumeTask;
- (void)getUploadItemTask:(id)a0 complete:(id /* block */)a1;
- (void)ecInitParam:(id)a0;
- (id)ecCreateTaskByItemModel:(id)a0;
- (void)postItemChange:(id)a0;
- (void)progressLogic:(id)a0;
- (void)resultLogic:(id)a0;
- (void)postTaskProgressChange;
- (void)taskGotoOver;
- (void)doPauseByReason:(id)a0;
- (void)retryTaskByAssetIds:(id)a0;
- (void)doResumeTaskByReason:(id)a0;
- (void)postTaskStateChange;
- (id)currentTaskStatus;
- (id)initWithTaskKey:(id)a0 assetModelList:(id)a1 uploadDispatch:(id)a2 client:(id)a3;
- (id)initWithTaskKey:(id)a0 itemModelList:(id)a1 pauseReason:(id)a2 uploadDispatch:(id)a3 client:(id)a4;
- (void)appendAssetModelList:(id)a0;
- (BOOL)hasReadyTask;
- (void)pauseTaskByReanson:(long long)a0;
- (void)deleteItemByAssetIds:(id)a0;
- (void)retryTask;
- (void)resumeTaskByReason:(long long)a0;
- (id)getTaskItemState:(id)a0;
- (void)clearDb;
- (void).cxx_destruct;
- (void)refreshState;
- (id)currentProgress;
- (void)cancelTask;
- (void)saveToDB;

@end
