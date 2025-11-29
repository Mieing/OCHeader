@class UIImageView, UILabel, UIView, DUXRadioBox;

@interface AWEOpenPlatformAuthUserCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *nameTipsLabel;
@property (retain, nonatomic) DUXRadioBox *checkImageView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isHalf:(BOOL)a2;
- (void)updateUserInfoWithStyle:(long long)a0;
- (void)updateCheckMarkVisible:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
