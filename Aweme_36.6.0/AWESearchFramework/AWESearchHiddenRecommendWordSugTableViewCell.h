@class UILabel;

@interface AWESearchHiddenRecommendWordSugTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *searchRelatedMerchandiseLabel;

+ (double)cellHeight;

- (void)configWithText:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
