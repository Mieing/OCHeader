@class NSString, UIViewController;
@protocol LVLandscapeTransitionDelegate;

@interface LVLandscapePushTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (weak, nonatomic) id<LVLandscapeTransitionDelegate> delegate;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (id)playerDetailVC:(id)a0;
- (void)animateTransition:(id)a0;
- (void)_rotateAnimateTransition:(id)a0;
- (void)_pushAnimateTransition:(id)a0;
- (void).cxx_destruct;

@end
