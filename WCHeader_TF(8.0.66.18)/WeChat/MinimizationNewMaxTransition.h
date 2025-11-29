@class MinimizationTransitionContext, NSString;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationNewMaxTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) MinimizationTransitionContext *transitionContext;
@property (weak, nonatomic) id<MinimizationNewTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
