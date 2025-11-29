@class UILabel;

@interface WCFinderTopBannerCell : MMTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)cellHeightWithViewModel:(id)a0 contentViewWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;

@end
