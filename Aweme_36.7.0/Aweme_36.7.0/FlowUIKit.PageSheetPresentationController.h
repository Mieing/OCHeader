@interface FlowUIKit.PageSheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ gesDelegate;
    void /* unknown type, empty encoding */ maskView;
    void /* unknown type, empty encoding */ bgView;
    void /* unknown type, empty encoding */ pan;
    void /* unknown type, empty encoding */ tap;
    void /* unknown type, empty encoding */ panBeginY;
    void /* unknown type, empty encoding */ lastOffsetY;
}

- (void)handleTapWithTap:(id)a0;
- (void)handlePanWithPan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;

@end
