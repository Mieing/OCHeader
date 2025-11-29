@class MMLiveRemoteTrtcCustomRenderComposeManagerV2, MMLiveTaskId;

@interface MMLiveRemoteTrtcCustomRenderGiftAttackManager : NSObject

@property (retain, nonatomic) MMLiveRemoteTrtcCustomRenderComposeManagerV2 *composeManager;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (copy, nonatomic) id /* block */ checkCanSurviveCallback;

- (id)initWithParam:(id)a0;
- (void)startGiftAttack;
- (void)stopGiftAttack;
- (void)onSurviveOverTime;
- (BOOL)checkCanSurviveAfterRenderStop;
- (void)startSurviveCountDown;
- (void)cancelSurviveCountDown;
- (double)getSurviveDuration;
- (double)getRecentAverageFootPrintMemoryPercent:(id)a0;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
