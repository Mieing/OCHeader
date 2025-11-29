@class BUTimer, CSJMaterialMeta;
@protocol CSJRewardedVideoCountDownTopBarDelegate;

@interface CSJRewardedVideoCountDownTopBarView : CSJRewardedVideoTopBarView

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) long long displayCount;
@property (nonatomic) long long closeTime;
@property (retain, nonatomic) BUTimer *countDownTimer;
@property (nonatomic) BOOL alreadySendReward;
@property (readonly, nonatomic) long long rewardLeftTime;
@property (weak, nonatomic) id<CSJRewardedVideoCountDownTopBarDelegate> countDownDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRewardedVideo:(BOOL)a1 style:(long long)a2 ritModel:(id)a3 materialMeta:(id)a4;
- (void)pbu_safeDelegateCountDownTopBarDidReachRewardTime:(id)a0;
- (void)pbu_safeDelegateCountDownTopBarDidFinish:(id)a0;
- (long long)currentSecond;
- (void)pbu_countDownAction;
- (void)pbu_imageContactDirectLandingPageTopBarCountDown;
- (void)scheduleCountDown;
- (BOOL)isValidCountDown;
- (BOOL)isScheduledCountDown;
- (void)pauseCountDown;
- (void)resumeCountDown;
- (void)invalidateCountDown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
