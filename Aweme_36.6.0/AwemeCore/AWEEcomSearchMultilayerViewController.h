@class NSString, UIViewController, UIPanGestureRecognizer;

@interface AWEEcomSearchMultilayerViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *interactivePopGesture;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) UIViewController *popDisplayViewController;
@property (nonatomic) BOOL isExecutingPopAnimation;
@property (nonatomic) BOOL isInteractivePopping;
@property (nonatomic) BOOL isCustomPopBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popViewControllerStartFrame;
@property (nonatomic) BOOL needTriggerChildControllerLifeCycleMethods;
@property (nonatomic) BOOL needAddInteractivePopGesture;
@property (nonatomic) BOOL allowInteractivePopGesture;
@property (copy, nonatomic) id /* block */ customPopBlock;
@property (copy, nonatomic) id /* block */ isNeedToCustomPopBlock;
@property (copy, nonatomic) id /* block */ willExecutePopAnimationBlock;
@property (copy, nonatomic) id /* block */ willExecutePopAnimationBeforeAppear;
@property (copy, nonatomic) id /* block */ executingPopAnimationBlock;
@property (copy, nonatomic) id /* block */ didCancelExecutePopAnimationBlock;
@property (copy, nonatomic) id /* block */ didEndExecutePopAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)esearch_dismissViewController:(id)a0 withAnimationType:(long long)a1 completion:(id /* block */)a2;
- (void)_cancelPopViewController;
- (void)_finishPopViewController;
- (void)interactivePopGestureDidTrigger:(id)a0;
- (void)esearch_showViewController:(id)a0 viewControllerLayoutBlock:(id /* block */)a1 withAnimationType:(long long)a2 completion:(id /* block */)a3;
- (void)esearch_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)esearch_addViewController:(id)a0 viewControllerLayoutBlock:(id /* block */)a1 needTriggerLifeCycleMethod:(BOOL)a2;
- (void)esearch_removeViewController:(id)a0 needTriggerLifeCycleMethod:(BOOL)a1;
- (id)esearch_dismissTargetViewController;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
