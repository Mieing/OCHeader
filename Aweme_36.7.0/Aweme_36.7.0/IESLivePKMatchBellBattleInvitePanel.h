@class NSString, UIImageView, IESLiveCountTimer, UILabel, UIView, UIButton;
@protocol IESLivePKAnchorBuilderAction;

@interface IESLivePKMatchBellBattleInvitePanel : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) UILabel *matchBellDescrtipionLabel;
@property (retain, nonatomic) UIImageView *backGroundImageView;
@property (retain, nonatomic) UIImageView *ownerAvatarImageView;
@property (retain, nonatomic) UIView *oppositeAvatarContainerView;
@property (retain, nonatomic) UIImageView *oppositeAvatarImageView;
@property (retain, nonatomic) UIImageView *pkIconView;
@property (retain, nonatomic) UILabel *ownerNameLabel;
@property (retain, nonatomic) UILabel *oppositeNameLabel;
@property (retain, nonatomic) UILabel *ownerDescriptionLabel;
@property (retain, nonatomic) UILabel *oppositeDescriptionLabel;
@property (retain, nonatomic) UILabel *oppositeAnchorStatusLabel;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) BOOL isClickedButton;
@property (retain, nonatomic) IESLiveCountTimer *countDownTimer;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;

- (void)bindAction;
- (void)trackPanelShow;
- (void)startCountDownTimer;
- (void)onSetupNavBar:(id)a0;
- (void)stopCountDownTimer;
- (void)trackPanelClick:(id)a0;
- (void)onDisturbSettingButtonClicked;
- (void)onRejectButtonClicked;
- (void)onAcceptButtonClicked;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupViews;

@end
