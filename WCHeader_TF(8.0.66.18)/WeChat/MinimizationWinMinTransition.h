@class NSString;
@protocol MinimizeTransitionInterface;

@interface MinimizationWinMinTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (copy, nonatomic) NSString *taskBizName;
@property (copy, nonatomic) NSString *taskBizKey;
@property (weak, nonatomic) id<MinimizeTransitionInterface> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performWinMinAnimationWithTaskName:(id)a0 taskKey:(id)a1 containerView:(id)a2 fromView:(id)a3 transitionDelegate:(id)a4 completion:(id /* block */)a5;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
