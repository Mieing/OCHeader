@class NSString, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEEntertainmentVideoTrialPresenterProtocol;

@interface AWELandscapeEntertainmentVideoTrialController : AWELandscapeInteractionBaseController <AWEEntertainmentVideoTrialDelegate, AWEPaidStreamPlugin>

@property (weak, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *trialTagView;
@property (retain, nonatomic) id<AWEEntertainmentVideoTrialPresenterProtocol> presenter;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double clickTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)setAppear:(BOOL)a0;
- (void)didEnterLandscape;
- (void)afterSetData:(id)a0;
- (void)bindEvents;
- (id)createPresenter;
- (void)updateControllerWithAnimationOffset:(double)a0 positon:(long long)a1;
- (void)willExitLandscape;
- (void)bindEventsInPaidStream;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1 totalTimeInterval:(double)a2;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (BOOL)shouldShowRewardedAdvertisingTryWatchView;
- (void)addCountDownViewIfNeeded;
- (void)setupCountDownView:(id)a0;
- (BOOL)usePaidStreamControl;
- (void)updateRewardedAdvertisingTryWatchView:(double)a0;
- (void)paidStreamControlUpdatePaymentTryWatchView:(double)a0 remainingTime:(double)a1;
- (void)updateAppearStatusWithAnimation:(BOOL)a0;
- (id)createTrialTagView;
- (void)didClickUnlockButton;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
