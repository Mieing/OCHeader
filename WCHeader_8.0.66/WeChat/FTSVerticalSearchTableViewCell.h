@class AttributeLabel, UIImageView, UIView;

@interface FTSVerticalSearchTableViewCell : MMTableViewCell

@property (retain, nonatomic) AttributeLabel *tipsLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *indicatorView;

+ (double)getCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)updateTips:(id)a0 hightLightText:(id)a1;
- (void)addBottomSeperateLine;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
