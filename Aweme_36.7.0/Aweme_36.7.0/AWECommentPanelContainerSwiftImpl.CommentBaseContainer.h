@interface AWECommentPanelContainerSwiftImpl.CommentBaseContainer : AWEBaseController <AWEShellViewControllerProtocol> {
    void /* unknown type, empty encoding */ enableCommentListPreLoad;
    void /* unknown type, empty encoding */ isContainerDidLoaded;
    void /* unknown type, empty encoding */ $__lazy_storage_$_watermarkView;
}

- (void)onAWEUIThemeChange;
- (void)dismissNotificationWithNotice:(id)a0;
- (void)tabBarDidChangeNotificationWithNotice:(id)a0;
- (void)landingChangeNotificationWithNotice:(id)a0;
- (void)showPopoverIfNeeded;
- (void)commonBringCommentVCToFrontWithTopView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })commonPanelShowAnimationStartFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonPanelDismissResetTabbar;
- (void)commonPanelDismissAnimationTask;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
