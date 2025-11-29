@class NSString;
@protocol MMLiveMinimizationAnimateDelegate;

@interface MMLiveMinimizationAnimation : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<MMLiveMinimizationAnimateDelegate> minimizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
