@class NSString, UIVisualEffectView, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEPaidStreamControlProtocol;

@interface AWELandscapeLongVideoIAACountDownController : AWELandscapeInteractionBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *countDownView;
@property (nonatomic) long long currentState;
@property (nonatomic) long long totalSeconds;
@property (nonatomic) long long secondsStayed;
@property (nonatomic) BOOL isVCDisplaying;
@property (nonatomic) long long secondsSubmitted;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) long long status;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)setAppear:(BOOL)a0;
- (void)didEnterLandscape;
- (id)trackCommonParams;
- (void)afterSetData:(id)a0;
- (void)bindEvents;
- (void)updateControllerWithAnimationOffset:(double)a0 positon:(long long)a1;
- (void)willExitLandscape;
- (void)didExitLandscape;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)addCountDownViewIfNeeded;
- (void)setupCountDownView:(id)a0;
- (void)updateRewardedAdvertisingTryWatchView:(double)a0;
- (void)didClickUnlockButton;
- (void)preparePaidStream;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (long long)indexForInsertBlockViewWithScene:(long long)a0;
- (id)commonParametersForPaidStreamWithScene:(long long)a0;
- (void)actionForBlockWithCompletionHandler:(id /* block */)a0;
- (id)playerViewControllerForSecurity;
- (void)paidStreamDidAcquireRightsWithScene:(long long)a0 paymentType:(long long)a1 rights:(id)a2 extraInfo:(id)a3;
- (BOOL)shouldShowController;
- (void)updateForPaidInfoItems:(id)a0;
- (void)updateCountDownViewVisibility;
- (BOOL)shouldShowCountDownView;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
