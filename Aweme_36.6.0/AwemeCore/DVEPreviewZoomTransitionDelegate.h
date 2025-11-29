@class UIViewController, NSString, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;
@protocol DVEPreviewTransitionContextProvider, UIViewControllerContextTransitioning;

@interface DVEPreviewZoomTransitionDelegate : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, DVEPreviewTransitionDelegateProtocol>

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *percentDrivenTransition;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) unsigned long long triggerDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *outterViewController;
@property (weak, nonatomic) UIViewController *innerViewController;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> currentTransitioningContext;
@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;

- (unsigned long long)p_directionForPan:(id)a0;
- (double)p_progressForDirection:(unsigned long long)a0 startLocation:(struct CGPoint { double x0; double x1; })a1 currentLocation:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })p_vectorForDirection:(unsigned long long)a0;
- (BOOL)p_zoomTransitionAllowedTrigger:(id)a0;
- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
