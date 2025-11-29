@class UILabel, UIImageView, UIView;

@interface AWESearchAIGCHotspotCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *bottomSepView;

+ (id)identifier;

- (void)reloadUIWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
