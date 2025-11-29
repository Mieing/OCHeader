@class UIImageView, UILabel;

@interface AWECompanyChanllengeSecondCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;

+ (id)identifier;

- (void)configWithChallenge:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)_setupUI;

@end
