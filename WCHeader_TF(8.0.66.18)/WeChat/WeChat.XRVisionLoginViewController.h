@interface WeChat.XRVisionLoginViewController : MMUIViewController <MultiDeviceLoginLogicDelegate, ExtraDeviceLoginMgrExt> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ deviceLoginLogic;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)onConfirmLoginSucceeded;
- (void)onConfirmLoginFailed;
- (void)onCancelLogin;
- (id)viewController;
- (void)onGetExtDeviceLoginInfo:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
