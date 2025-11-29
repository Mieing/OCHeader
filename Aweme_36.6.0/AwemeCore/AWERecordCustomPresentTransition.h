@class NSString;

@interface AWERecordCustomPresentTransition : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (nonatomic) unsigned long long transitionType;
@property (nonatomic) BOOL dismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationForDismissViewWithTransitionContext:(id)a0;
- (void)animationForPresentedViewWithTransitionContext:(id)a0;
- (id)initWithTransitionType:(unsigned long long)a0 dismiss:(BOOL)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
