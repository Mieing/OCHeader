@class RTVCenterPopPresentView, UIControl;

@interface RTVCenterPopPresentationController : UIPresentationController

@property (retain, nonatomic) RTVCenterPopPresentView *customPresentView;
@property (retain, nonatomic) UIControl *backgrounCloseMaskView;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)onBackgrounCloseMaskViewClicked:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (id)presentedView;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)containerViewDidLayoutSubviews;

@end
