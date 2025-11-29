@class UIControl, NSString, UIGestureRecognizer, UIViewController;

@interface IESLiveModalDialogAnimation : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) UIViewController *presentor;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationsShow:(BOOL)a0 animateTransition:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
