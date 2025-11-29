@interface SpecialQRCodeViewControllerSwift : UIViewController <AWERouterViewControllerProtocol, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ isPresented;
    void /* unknown type, empty encoding */ enableDragToClose;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_qrCodeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scanButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newSwitchStyleButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newAIGCGuideButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_saveButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_qrcodeConfig;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ lastQRCodeModel;
    void /* unknown type, empty encoding */ buttonDidAnimated;
    void /* unknown type, empty encoding */ showButtonDidTracked;
    void /* unknown type, empty encoding */ lastTranslation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideFrequeneRule;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)finishSaveImage:(id)a0 error:(id)a1 context:(id)a2;
- (void)didTakeScreenshotWithNotice:(id)a0;
- (void)downloadQRCode;
- (void)addDragGestureToClose;
- (void)handleDragGesture:(id)a0;
- (void)jumpSwitchStyle;
- (void)shareProfile;
- (void)switchStyleTemplate;
- (id)awesst_enterFrom;
- (void)pop;
- (void)scan;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setShareContext:(id)a0;
- (void)setCodeType:(unsigned long long)a0 enableShare:(BOOL)a1 trackDict:(id)a2;
- (id)setGradualChangColorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startColorString:(id)a1 endColorString:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
