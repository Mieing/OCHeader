@class NSString, NSTimer, BDRMirrorViewController, BDUIPageViewController;
@protocol BDCurlViewControllerDelegate;

@interface BDCurlViewController : BDPageViewController <BDUIPageViewControllerDelegate, UIPageViewControllerDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDUIPageViewController *pageVC;
@property (retain, nonatomic) BDRMirrorViewController *backVC;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long animatingCount;
@property (copy, nonatomic) id /* block */ pageAnimationFinalBlock;
@property (nonatomic) float mirroAlpha;
@property (nonatomic) BOOL captureAllGuard;
@property (nonatomic) float captureUnloadInter;
@property (weak, nonatomic) id<BDCurlViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableFixPageCurlCrash;

- (void)setViewController:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)currentVC;
- (void)animationFinish:(id)a0 toVC:(id)a1;
- (void)checkExceptionPage;
- (void)setupPageVC:(id)a0;
- (BOOL)pageViewController:(id)a0 shoundBeginGesture:(id)a1;
- (id)viewControllers;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)viewDidLoad;
- (void)dealloc;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)panGesture;
- (void)setupUI;

@end
