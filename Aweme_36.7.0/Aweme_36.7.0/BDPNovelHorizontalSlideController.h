@class NSMutableArray, NSString, BDPNovelContentPageContext, BDPNovelContentPageViewController, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface BDPNovelHorizontalSlideController : BDPNovelContainerController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) BOOL directInGestureConfirm;
@property (retain, nonatomic) UIPanGestureRecognizer *panRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) BDPNovelContentPageViewController *currentVC;
@property (retain, nonatomic) BDPNovelContentPageViewController *nextVC;
@property (retain, nonatomic) NSMutableArray *preVCs;
@property (retain, nonatomic) NSMutableArray *afterVCs;
@property (weak, nonatomic) BDPNovelContentPageContext *firstPageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupRecognizer;
- (long long)pageTurnMode;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (BOOL)isFreeWordReachEnd;
- (id)getCurrentContents;
- (void)renderFinished:(id)a0;
- (void)updateNewViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recycleVCs;
- (void)setupInitPageView;
- (BOOL)canGetNewVC;
- (id)getNextVC;
- (void)addNextVCToView;
- (void)slideChangeNextAndCurrentWithDiff:(double)a0;
- (void)cancelSlideChange:(id /* block */)a0;
- (void)completeSlideChange:(id /* block */)a0;
- (void)removeVCInView:(id)a0;
- (void)recycleVCWhenSlideFinishExchangeNextCurrent:(BOOL)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;

@end
