@class UIView, NSString, AWELandscapePaymentMaskView;
@protocol AWELandscapePaymentViewProtocol, AWEEntertainmenMaskPresenterProtocol;

@interface AWELandscapeEntertainmentMaskController : AWELandscapeInteractionBaseController <AWELandscapeControllerDispatchProtocol, AWEEntertainmentMaskDelegate, AWEPaidStreamPlugin, AWEPaidStreamUIDelegate>

@property (retain, nonatomic) AWELandscapePaymentMaskView *blurEffectMaskView;
@property (retain, nonatomic) UIView<AWELandscapePaymentViewProtocol> *blockView;
@property (retain, nonatomic) id<AWEEntertainmenMaskPresenterProtocol> presenter;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAppear:(BOOL)a0;
- (void)afterSetData:(id)a0;
- (id)createPresenter;
- (void)willExitLandscape;
- (void)presenter:(id)a0 didHandleEventWithType:(long long)a1;
- (void)checkStatusWithPlayBackTime:(double)a0;
- (void)bindEventsInPaidStream;
- (void)handleEventWithTypeWithButtonUIInfo:(id)a0;
- (void)updateAppearStatusAnimated:(BOOL)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (long long)indexForInsertBlockViewWithPaidStream:(id)a0;
- (id)trialContainerViewForPaidStream:(id)a0;
- (id)blockPurchaseButtonViewForPaidBlockForPaidStream:(id)a0;
- (void)addBlurEffectMaskViewIfNeeded;
- (void)setupBlockView;
- (void)addBlockViewIfNeeded;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
