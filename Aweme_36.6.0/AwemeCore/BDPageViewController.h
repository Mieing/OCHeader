@class NSArray, UIViewController;
@protocol BDPageViewControllerDelegate, BDPageViewControllerDataSource;

@interface BDPageViewController : UIViewController

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isDragging;
@property (retain, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) UIViewController *targetVC;
@property (nonatomic) long long pageDirection;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id<BDPageViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<BDPageViewControllerDelegate> delegate;
@property (nonatomic) BOOL enableFastClick;
@property (copy, nonatomic) id /* block */ animationFinishBlock;

- (void)setViewController:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeTransition:(float)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)didFinishTransition:(id)a0 toVC:(id)a1;
- (void)willBeginTransition;
- (void)changeTransition:(float)a0 fromVC:(id)a1;
- (void)didCancelTransition:(id)a0;
- (id)getTargetVC;
- (BOOL)shouldBeginTransition:(id)a0;
- (BOOL)shouldInterruptAction;
- (void)noMoreForwardPage;
- (void)replaceCurrentVC;
- (void)changeTransition:(float)a0;
- (BOOL)shouldBeforeVC:(id)a0;
- (BOOL)shouldAfterVC:(id)a0;
- (void)removeCurrentVC;
- (long long)directionWithPanTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)noMoreBackwardPage;
- (void)removeTargetVC;
- (void)addTargetVC;
- (void)didCancelTransition:(id)a0 toVC:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)containerView;
- (void)viewDidLoad;
- (id)panGesture;
- (void)handlePanGesture:(id)a0;
- (void)didFinishTransition:(id)a0;

@end
