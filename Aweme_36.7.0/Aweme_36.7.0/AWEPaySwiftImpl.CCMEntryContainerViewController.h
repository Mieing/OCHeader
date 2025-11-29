@interface AWEPaySwiftImpl.CCMEntryContainerViewController : UIViewController <AWEYAPRestoreObjectProtocol, AWEYAPTransportHandlerProtocol, AWEYAPTransportViewControllerProtocol, AWEPaySwiftImpl.CCMCertMessageProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ initScene;
}

+ (id)createContainer:(id)a0 context:(id)a1 delegate:(id)a2;

- (id)getRestoreInfo;
- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)needHighLightScreenBrightness;
- (BOOL)hasActivateRetainGuide;
- (void)showActivateRetainGuide;
- (void)didFinishLogin;
- (void)updateContainer:(id)a0;
- (void)didUpdateDeviceCert;
- (void)didScreenshot;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
