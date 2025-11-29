@class CAGradientLayer, NSString, MultiTalkHDHeadView, UIImageView, UIView, UILabel, UIButton;

@interface MultiTalkScreenSharingAudienceBackgroundView : UIView

@property (retain, nonatomic) CAGradientLayer *topBarGradientLayer;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *orientationButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ userTapToChangeOperationViewsAppearanceCallback;
@property (nonatomic) BOOL isOperationViewsHidden;
@property (copy, nonatomic) NSString *sharingScreenUserName;
@property (copy, nonatomic) NSString *currentTalkingUserName;
@property (retain, nonatomic) MultiTalkHDHeadView *userAvatarView;
@property (retain, nonatomic) UIImageView *talkingIcon;
@property (nonatomic) BOOL canShowUserAvatarView;
@property (nonatomic) BOOL isLandscapeSupport;
@property (copy, nonatomic) id /* block */ orientationButtonCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldSupportTapGesture:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutTopBar;
- (void)layoutCloseButton;
- (void)layoutOrientationButton;
- (void)layoutTitleLabel;
- (void)layoutUserAvatarView;
- (void)updateUserAvatar;
- (void)checkAndAnimateToHideUserAvatarView;
- (void)onCloseButtonClick;
- (void)onOrientationButtonClick:(id)a0;
- (void)onTapView;
- (void)clearData;
- (void)updateSharingScreenUserName:(id)a0;
- (void)updateTalkingMembersWithUsersName:(id)a0;
- (void)rotationDetectorRoationDidChange:(id)a0;
- (void).cxx_destruct;

@end
