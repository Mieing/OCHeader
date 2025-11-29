@class NSString, AWEUGPendantTimingTaskModel, NSMutableSet, AWEUGPendantActivityController;
@protocol AWEUGTimeMeterTaskProtocol, AWEFeedPendantLinkMonitorProtocol;

@interface AWEUGFeedPendantActivityTaskManager : NSObject <AWEBizTabBarMessage, AWEUserMessage, HTSAccountMessage>

@property (nonatomic) BOOL isReportingTaskResult;
@property (weak, nonatomic) id<AWEFeedPendantLinkMonitorProtocol> linkMonitor;
@property (retain, nonatomic) NSMutableSet *completedTokenSet;
@property (copy, nonatomic) NSString *currentKey;
@property (nonatomic) long long duration;
@property (nonatomic) long long taskIndex;
@property (weak, nonatomic) AWEUGPendantActivityController *activityController;
@property (retain, nonatomic) AWEUGPendantTimingTaskModel *timingTaskInfo;
@property (retain, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (nonatomic) BOOL hasTaskInProcess;
@property (nonatomic) double currentProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (void)tryToReportCompletedTask;
- (void)trackFeedPendanTimingTaskManagerLogWithMessage:(id)a0;
- (id)getEvadeRule;
- (id)getCompletedTaskTokenKey;
- (void)reportTaskCompletedWithToken:(id)a0 needRetry:(BOOL)a1;
- (void)startTaskWithIndex:(long long)a0 timeKey:(id)a1;
- (void)monitorTaskReportStatus:(long long)a0 params:(id)a1;
- (void)recordCompletedTaskWithToken:(id)a0;
- (void)showFirstTimingTaskPauseReasonBubbleIfNeeded;
- (void)handleTimingTask;
- (void)showFirstTimingTaskStartBubbleIfNeeded;
- (void)monitorTaskResumedFromCacheWithDuration:(long long)a0;
- (void)monitorTaskComplete;
- (void).cxx_destruct;
- (id)init;
- (void)startTask:(id)a0;

@end
