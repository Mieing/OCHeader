@class UIView, IESECGoodsFeedContext, NSString, IESECFeedInnerFlowUpArrowView, IESECFeedInnerFlowCloseView, UIImageView, IESECVideoInnerFlowLoadingView, IESECFeedInnerFlowBottomView, IESECGoodsFeedLargeCardNewCollectionViewCell, IESECContentListContainerVC;
@protocol IESECGoodsFeedContainerProtocol, IESECGoodsFeedOperationProtocol;

@interface IESECVideoInnerFlowListController : NSObject <IESECVideoInnerFlowListActionDelegate, IESECContentListLifeCycleProtocol, IESECGoodsFeedControllerProtocol>

@property (weak, nonatomic) IESECGoodsFeedContext *context;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) id<IESECGoodsFeedContainerProtocol> container;
@property (weak, nonatomic) id<IESECGoodsFeedOperationProtocol> goodsFeedListDelegate;
@property (retain, nonatomic) IESECFeedInnerFlowBottomView *bottomWidget;
@property (retain, nonatomic) IESECFeedInnerFlowUpArrowView *upArrowWidget;
@property (retain, nonatomic) IESECVideoInnerFlowLoadingView *loadingWidget;
@property (retain, nonatomic) IESECFeedInnerFlowCloseView *closeWidget;
@property (retain, nonatomic) IESECContentListContainerVC *containerVC;
@property (retain, nonatomic) UIImageView *animateGoodsImageView;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginImageRect;
@property (nonatomic) double topCellHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topImageRect;
@property (nonatomic) double beginCoordYBottom;
@property (nonatomic) BOOL halfScreenState;
@property (weak, nonatomic) IESECGoodsFeedLargeCardNewCollectionViewCell *goodsFeedTopCellView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)listHeaderAppearStateChange:(BOOL)a0;
- (void)scrollBegin;
- (void)scrollEnd;
- (void)enterFirstCardDetail:(id)a0 position:(id)a1;
- (void)clickBuy:(id)a0;
- (void)handleNGroupBuyInvite:(id)a0;
- (BOOL)shouldRecognizePanGesture:(id)a0;
- (BOOL)shouldInterceptPanGesture:(id)a0;
- (BOOL)shouldRecSimultaneouslyWithGestureRecognizer:(id)a0 otherGesture:(id)a1;
- (void)screenSwitchAnimateFrom:(long long)a0 animateSuccess:(BOOL)a1 animateDuration:(double)a2;
- (void)setupAnimatedGoodsImage;
- (void)setupContentListView;
- (void)trackInflowListShowProduct:(id)a0;
- (void)upScrollInProgress:(struct CGPoint { double x0; double x1; })a0;
- (void)downScrollInProgress:(struct CGPoint { double x0; double x1; })a0;
- (void)upScrollGestureBegin;
- (void)upScrollAnimationScrollFinish:(double)a0;
- (void)upScrollAnimationScrollCancel:(double)a0;
- (void)downScrollGestureBegin;
- (void)downScrollAnimationScrollFinish:(double)a0;
- (void)downScrollAnimationScrollCancel:(double)a0;
- (void)addTipsViewModelIfNeeded;
- (void)closeGoodsFeed;
- (void)containerViewAsyncSetBackgroundImage:(id /* block */)a0;
- (void)addContainerView;
- (double)getImageDomainColorHue:(id)a0;
- (id)bgImageNameWithValue:(double)a0;
- (id)getImageDomainColor:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
