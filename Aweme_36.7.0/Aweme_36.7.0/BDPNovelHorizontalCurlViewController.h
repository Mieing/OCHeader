@class NSString, BDPNovelPageViewController, BDPNovelContentPageContext, BDPNovelContentPageViewController, BDPNovelPageBackMirrorViewController, NSMutableArray, BDPNovelClickMask;

@interface BDPNovelHorizontalCurlViewController : BDPNovelContainerController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDPNovelPageViewController *pageController;
@property (retain, nonatomic) BDPNovelContentPageViewController *currentVC;
@property (retain, nonatomic) BDPNovelContentPageViewController *targetVC;
@property (weak, nonatomic) BDPNovelContentPageContext *firstPageContext;
@property (retain, nonatomic) BDPNovelPageBackMirrorViewController *backController;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSMutableArray *fastChangeVCs;
@property (retain, nonatomic) NSMutableArray *preVCs;
@property (retain, nonatomic) NSMutableArray *afterVCs;
@property (retain, nonatomic) BDPNovelClickMask *animatingClickView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getNextVC:(id)a0;
- (long long)pageTurnMode;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (BOOL)isFreeWordReachEnd;
- (id)getCurrentContents;
- (void)renderFinished:(id)a0;
- (void)updateNewViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recycleVCs;
- (void)setupPageViewController;
- (void)setupInitPageView;
- (void)animatingClickHandle:(id)a0;
- (BOOL)canGetNewVC:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;

@end
