@class MinimizationTransitionContext, UIViewController, NSString;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationNewMinTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) MinimizationTransitionContext *transitionContext;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;
@property (weak, nonatomic) id<MinimizationNewTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
