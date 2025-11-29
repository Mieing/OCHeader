@class NSTimer, BDPAdProtectedModel;

@interface BDPGameDurationForADProtectionHg : NSObject

@property (nonatomic) int secondsOfPlayed;
@property (retain, nonatomic) NSTimer *gamePlayedDurationTimer;
@property (retain, nonatomic) BDPAdProtectedModel *currentModel;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (void)setupObserver;
- (int)durationFromAbTestOrSettings;
- (void)enterOrForeground:(id)a0;
- (void)exitOrBackground:(id)a0;
- (void)commonCheckAndPreProcesses:(id)a0;
- (void)processesForBackGroundAndExit:(id)a0;
- (BOOL)isGameWithUniqueID:(id)a0;
- (void)checkNewUserAndCreateTimer:(id)a0;
- (void)stopMyTimerForGamePlayed;
- (BOOL)shouldUpdateDataBase:(id)a0;
- (void)updateLocalDataBase;
- (BOOL)isBlockedWithAppId:(id)a0;
- (BOOL)judgeNewUser;
- (void)myTimerCountsWithUniqeId:(id)a0;
- (void)reportNewUserToServerWithDuration:(int)a0 appId:(id)a1 did:(id)a2 aid:(id)a3;
- (void)createTimerForGamePlayWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
