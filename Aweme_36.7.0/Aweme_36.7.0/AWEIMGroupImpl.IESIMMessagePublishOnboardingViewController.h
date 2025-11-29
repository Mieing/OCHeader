@interface AWEIMGroupImpl.IESIMMessagePublishOnboardingViewController : UIViewController <AWEIMInAppPushProtocol, IESIMLoadingToastDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ refreshLoadingView;
    void /* unknown type, empty encoding */ isNeedRefreshData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
}

- (BOOL)canShowInnerPush;
- (void)loadingToastDidClosed:(id)a0;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
