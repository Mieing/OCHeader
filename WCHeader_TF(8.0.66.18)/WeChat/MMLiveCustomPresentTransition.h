@class NSString;

@interface MMLiveCustomPresentTransition : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)defaultAnimateTransitionPresentDownToTop:(id)a0;
- (void)animateTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getToViewFinalRect;
- (void)innerExtendForMaximizeToPartOfScreen:(id)a0 fromView:(id)a1 toView:(id)a2 maximizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)innerExtendForMaximizeToAllOfScreen:(id)a0 fromView:(id)a1 toView:(id)a2 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
