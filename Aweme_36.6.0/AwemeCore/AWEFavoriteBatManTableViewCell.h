@class UIImageView, UILabel;

@interface AWEFavoriteBatManTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introductionLabel;

+ (id)identifier;
+ (double)cellHeight;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)configureWithModel:(id)a0;

@end
