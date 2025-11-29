@class NSString;
@protocol MinimizeTransitionInterface;

@interface MinimizationMinTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (copy, nonatomic) NSString *taskBizName;
@property (copy, nonatomic) NSString *taskBizKey;
@property (weak, nonatomic) id<MinimizeTransitionInterface> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
