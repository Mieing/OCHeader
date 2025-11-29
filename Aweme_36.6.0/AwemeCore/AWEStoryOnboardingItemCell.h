@class UIImageView, UILabel;

@interface AWEStoryOnboardingItemCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)configureWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
