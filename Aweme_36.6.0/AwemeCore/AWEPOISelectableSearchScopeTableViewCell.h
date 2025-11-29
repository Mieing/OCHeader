@class UILabel, UIImageView;

@interface AWEPOISelectableSearchScopeTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedIconImageView;

+ (id)identifier;

- (void)configWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelectionState:(BOOL)a0;
- (void)setupUI;

@end
