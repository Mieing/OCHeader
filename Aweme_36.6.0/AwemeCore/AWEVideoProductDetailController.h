@class AWEVideoPaymentBasePresenter, NSArray, AWEVideoProductDetailView, NSString, AWEVideoProductDetailDataController;

@interface AWEVideoProductDetailController : AWEPlayInteractionBaseController <AWEVideoProductDetailViewDelegate, AWEVideoPaymentPresenterDelegate, CAAnimationDelegate, AWEPlayInteractionPaymentDetailControllerProtocol>

@property (retain, nonatomic) AWEVideoProductDetailView *detailView;
@property (retain, nonatomic) AWEVideoPaymentBasePresenter *presenter;
@property (retain, nonatomic) AWEVideoProductDetailDataController *dataController;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL hasClosedManually;
@property (nonatomic) BOOL hasNewProductInfo;
@property (nonatomic) BOOL hasUpdatedProductInfo;
@property (retain, nonatomic) NSArray *leftElements;
@property (nonatomic) long long backgroundClickIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)showPanel:(BOOL)a0;
- (void)hidePanel:(BOOL)a0;
- (double)currentPlayProgress;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)setupEvent;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)onlySendPlayEvent;
- (void)detailViewWillDisappear;
- (void)addChildVC;
- (void)changePanel:(BOOL)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)changeInteractionLeftElement:(BOOL)a0;
- (id)moveToBottomAnimation:(id)a0 show:(BOOL)a1;
- (void)updateVideoPlayerPeriod;
- (void)updateDetailViewLayout;
- (void)changePanelStatusIfNeeded;
- (void)changeDetailView:(BOOL)a0;
- (double)calculateDetailViewWidth;
- (id)alphaAnimationToValue:(double)a0;
- (void)view:(id)a0 actionType:(unsigned long long)a1;
- (double)currentPlayPeriod;
- (Class)presenterWithModel:(id)a0 referString:(id)a1 extraInfo:(id)a2;
- (void)updateDetailViewWithNewModel:(id)a0;
- (void)showPaymentDetailCard;
- (void)viewDidAppear;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setData:(id)a0;
- (void)viewWillAppear;
- (double)animationDuration;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
