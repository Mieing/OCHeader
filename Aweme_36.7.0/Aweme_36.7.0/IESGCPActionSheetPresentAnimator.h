@class UIControl, NSString, UIView, UIGestureRecognizer, UIViewController;

@interface IESGCPActionSheetPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) UIViewController *presentor;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL landscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationsShow:(BOOL)a0 animateTransition:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_onBackgroundTouched:(id)a0;
- (id)initWithViewController:(id)a0 backgroundView:(id)a1 landscape:(BOOL)a2;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
