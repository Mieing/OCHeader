@interface AWECommentInputViewSwiftImpl.EvaluationNativeHost : UIViewController <AWECommentEvaluationHostProtocol, AWETransitioningViewController, AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ naviBar;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ navTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainView;
}

- (id)service;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateTheme;

@end
