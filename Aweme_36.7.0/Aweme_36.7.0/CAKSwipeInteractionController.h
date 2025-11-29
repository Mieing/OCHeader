@class NSString, UIViewController, UIView;
@protocol CAKSwipeInteractionControllerDelegate, UIViewControllerContextTransitioning;

@interface CAKSwipeInteractionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *toViewSnapshot;
@property (retain, nonatomic) UIView *blackMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromVCFrame;
@property (nonatomic) BOOL interactionInProgress;
@property (nonatomic) BOOL shouldCompleteTransition;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL forbidTransitionGes;
@property (nonatomic) BOOL forbidSimultaneousScrollViewPanGesture;
@property (weak, nonatomic) id<CAKSwipeInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)viewControllerBasedStatusBarAppearanceEnabled;

- (void)wireToViewController:(id)a0;
- (void)lockCurrentStatusBar;
- (void)unlockCurrentStatusBar;
- (void)prepareGestureRecognizerInView:(id)a0;
- (double)_originYForViewController;
- (void)finishInteractiveTransition;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)updateInteractiveTransition:(double)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
