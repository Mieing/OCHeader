@class AWETeenAntiAddictionTimeService, NSString, NSObject, AWETeenAntiAddictionDecisionService;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWETeenAntiAddictionManager : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) BOOL pauseTimeLock;
@property (copy, nonatomic) NSString *pauseScene;
@property (nonatomic) BOOL needNoticeOnce;
@property (nonatomic) BOOL isBackground;
@property (readonly, nonatomic) AWETeenAntiAddictionTimeService *timeService;
@property (readonly, nonatomic) AWETeenAntiAddictionDecisionService *decisionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)isTimeLockShowing;
- (void)networkConnectionChanged:(id)a0;
- (BOOL)isNightLockShowing;
- (BOOL)withinNightLockTime;
- (BOOL)isAntiAddictionLockShowing;
- (void)scheduleDispatchTimer;
- (BOOL)antiAddictionLockWillShowWithinFiveMinutes;
- (void)startTimerIfNeededWhenTeenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)p_isU14User;
- (BOOL)isU14User;
- (void)doInAntiAddictionQueue:(id /* block */)a0;
- (void)checkTimerStatus;
- (void)setPauseTimeLock:(BOOL)a0 scene:(id)a1;
- (BOOL)needPauseTimeLock;
- (void)noticeReallyPauseLockEventOnce;
- (void)noticeLockDidShow:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)startTimerIfNeeded;
- (void)addTasks;

@end
