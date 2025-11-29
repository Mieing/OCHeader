@class UIImageView, UILabel, UIView, UIButton;

@interface MMFinderLiveShopShelfMainTableHeaderItemMultiView : MMFinderLiveShopShelfMainTableHeaderItemView

@property (copy, nonatomic) id /* block */ onClicked;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIImageView *tailIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)addSubtitleLabel;
- (id)addSuffixLabel;
- (void)doOnClicked;
- (struct CGSize { double x0; double x1; })tailIconSize;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformMagicTap;
- (void).cxx_destruct;

@end
