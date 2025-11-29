@class UIPanGestureRecognizer, NSString, UIPercentDrivenInteractiveTransition, UIViewController;

@interface WCFinderFullScreenAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) unsigned int transitioningType;
@property (retain, nonatomic) UIPanGestureRecognizer *gesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;
@property (copy, nonatomic) id /* block */ transitioningCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatorWithGesture:(id)a0 transitioningType:(unsigned int)a1;

- (void)handlePanGesture:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (double)__progressWithSender:(id)a0;
- (double)__velocityWithSender:(id)a0;
- (void).cxx_destruct;

@end
