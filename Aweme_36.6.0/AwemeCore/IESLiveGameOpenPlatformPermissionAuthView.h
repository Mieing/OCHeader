@class IESLiveGameOpenPlatformPermissionBgView, UIView, UIImageView, UIButton, IESLiveGameOpenPlatformTipBgView, IESLiveGameOpenPlatformPermissionScope, UILabel, UIScrollView;

@interface IESLiveGameOpenPlatformPermissionAuthView : UIView

@property (retain, nonatomic) IESLiveGameOpenPlatformPermissionScope *scope;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveGameOpenPlatformPermissionBgView *bgView;
@property (retain, nonatomic) UIView *appInfoView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *appIconView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (retain, nonatomic) UIButton *tipsIconButton;
@property (retain, nonatomic) UIView *authInfoView;
@property (retain, nonatomic) UILabel *authTitleLabel;
@property (retain, nonatomic) UILabel *authDescLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *avaterIcon;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *userDescLabel;
@property (retain, nonatomic) UIView *actionView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *privacyView;
@property (retain, nonatomic) UIButton *privacyButton;
@property (retain, nonatomic) UILabel *privcayLabel;
@property (retain, nonatomic) IESLiveGameOpenPlatformTipBgView *authContainerView;
@property (retain, nonatomic) UIView *authTipsView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *tipScrollView;
@property (retain, nonatomic) UILabel *authTipContentLabel;
@property (nonatomic) BOOL showTipNow;
@property (copy, nonatomic) id /* block */ resultBlock;

- (void)cancelButtonDidClick;
- (void)confirmButtonDidClick;
- (void)backButtonDidClick;
- (void)tipButtonDidClick;
- (void)showTipView:(BOOL)a0;
- (void)executeBlockWithGrant:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithScope:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setData;
- (void)layoutUI;

@end
