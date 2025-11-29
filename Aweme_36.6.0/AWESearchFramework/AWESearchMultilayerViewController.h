@class NSString, UIScreenEdgePanGestureRecognizer, UIPanGestureRecognizer, UIViewController;

@interface AWESearchMultilayerViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *interactivePopGesture;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *interactivePopGestureEdge;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) UIViewController *popDisplayViewController;
@property (nonatomic) BOOL isExecutingPopAnimation;
@property (nonatomic) BOOL isInteractivePopping;
@property (nonatomic) BOOL isCustomPopBlock;
@property (nonatomic) BOOL isPanLeftCustomPopBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popViewControllerStartFrame;
@property (nonatomic) BOOL needTriggerChildControllerLifeCycleMethods;
@property (nonatomic) BOOL needAddInteractivePopGesture;
@property (retain, nonatomic) UIViewController *awesearch_RootViewController;
@property (nonatomic) BOOL allowInteractivePopGesture;
@property (nonatomic) BOOL allowInteractivePopGestureEdge;
@property (copy, nonatomic) id /* block */ customPopBlock;
@property (copy, nonatomic) id /* block */ isNeedToCustomPopBlock;
@property (copy, nonatomic) id /* block */ panLeftCustomPopBlock;
@property (copy, nonatomic) id /* block */ isNeedPanLeftToCustomPopBlock;
@property (copy, nonatomic) id /* block */ willExecutePopAnimationBlock;
@property (copy, nonatomic) id /* block */ willExecutePopAnimationBeforeAppear;
@property (copy, nonatomic) id /* block */ executingPopAnimationBlock;
@property (copy, nonatomic) id /* block */ didCancelExecutePopAnimationBlock;
@property (copy, nonatomic) id /* block */ didEndExecutePopAnimationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSearchBackReturnPathOpt;

- (void)_cancelPopViewController;
- (void)_finishPopViewController;
- (void)interactivePopGestureDidTrigger:(id)a0;
- (BOOL)showSpecialHandleCommentListVC;
- (BOOL)isCurrentVCIsCommentListVC;
- (id)currentResultViewController;
- (void)awesearch_dismissViewController:(id)a0 withAnimationType:(long long)a1 completion:(id /* block */)a2;
- (void)awesearch_showViewController:(id)a0 viewControllerLayoutBlock:(id /* block */)a1 withAnimationType:(long long)a2 completion:(id /* block */)a3;
- (void)awesearch_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)awesearch_addViewController:(id)a0 viewControllerLayoutBlock:(id /* block */)a1 needTriggerLifeCycleMethod:(BOOL)a2;
- (void)awesearch_removeViewController:(id)a0 needTriggerLifeCycleMethod:(BOOL)a1;
- (id)awesearch_dismissTargetViewController;
- (id)addEdgePanGesture;
- (BOOL)isEdgePanPopGesture:(id)a0;
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
