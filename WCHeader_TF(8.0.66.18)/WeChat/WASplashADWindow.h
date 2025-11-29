@class NSString, WAAppTansitionController, WASplashADViewController, UIViewController;

@interface WASplashADWindow : MMUIWindow <CAAnimationDelegate, WAAppTansitionControllerDelegate>

@property (retain, nonatomic) UIViewController *firstScreenViewController;
@property (retain, nonatomic) WAAppTansitionController *transitionController;
@property (retain, nonatomic) WASplashADViewController *adRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showRootViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)closeRootViewControllerAnimated:(BOOL)a0 circleCenter:(struct CGPoint { double x0; double x1; })a1 finalHeihgt:(double)a2 completion:(id /* block */)a3;
- (void)doCircleRevealAnimationWith:(double)a0 view:(id)a1 cirleCenter:(struct CGPoint { double x0; double x1; })a2 finalHeihgt:(double)a3 completion:(id /* block */)a4;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)presentationControllerNeedZoom;
- (BOOL)presentationControllerNeedMask;
- (BOOL)dismissControllerNeedZoom;
- (BOOL)dismissControllerNeedMask;
- (void).cxx_destruct;

@end
