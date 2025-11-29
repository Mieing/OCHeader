@class NSString;

@interface AWEChallengePageSheetTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) long long transitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitionType:(long long)a0;
- (void)animatePresentationTransition:(id)a0;
- (void)animateDismissalTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
