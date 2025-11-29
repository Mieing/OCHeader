@class UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface AWEHorizontalDismissTransition : UIPercentDrivenInteractiveTransition

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL interactionInProgress;
@property (nonatomic) BOOL shouldCompleteTransition;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toFrame;

- (void)wireToViewController:(id)a0;
- (void)prepareGestureRecognizerInView:(id)a0;
- (void)finishInteractiveTransition;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (id)init;
- (void)startInteractiveTransition:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
