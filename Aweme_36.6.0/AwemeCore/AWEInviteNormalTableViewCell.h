@class UIImageView, UILabel, MASConstraint;

@interface AWEInviteNormalTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) MASConstraint *centerConstraint;

+ (id)identifier;
+ (double)suggestedHeight;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupUI;

@end
