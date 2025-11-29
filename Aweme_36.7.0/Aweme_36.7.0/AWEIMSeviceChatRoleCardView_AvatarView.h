@class AWEIMUser, UIImageView, CAShapeLayer, UIView;

@interface AWEIMSeviceChatRoleCardView_AvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) UIImageView *followImageView;
@property (retain, nonatomic) UIImageView *followSuccessImageView;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ followActionBlock;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) CAShapeLayer *avatarContentLayer;
@property (retain, nonatomic) CAShapeLayer *avatarLayer;

- (double)avatarViewWidth;
- (void)tapUserAvatar;
- (double)avatarViewTop;
- (double)borderLayerWidth;
- (void)tapFollowButton;
- (void)updateCircleViewColor;
- (id)createAvatarCircleLayer;
- (void)updateAvatarBackgroundCircleView;
- (void).cxx_destruct;
- (id)init;
- (void)setUserModel:(id)a0;

@end
