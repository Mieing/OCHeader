@interface IESIMTickleImpl.TickleUserSettingsSwitchViewController : UIViewController <AWEIMInAppPushProtocol, IESIMCustomModalTransitionVCProtocol> {
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ iconContainerView;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ forbiddenView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ actionContainerView;
    void /* unknown type, empty encoding */ actionTitleLabel;
    void /* unknown type, empty encoding */ switchView;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)canShowInnerPush;
- (BOOL)enablePullDismissGestureForPresentation;
- (id)pullIndicatorRegionBackgroundColor;
- (double)customCornerRadius;
- (void)switchValueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
