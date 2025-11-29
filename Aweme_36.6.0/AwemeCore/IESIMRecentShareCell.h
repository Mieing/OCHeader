@class YYLabel, UIStackView, IESIMShareAvatarView, UILabel, UIView, DUXCheckBox;

@interface IESIMRecentShareCell : UICollectionViewCell

@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) DUXCheckBox *selectIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *subTitleStackView;
@property (retain, nonatomic) UIView *avatarBottomIconContainerView;
@property (retain, nonatomic) IESIMShareAvatarView *avatarView;

+ (id)cellIdentifier;

- (BOOL)hitStreakUpdateExp;
- (void)p_setupConstraint;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI:(id)a0;

@end
