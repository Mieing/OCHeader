@class UILabel;

@interface SettingSearchResultCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *pathLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)configureWithNode:(id)a0 highlightedTitle:(id)a1;
- (void).cxx_destruct;

@end
