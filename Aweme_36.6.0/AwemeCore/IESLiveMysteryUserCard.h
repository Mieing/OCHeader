@class HTSLiveAvatarImageView, UILabel, UIImageView, UIButton, UIView, IESLiveUserCardStore, MASConstraint;

@interface IESLiveMysteryUserCard : UIView

@property (nonatomic) BOOL landscapeMode;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) MASConstraint *bottomConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backGroundImageView;
@property (retain, nonatomic) HTSLiveAvatarImageView *headImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *adminManagerButton;
@property (retain, nonatomic) UIButton *reportButton;

- (void)didSetAttachingDIContext;
- (id)initWithStore:(id)a0 landscapeMode:(BOOL)a1;
- (void)reportMsyteryCardShow;
- (void)lookMoreDescptionInfo;
- (void)loadPreviewFloatButtons;
- (void)clickDebugButton;
- (BOOL)containTraverseComponents:(long long)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)report;
- (void)layoutSubviews;
- (void)setupAvatarView;
- (void)manage;

@end
