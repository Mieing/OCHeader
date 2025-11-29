@class UIView;

@interface AWEListenFeedInteractionContentFilterController : AWEListenFeedInteractionBaseController

@property (nonatomic) BOOL isContentFilterShowing;
@property (retain, nonatomic) UIView *contentFilterAnimationMask;
@property (retain, nonatomic) UIView *contentFilterMaskView;
@property (nonatomic) double filterViewHeight;
@property (nonatomic) double filterMastViewRadius;

- (void)showContentFilterView:(BOOL)a0;
- (void)checkIfFilterViewShowing;
- (void)realShowFilterAnimation:(BOOL)a0;
- (void)resetContentFilterViewIfNeed;
- (void)prepareForFilterViewAnimation:(BOOL)a0;
- (id)getFilterAnimationMask;
- (void)realShowContentFilterView;
- (void)finishFilterViewAnimation:(BOOL)a0;
- (void)realHideContentFilterView;
- (id)getContentFilterMaskViewMasker;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end
