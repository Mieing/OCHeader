@interface SwiftyMidas.DefaultWebViewController : UIViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ registeredActions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ containerViewYAnchorConstraints;
    void /* unknown type, empty encoding */ containerViewYAnchorConstraintsFromH5;
    void /* unknown type, empty encoding */ showWebViewCompletion;
}

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)presentErrorAlert;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)keyboardWillShowWithNotification:(id)a0;
- (void)keyboardWillHideWithNotification:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
