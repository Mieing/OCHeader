@class MMUILabel, MMWebImageView;

@interface EnterpriseHomeContactCell : MMTableViewCell

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubViews;
- (void)updateHomeContactInfo:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
