@class UITapGestureRecognizer, UIView;

@interface CECMomentCameraUserSettingsPresentationController : UIPresentationController

@property (nonatomic) long long itemCount;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

- (void)updateWithItemCount:(long long)a0;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)containerViewDidLayoutSubviews;
- (void)dismissViewController;

@end
