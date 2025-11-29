@interface DUXCapsuleButton : DUXBasicButton

@property (nonatomic) unsigned long long sizeStyle;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL adaptBigFont;

+ (id)buttonWithStyle:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;

- (id)initWithStyle:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;
- (id)p_titleFont;
- (id)p_contentTintColor;
- (id)p_contentBackgroundColor;
- (double)p_iconStyleWidth;
- (double)p_horizentalContentEdgeInset;
- (struct CGSize { double x0; double x1; })p_autoIntrinsicContentSize;
- (double)p_containerHeight;
- (struct CGSize { double x0; double x1; })p_autoIconStyleSize;
- (double)p_horizentalPadding;
- (double)p_loadingEdgeLength;
- (id)p_interactionMaskColor;
- (id)p_shadowColor;
- (struct CGSize { double x0; double x1; })p_shadowOffset;
- (double)p_shadowRadius;
- (double)p_shadowOpacity;
- (void)p_enableViewAlpha;
- (double)p_cornerRadius;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
