@class UIImageView, AWEUserModel;

@interface AWETeenUserAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (nonatomic) long long userAvatarSizeType;
@property (nonatomic) long long avatarThemeType;
@property (retain, nonatomic) AWEUserModel *user;

- (id)initWithAvatarThemeType:(long long)a0;
- (id)initWithSizeType:(long long)a0;
- (id)initWithSizeType:(long long)a0 avatarThemeType:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
