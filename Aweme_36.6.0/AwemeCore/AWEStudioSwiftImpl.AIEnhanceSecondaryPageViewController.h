@interface AWEStudioSwiftImpl.AIEnhanceSecondaryPageViewController : UIViewController <AWEStudioAIEnhanceSecondaryPageProtocol> {
    void /* unknown type, empty encoding */ creationID;
    void /* unknown type, empty encoding */ publishModel;
    void /* unknown type, empty encoding */ nleInterface;
    void /* unknown type, empty encoding */ placeholderImagePath;
    void /* unknown type, empty encoding */ shouldShowLoading;
    void /* unknown type, empty encoding */ coreBasicParams;
    void /* function */ resetAction;
    void /* function */ showOriginalAction;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ initIntensity;
    void /* unknown type, empty encoding */ defaultPointIntensity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_saveButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wiperMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wiperImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wiperShapeLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wiperLineLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelView;
    void /* unknown type, empty encoding */ panelViewTopConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, copy) id /* block */ resetAction;
@property (nonatomic, copy) id /* block */ showOriginalAction;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)updateNLEInterface:(id)a0;
- (void)updateTagList:(id)a0;
- (void)updateLoadingProgress:(long long)a0;
- (void)handleEnhanceApplyFinish:(BOOL)a0 enableWiperAnimation:(BOOL)a1;
- (long long)intensity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)cancelAction:(id)a0;
- (void)saveAction:(id)a0;

@end
