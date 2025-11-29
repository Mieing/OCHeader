@class NSString, UIVisualEffectView, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEPaidStreamControlProtocol;

@interface AWELongVideoDetailIAACountDownController : AWEVideoPlayControlBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *countDownView;
@property (nonatomic) BOOL hasTrackPaymentTryWatchView;
@property (nonatomic) long long totalSeconds;
@property (nonatomic) long long secondsStayed;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)commonParams;
- (BOOL)shouldResponseTapGesture:(id)a0;
- (void)bindEvents;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)addCountDownViewIfNeeded;
- (void)setupCountDownView:(id)a0;
- (void)didClickUnlockButton;
- (void)preparePaidStream;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (long long)indexForInsertBlockViewWithScene:(long long)a0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)a0;
- (id)commonParametersForPaidStreamWithScene:(long long)a0;
- (void)actionForBlockWithCompletionHandler:(id /* block */)a0;
- (id)playerViewControllerForSecurity;
- (void)paidStreamDidAcquireRightsWithScene:(long long)a0 paymentType:(long long)a1 rights:(id)a2 extraInfo:(id)a3;
- (void)updateForPaidInfoItems:(id)a0;
- (void)pauseForPaidStreamIfEnable;
- (BOOL)shouldShowLongVideoIAACountDownView;
- (void)updateCountDownViewLayout;
- (void)openIAARewardADContainerFromLandscapeNotification:(id)a0;
- (void)willEnterFullScreenWithEnterMethod:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
