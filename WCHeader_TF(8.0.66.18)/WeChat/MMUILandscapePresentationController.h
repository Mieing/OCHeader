@class NSString;

@interface MMUILandscapePresentationController : UIPresentationController <UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLandscapeModalViewController;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionWillBegin;
- (long long)adaptivePresentationStyleForTraitCollection:(id)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)didTapBG:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
