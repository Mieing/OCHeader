@class UIImageView, AWEIMActiveUserIndicativeView;

@interface AWEIMOnlineFriendAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *virtualAvatarView;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *dotView;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double onlineInerWidth;
@property (nonatomic) double onelineOuterWidth;
@property (nonatomic) double avatarOffset;

- (void)addSubviews;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;
- (void)setupLayout;

@end
