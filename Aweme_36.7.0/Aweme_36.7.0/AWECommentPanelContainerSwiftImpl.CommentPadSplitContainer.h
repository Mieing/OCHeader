@interface AWECommentPanelContainerSwiftImpl.CommentPadSplitContainer : AWECommentPanelContainerSwiftImpl.CommentBaseContainer <AWEPadUIAdaptionViewTransitionObserver> {
    void /* unknown type, empty encoding */ viewModel;
}

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)commonBringCommentVCToFrontWithTopView:(id)a0;
- (void)padCommentPanelHasClose;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;

@end
