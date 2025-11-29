@class NSArray, UIImageView;

@interface AWETripHeaderCheckInAvatars : UIView

@property (retain, nonatomic) NSArray *avatarList;
@property (retain, nonatomic) UIImageView *leftAvatar;
@property (retain, nonatomic) UIImageView *midAvatar;
@property (retain, nonatomic) UIImageView *rightAvatar;

- (id)avatarMaker;
- (void)configWithAvatarList:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
