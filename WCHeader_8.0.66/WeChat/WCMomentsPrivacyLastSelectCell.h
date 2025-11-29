@class UILabel, UIView;

@interface WCMomentsPrivacyLastSelectCell : MMTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (id)cellIdentifier;
+ (double)heightForTitle:(id)a0 cellWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateWithTitle:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
