@class UIImageView, UILabel;

@interface AWEUIFavoriteTableViewCell : UITableViewCell

@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;

+ (id)identifier;
+ (double)cellHeight;

- (double)coverImageHeight;
- (void)configWithTitleText:(id)a0 secondLineText:(id)a1 thirdLineText:(id)a2;
- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2;
- (void)configWithTitleText:(id)a0 secondLineText:(id)a1;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;

@end
