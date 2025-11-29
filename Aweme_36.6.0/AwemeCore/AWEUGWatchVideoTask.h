@class NSString, BDUGLuckyActivityTaskModel;
@protocol BDUGLuckyActivityTaskStatusDelegate;

@interface AWEUGWatchVideoTask : AWEUGTimeMeterTask <AWEUGCountDownViewStateDelegate, AWEDigitalWellbeingMessage, AWEBasicModeMessage, BDUGLuckyActivityTaskExecuteProtocol>

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isSpecialMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDUGLuckyActivityTaskStatusDelegate> statusDelegate;
@property (retain, nonatomic) BDUGLuckyActivityTaskModel *taskModel;

+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (BOOL)stopOldWhenUniqueConflict;
+ (void)onClearExpiredCache:(id)a0;
+ (BOOL)isUnique;
+ (id)taskType;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (id)taskToken;
- (void)executeWithJumpResult:(BOOL)a0 openTaskCallback:(id /* block */)a1;
- (void)pauseTask;
- (void)resumeTask;
- (void)onSameGlobalTaskIdEnter:(id)a0;
- (id)commonParam;
- (double)firstInitTime;
- (void)taskDidEnterScene:(id)a0;
- (void)pauseCountDownForTaskTrigger:(id)a0 withReason:(id)a1;
- (void)taskDidLeaveScene:(id)a0;
- (void)setupTask;
- (void)taskStartTiming;
- (void)taskReportFinish;
- (BOOL)validateTask;
- (void)countDownViewDidDismissWithConfig:(id)a0;
- (void)countDownViewDidTappedWithConfig:(id)a0 clickType:(unsigned long long)a1 status:(unsigned long long)a2;
- (void)countDownViewForceCloseTask;
- (void)countDownViewReportTaskFinish;
- (void)didTaskUpdateWithProgress:(double)a0 task:(id)a1;
- (id)campaignActivityId;
- (void)triggerTaskIfNeededForTrigger:(id)a0 withReason:(id)a1;
- (void)checkTaskValidate;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)taskID;
- (void)dealloc;
- (unsigned long long)persistenceStrategy;

@end
