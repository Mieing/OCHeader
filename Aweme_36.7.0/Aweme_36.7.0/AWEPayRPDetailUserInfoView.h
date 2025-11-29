@class NSString, AWEIMDouyinRedPacketUserInfo, UIImageView, LOTAnimationView, UILabel, AWEIMDouyinRedPacketModel, UIButton;

@interface AWEPayRPDetailUserInfoView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) UILabel *fromNameLabel;
@property (retain, nonatomic) UILabel *fromNameSendLabel;
@property (retain, nonatomic) UIImageView *pinImageView;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *userInfo;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (nonatomic) BOOL sendFromMe;
@property (copy, nonatomic) id /* block */ avatarTapBlock;
@property (copy, nonatomic) id /* block */ followUserBlock;
@property (copy, nonatomic) NSString *conversationID;

- (void)playFollowAnimationWithCompletion:(id /* block */)a0;
- (void)updateWithUserInfo:(id)a0 info:(id)a1;
- (void)stopFollowAnimation;
- (void)setFollowBtnHidden:(BOOL)a0;
- (void)p_ownerAvatarTapped:(id)a0;
- (void)p_setupFromNameLabelForOtherUsers;
- (void)p_setupFromNameLabel;
- (void)p_setupFromName;
- (id)p_defaultTitleSuffix;
- (void)p_followUser:(id)a0;
- (void)updateAvatarShadow;
- (void)addCornerRadiusToAvatar;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
