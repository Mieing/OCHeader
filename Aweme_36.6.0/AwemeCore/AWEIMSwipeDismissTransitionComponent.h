@class UIPanGestureRecognizer, NSString, AWEIMSwipeDismissAnimator, UIPercentDrivenInteractiveTransition, UIViewController;

@interface AWEIMSwipeDismissTransitionComponent : NSObject <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) AWEIMSwipeDismissAnimator *animator;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveAnimator;
@property (readonly, nonatomic) double pullDownThreshold;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isInTransition;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long preferredTriggerDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_handlePanGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)initWithContainer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)interactionControllerForDismissal:(id)a0;

@end
