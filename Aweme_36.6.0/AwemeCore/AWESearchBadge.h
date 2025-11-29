@class UILabel, NSString, AWESearchBadgeViewConfig;

@interface AWESearchBadge : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWESearchBadgeViewConfig *config;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long badgeNumber;
@property (copy, nonatomic) NSString *badgeText;

- (id)initWithBadgeStyle:(unsigned long long)a0;
- (id)initWithBadgeStyle:(unsigned long long)a0 withConfig:(id)a1;
- (void)setBadgeNumber:(unsigned long long)a0 withMaxBadgeNumber:(unsigned long long)a1;
- (void)resetUI_DotStyle;
- (void)resetUI_LabelStyle;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_content;
- (struct CGSize { double x0; double x1; })_badgeSize;
- (void)resetUI;

@end
