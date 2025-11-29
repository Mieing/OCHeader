@interface RTVAutoPageSheetPresentationController : RTVPageSheetPresentationController

- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (BOOL)enablePullIndicatorView;
- (long long)enablePullDirectionMask;
- (id)defaultContainerBackgroundColor;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;

@end
