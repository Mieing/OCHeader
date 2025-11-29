@class NSString;

@interface RoomContactSelectViewPresentationAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (nonatomic) BOOL m_isPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animationForPushView:(id)a0;
- (void)executeAnimationForPushView:(id)a0 fromVC:(id)a1 searcherBar:(id)a2 searchBarBoxStackView:(id)a3 tableView:(id)a4 origiSearchBarBoxStackViewWidth:(double)a5 tableViewTop:(double)a6;
- (void)executeAnimationForPushViewFinish:(id)a0 fromVC:(id)a1;
- (void)animationForPopView:(id)a0;
- (void)executeAnimationForPopView:(id)a0 toVC:(id)a1 fromVC:(id)a2 backgroundView:(id)a3 searcherBar:(id)a4 searchBarBoxStackView:(id)a5 tableView:(id)a6 origiSearchBarBoxStackViewWidth:(double)a7 tableViewTop:(double)a8 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9;
- (void)executeAnimationForPopViewFinish:(id)a0 fromVC:(id)a1 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
