@class UIView;

@interface AWEStickerPickerPropAICell : AWEStickerPickerPropSmallCell

@property (retain, nonatomic) UIView *bgView;

+ (double)labelHeight;
+ (double)indicatorWidth;
+ (double)iconBornerRadius;
+ (double)spacingBetweenIconAndLabel;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (void)tapAnimation;
- (double)propNameFontSize;
- (void)modifyConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
