@class AWEVideoProductDetailView, AWELongVideoIAAProductDetailPresenter, NSString;

@interface AWELongVideoIAAProductDetailController : AWEPlayInteractionBaseController <AWEVideoProductDetailViewDelegate, AWEVideoPaymentPresenterDelegate, CAAnimationDelegate>

@property (retain, nonatomic) AWEVideoProductDetailView *detailView;
@property (retain, nonatomic) AWELongVideoIAAProductDetailPresenter *presenter;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasClosedManually;
@property (nonatomic) double clickTimeStamp;
@property (nonatomic) long long secondsLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)showPanel:(BOOL)a0;
- (void)hidePanel:(BOOL)a0;
- (void)resetDisplayLink;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)setupEvent;
- (void)playResumeDisplayLink;
- (void)changePanel:(BOOL)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)changeInteractionLeftElement:(BOOL)a0;
- (id)moveToBottomAnimation:(id)a0 show:(BOOL)a1;
- (void)seekVideoEnd:(id)a0;
- (void)updateDetailViewLayout;
- (BOOL)shouldHideWhenAppear;
- (void)changePanelStatusIfNeeded;
- (void)didClickBuyButton;
- (void)changeDetailView:(BOOL)a0;
- (double)calculateDetailViewWidth;
- (id)alphaAnimationToValue:(double)a0;
- (void)view:(id)a0 actionType:(unsigned long long)a1;
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
