@class WCPayFaceHBGetView, WCPayFaceHBPayView, UIView;
@protocol WCPayFaceHBViewControllerDelegate;

@interface WCPayFaceHBViewController : WCPayBaseViewController {
    id<WCPayFaceHBViewControllerDelegate> m_delegate;
    UIView *_contentView;
    WCPayFaceHBGetView *_getView;
    WCPayFaceHBPayView *_payView;
}

- (void)initNavigationBar;
- (void)onBack;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)userDidTakeScreenshot:(id)a0;
- (void)didChangeScreenCapture:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)hidePayView;
- (id)showPayViewWithDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
