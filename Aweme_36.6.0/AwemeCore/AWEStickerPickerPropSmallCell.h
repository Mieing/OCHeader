@class UIView;

@interface AWEStickerPickerPropSmallCell : AWEStickerPickerStickerPropNameCell

@property (retain, nonatomic) UIView *iconContainerView;

+ (double)indicatorWidth;
+ (double)iconBornerRadius;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (void)tapAnimation;
- (void)modifyConstraints;
- (void)setupPlaceholderView;
- (void)setupCornerRadiusForView:(id)a0 cornerRadius:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateViews;
- (void)updateCornerRadius;

@end
