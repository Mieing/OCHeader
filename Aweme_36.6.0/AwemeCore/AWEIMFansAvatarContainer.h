@class UIImageView, AFDColorRingView, UIView;

@interface AWEIMFansAvatarContainer : AWEIMFansBaseContainer

@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AFDColorRingView *colorRingView;

- (id)placeHolderAvatarImage;
- (void)tapOnAvatar:(id)a0;
- (void)hideDotView:(BOOL)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
