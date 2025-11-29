@class UIImageView, UILabel, UIView;

@interface AFDCloseFriendsSettingsPanelEmptyCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;

+ (id)reuseIdentifier;

- (void)renderModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setupUI;
- (void)layoutUI;

@end
