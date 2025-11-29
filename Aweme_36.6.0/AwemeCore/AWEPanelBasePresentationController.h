@class UIView;

@interface AWEPanelBasePresentationController : UIPresentationController

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (retain, nonatomic) UIView *transitionBackgroundView;

+ (void)setupBackConfirmTextProvider:(id /* block */)a0;
+ (void)_aweLazyRegisterLoad_Localization;

- (void)transitionBackgroundViewTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;

@end
