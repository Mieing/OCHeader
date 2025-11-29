@protocol UIViewControllerTransitioningDelegate;

@interface FlowKit.UGCVoiceActionSheet : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ didFinishVoiceInput;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ skipTrackShowOnce;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorizeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorizeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceInputView;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ calcHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionInstance;
    void /* unknown type, empty encoding */ voiceInputViewModel;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (void)authorizeAction;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)closeButtonAction;

@end
