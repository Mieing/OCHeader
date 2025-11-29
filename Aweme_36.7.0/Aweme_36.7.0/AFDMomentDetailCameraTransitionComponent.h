@class UIViewPropertyAnimator, NSString, UIPanGestureRecognizer;
@protocol AFDMomentDetailFeedInterface, UIViewControllerContextTransitioning, AFDMomentDetailCameraInterface;

@interface AFDMomentDetailCameraTransitionComponent : AFDMomentDetailBaseComponent <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIGestureRecognizerDelegate, AFDMomentDetailCameraTransitionInterface>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<AFDMomentDetailCameraInterface> cameraComponent;
@property (weak, nonatomic) id<AFDMomentDetailFeedInterface> feedComponent;
@property (retain, nonatomic) UIViewPropertyAnimator *viewAnimator;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL isTransitionToFeed;
@property (nonatomic) double originProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (id)interactiveAnimator;
- (void)pushToFeedAnimated:(BOOL)a0;
- (void)popToCameraAnimated:(BOOL)a0;
- (void)popToCameraAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadComponent;
- (void)componentDidLoad;
- (void)componentDidDisappear:(BOOL)a0;
- (BOOL)canPushFeedInteractive:(BOOL)a0;
- (BOOL)canPopToCameraInteractive:(BOOL)a0;
- (BOOL)canTransitionWithIsSwipeUp:(BOOL)a0 IsInteractive:(BOOL)a1;
- (double)transitionDuration:(id)a0;
- (void)handlePan:(id)a0;
- (void)animateTransition:(id)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (id)animator;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)animatorForTransition:(id)a0;

@end
