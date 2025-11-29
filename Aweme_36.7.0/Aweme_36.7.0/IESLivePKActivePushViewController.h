@class UIView, HTSLivePkActivePush, IESLivePKVolumeUpViewController, IESLiveCountTimer, IESLivePKConnectingInfoView, UIImageView, UIButton, UILabel, IESLiveAvatarContainerView;

@interface IESLivePKActivePushViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) IESLiveAvatarContainerView *avatarView;
@property (retain, nonatomic) UILabel *privacyHintLabel;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLivePKConnectingInfoView *connectionView;
@property (retain, nonatomic) UILabel *disturbLabel;
@property (retain, nonatomic) UIImageView *disturbHintImage;
@property (retain, nonatomic) IESLivePKVolumeUpViewController *volumeUpVC;
@property (nonatomic) BOOL shouldViewDismiss;
@property (nonatomic) BOOL isTimeUp;
@property (retain, nonatomic) HTSLivePkActivePush *activePushData;

- (void)__startCountDown;
- (void)onSetupNavBar:(id)a0;
- (void)__cancelInteract;
- (void)__didTapSettingButton;
- (void)__acceptInteract;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setUpViews;

@end
