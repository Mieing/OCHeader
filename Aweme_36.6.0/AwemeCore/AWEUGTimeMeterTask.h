@class AWECampaignWatchTaskModel, NSArray, NSString, NSNumber;
@protocol AWEUGSceneServiceProtocol, AWEUGCampaignTaskTimerProtocol;

@interface AWEUGTimeMeterTask : NSObject <AWEUGTimeMeterTaskStateProtocol, AWEUGTaskTriggerDelegate, AWEUGSceneServiceDelegate, AWEUGCampaignTaskTimerStateDelegate, AWEUGTimeMeterTaskProtocol>

@property (nonatomic) BOOL hasLogUpdateAfterBecomeActivity;
@property (retain, nonatomic) AWECampaignWatchTaskModel *watchTaskModel;
@property (copy, nonatomic) NSArray *triggers;
@property (retain, nonatomic) id<AWEUGSceneServiceProtocol> sceneService;
@property (retain, nonatomic) id<AWEUGCampaignTaskTimerProtocol> timerHelper;
@property (copy, nonatomic) NSArray *outputers;
@property (copy, nonatomic) NSNumber *currentProgress;
@property (copy, nonatomic) NSString *currentUID;
@property (nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskToken;
- (id)commonParam;
- (double)firstInitTime;
- (void)taskDidEnterScene:(id)a0;
- (void)pauseCountDownForTaskTrigger:(id)a0 withReason:(id)a1;
- (void)startCountDownForTaskTrigger:(id)a0 withReason:(id)a1;
- (void)taskDidLeaveScene:(id)a0;
- (void)taskInitWithJSON:(id)a0;
- (void)setupTask;
- (void)taskPauseForReason:(id)a0;
- (void)taskStartTiming;
- (void)taskDidFinish;
- (void)taskReportFinish;
- (void)didTaskUpdateWithProgress:(double)a0 task:(id)a1;
- (void)didTaskStatusChanged:(long long)a0 task:(id)a1;
- (void)awe_ugOutputersTaskDidStart;
- (void)awe_ugOutputersTaskWillStartTiming;
- (void)awe_ugOutputersTaskDidFinishTask;
- (void)awe_ugOutputersTaskDidPauseForReason:(id)a0;
- (void)awe_ugOutputersTaskDidEnterScene:(id)a0;
- (void)awe_ugOutputersTaskDidLeaveScene:(id)a0;
- (void)awe_ugOutputersTaskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (void)awe_ugOutputersTaskDidFinishReportWithModel:(id)a0;
- (void)setupActiveObserver;
- (void)triggerTaskIfNeededForTrigger:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)taskID;
- (void)dealloc;
- (void)taskStart;

@end
