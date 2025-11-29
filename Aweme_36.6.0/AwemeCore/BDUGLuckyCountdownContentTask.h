@class BDUGLuckyActivityTaskModel, BDUGLuckyCountDownTaskModel, BDUGLuckyDogNetworkManager, BDUGLuckyTimingPandantView, NSString, NSMutableArray, BDUGLuckyCountDownPendantModel;
@protocol BDUGLuckyCountDownTaskDelegateProtocol, BDUGLuckyActivityTaskStatusDelegate;

@interface BDUGLuckyCountdownContentTask : NSObject <BDUGLuckyActivityTaskExecuteProtocol, BDUGLuckyCountDownTaskProtocol>

@property (retain, nonatomic) BDUGLuckyCountDownTaskModel *countDownTaskModel;
@property (retain, nonatomic) BDUGLuckyCountDownPendantModel *pendantModel;
@property (nonatomic) unsigned long long taskStatus;
@property (nonatomic) long long reportCount;
@property (retain, nonatomic) BDUGLuckyDogNetworkManager *networkManager;
@property (retain, nonatomic) BDUGLuckyTimingPandantView *pendantView;
@property (retain, nonatomic) NSMutableArray *failedReqPool;
@property (weak, nonatomic) id<BDUGLuckyActivityTaskStatusDelegate> statusDelegate;
@property (retain, nonatomic) BDUGLuckyActivityTaskModel *taskModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long progress;
@property (weak, nonatomic) id<BDUGLuckyCountDownTaskDelegateProtocol> countDownTaskDelegate;

+ (void)registerTaskDealer;
+ (BOOL)stopOldWhenGlobalTaskIdConflict;
+ (id)taskType;

- (id)__countDownTaskNotAvailableReason;
- (long long)targetTaskTime;
- (void)__lastReportFailedWithFailedPoolSize:(long long)a0 firstFailedReq:(long long)a1;
- (void)__retryFailedReqs:(id /* block */)a0;
- (unsigned long long)__convertPendantStatusFromTaskStatus:(unsigned long long)a0;
- (id)getPendantPosition;
- (id)__defaultExipreDate;
- (void)executeWithJumpResult:(BOOL)a0 openTaskCallback:(id /* block */)a1;
- (void)pauseTask;
- (void)resumeTask;
- (id)getPendant;
- (unsigned long long)countDownTaskType;
- (void)didTaskProgressUpdateWithScenes:(id)a0;
- (id)pendantCommonTrackParameters;
- (id)taskStatusString;
- (void)initializeTask;
- (void)executeWithJumpResult:(BOOL)a0 isFromMgetTaskView:(BOOL)a1 openTaskCallback:(id /* block */)a2;
- (void)handleOneTaskFinished;
- (void)requestNextTaskView;
- (void)trackPendantViewDidClick;
- (void)trackPendantViewDidShow;
- (void)pendantViewDidShow;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)scenes;
- (id)init;
- (void)stop;
- (id)taskID;
- (double)expireTime;
- (void)addObservers;
- (void)startCountdown;

@end
