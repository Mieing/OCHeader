@interface DUXAbandonedButton : DUXBasicButton

@property (nonatomic) unsigned long long sizeStyle;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long disableStyle;
@property (nonatomic) BOOL adaptBigFont;

+ (id)buttonWithStyle:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;

- (id)initWithStyle:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;
- (id)p_borderColor;
- (id)p_titleFont;
- (id)p_contentTintColor;
- (id)p_contentBackgroundColor;
- (double)p_iconStyleWidth;
- (double)p_horizentalContentEdgeInset;
- (double)p_contentCornerRadius;
- (struct CGSize { double x0; double x1; })p_autoIntrinsicContentSize;
- (double)p_containerHeight;
- (struct CGSize { double x0; double x1; })p_autoIconStyleSize;
- (double)p_horizentalPadding;
- (struct CGSize { double x0; double x1; })p_suggestPureIconSize;
- (struct CGSize { double x0; double x1; })p_suggestMixIconSize;
- (id)p_dynamicColorWithLightModeColor:(id)a0 darkModeColor:(id)a1;
- (double)p_loadingEdgeLength;
- (id)p_interactionMaskColor;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
