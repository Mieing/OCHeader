@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentPageViewController : UIViewController <AWERouterViewControllerProtocol, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ backgroundMaskView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ commentListContainerView;
    void /* unknown type, empty encoding */ commentInputContainerView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ commentListVC;
    void /* unknown type, empty encoding */ commentListBottomConstraint;
    void /* unknown type, empty encoding */ commentInputView;
    void /* unknown type, empty encoding */ isTopVideoPausedBySelf;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorEmptyPageConfig;
    void /* unknown type, empty encoding */ fullScreenHeight;
    void /* unknown type, empty encoding */ beginTranslationY;
}

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
