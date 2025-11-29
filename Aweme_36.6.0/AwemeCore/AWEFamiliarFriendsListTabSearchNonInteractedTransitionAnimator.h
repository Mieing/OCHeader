@class NSString;

@interface AWEFamiliarFriendsListTabSearchNonInteractedTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isFromInnerSearch;
@property (copy, nonatomic) id /* block */ finishNonInteractedTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
