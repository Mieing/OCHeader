@class NSString, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEPaidStreamControlProtocol;

@interface AWELandscapePaymentTryWatchController : AWELandscapeInteractionBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *paymentTryWatchView;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL hasTrackShowPaymentTryWatchView;
@property (nonatomic) BOOL hasTrackShowPaymentView;
@property (nonatomic) BOOL hasTrackTrialEnd;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
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
- (BOOL)usePaidStreamControl;
- (void)paidStreamControlUpdatePaymentTryWatchView:(double)a0 remainingTime:(double)a1;
- (void)updateAppearStatusWithAnimation:(BOOL)a0;
- (BOOL)usePaidStreamPreventScreenRecord;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (long long)indexForInsertBlockViewWithScene:(long long)a0;
- (void)actionForBlockWithCompletionHandler:(id /* block */)a0;
- (id)playerViewControllerForSecurity;
- (void)addPaymentTryWatchViewIfNeeded;
- (void)setupPaymentTryWatchView:(id)a0;
- (void)preparePaidStreamIfNeeded;
- (void)updatePaymentTryWatchView:(double)a0;
- (void)updatePaymentTryWatchViewStatusWithAnimation:(BOOL)a0;
- (void)trackTrialEndIfNeeded;
- (void)trackShowPaymentTryWatchView;
- (void)trackClickPaymentView;
- (void)trackShowPaymentViewIfNeeded;
- (BOOL)shouldShowPaymentTryWatchView;
- (void)trackClickPaymentTryWatchView;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
