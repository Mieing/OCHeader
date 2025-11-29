@class MMTimer;
@protocol WCAdDivingPagViewDelegate;

@interface WCAdDivingPagView : WCAdPagView

@property (nonatomic) long long divingState;
@property (retain, nonatomic) MMTimer *divingTimer;
@property (nonatomic) BOOL isTimerPaused;
@property (nonatomic) BOOL shouldResumeTimerAfterForeground;
@property (nonatomic) BOOL shouldResumePAGAfterForeground;
@property (weak, nonatomic) id<WCAdDivingPagViewDelegate> divingDelegate;

- (void)initView;
- (void)dealloc;
- (void)generateDivingTimer;
- (void)destroyDivingTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)divingTimerTick;
- (void)playForSure;
- (void)onPAGPlayEnd;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)onAnimationUpdate:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)initPagView;
- (void)play;
- (void)pause;
- (void)stop;
- (void).cxx_destruct;

@end
