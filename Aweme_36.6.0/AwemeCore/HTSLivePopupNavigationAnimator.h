@class NSString;

@interface HTSLivePopupNavigationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL pushing;
@property (nonatomic) double transitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPushing:(BOOL)a0 transitionDuration:(double)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
