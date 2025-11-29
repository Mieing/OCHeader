@interface AWEIMGroupImpl.GroupCommandTipViewController : UIViewController <IESIMCustomModalTransitionVCProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ userCellView;
    void /* unknown type, empty encoding */ topBackGroundView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ closeButton;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (double)customCornerRadius;
- (void)confirmButtonClickedWithSender:(id)a0;
- (void)onCloseAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
