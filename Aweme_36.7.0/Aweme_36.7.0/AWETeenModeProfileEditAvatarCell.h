@class UIImageView, AWETeenModeProfileEditModel, UIView, UIButton;

@interface AWETeenModeProfileEditAvatarCell : UITableViewCell

@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UIView *viewMask;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) UIButton *avatarSwitchButton;
@property (retain, nonatomic) AWETeenModeProfileEditModel *model;
@property (copy, nonatomic) id /* block */ tapEditAvatarBlock;

+ (id)identifier;

- (void)configCameraImageUseDarkThemeImage:(BOOL)a0;
- (void)selectAvatar:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSubviews;

@end
