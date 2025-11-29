@class AWEVideoPaymentBasePresenter, NSString, AWEVideoProductDetailView, CADisplayLink, NSTimer;
@protocol AWEBottomButtonPlayletPresenterProtocol;

@interface AWERewardedAdvertisingProductDetailController : AWEPlayInteractionBaseController <AWEVideoProductDetailViewDelegate, AWEVideoPaymentPresenterDelegate, CAAnimationDelegate>

@property (retain, nonatomic) AWEVideoProductDetailView *detailView;
@property (retain, nonatomic) AWEVideoPaymentBasePresenter *presenter;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasClosedManually;
@property (nonatomic) BOOL shouldWaitAutoUnlock;
@property (nonatomic) double clickTimeStamp;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSTimer *displayProductWithoutPreviewTimer;
@property (nonatomic) long long backgroundClickIndex;
@property (copy, nonatomic) NSString *cePaidEntrance;
@property (retain, nonatomic) id<AWEBottomButtonPlayletPresenterProtocol> adChargeFreeWatchPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (Class)presenterWithModel:(id)a0 referString:(id)a1 extraInfo:(id)a2;

- (void)setHide:(BOOL)a0;
- (void)showPanel:(BOOL)a0;
- (void)hidePanel:(BOOL)a0;
- (void)resetDisplayLink;
- (double)currentPlayProgress;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)playResumeDisplayLink;
- (id)playletVIPPaidPanelExtraParams;
- (void)didReceiveUpdateProgressNotification:(id)a0;
- (void)changePanel:(BOOL)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)changeInteractionLeftElement:(BOOL)a0;
- (id)moveToBottomAnimation:(id)a0 show:(BOOL)a1;
- (void)updateDetailViewLayout;
- (void)changePanelStatusIfNeeded;
- (void)didClickBuyButton;
- (void)changeDetailView:(BOOL)a0;
- (double)calculateDetailViewWidth;
- (id)alphaAnimationToValue:(double)a0;
- (void)view:(id)a0 actionType:(unsigned long long)a1;
- (void)handleAutoUnlockRewardEvent:(long long)a0;
- (void)hideInteractionLeftElementExceptBottomButton:(BOOL)a0;
- (void)updateCePaidEntrance;
- (void)didClickButtonEventForIndex:(long long)a0;
- (void)resetDisplayProductWithoutPreviewTimer;
- (BOOL)shouldClickButton;
- (void)didClickBuyPlayletVIPWithSchema:(id)a0;
- (void)openPreAccessPanel:(id)a0;
- (void)didClickFreeWatchButtonWithButtonInfo:(id)a0;
- (void)viewDidAppear;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setData:(id)a0;
- (id)init;
- (void)viewWillAppear;
- (double)animationDuration;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
