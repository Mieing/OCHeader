@interface AWEIMGroupImpl.GroupCommandViewController : UIViewController <IESIMCustomModalTransitionVCProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ saveButton;
    void /* unknown type, empty encoding */ retryView;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ closeButton;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (double)customCornerRadius;
- (void)confirmButtonClickedWithSender:(id)a0;
- (void)onRetryAction;
- (void)onSaveAction;
- (void)onCloseAction;
- (void)onUserDidTakeScreenshot;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
