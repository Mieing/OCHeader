@interface IESLiveCustomButton : IESLiveButton

@property (nonatomic) unsigned long long buttonSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double minHeight;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL disableAdjustSpacing;
@property (nonatomic) double cornerRadius;

+ (id)buttonWithStyle:(unsigned long long)a0;

- (void)applyCornerRadius:(double)a0;
- (void)renderButtonSize:(unsigned long long)a0;
- (void)updateContentSpacingIfNeeded;
- (id)initWithStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)renderStyle;

@end
