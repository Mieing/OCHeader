@interface AWEIMGroupImpl.GroupCommandLinkCreateGroupViewController : UIViewController <IESIMCustomModalTransitionVCProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ isCreateGroup;
    void /* unknown type, empty encoding */ mainTitleLabel;
    void /* unknown type, empty encoding */ linkBackGroundView;
    void /* unknown type, empty encoding */ linkLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ retryView;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ loadingView;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (double)customCornerRadius;
- (void)onRetryAction;
- (void)onCloseAction;
- (void)confirmButtonClickedWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
