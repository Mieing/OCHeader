@interface AWECommentPanelContainerSwiftImpl.CommentPadPortraitContainer : AWECommentPanelContainerSwiftImpl.CommentBaseContainer <AWEPadUIAdaptionViewTransitionObserver, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ previousViewSize;
}

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })commonPanelShowAnimationStartFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonPanelDismissResetTabbar;
- (void)commonPanelDismissAnimationTask;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;

@end
