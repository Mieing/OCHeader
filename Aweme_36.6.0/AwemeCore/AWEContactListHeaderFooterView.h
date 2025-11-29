@class UILabel;

@interface AWEContactListHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *topTitleLabel;

+ (double)suggestHeight;
+ (id)identifier;

- (void)removeTopTitleLabelIfNeed;
- (void)configTopTitleLabelWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
