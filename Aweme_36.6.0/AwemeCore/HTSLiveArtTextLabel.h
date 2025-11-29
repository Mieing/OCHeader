@class UIColor, NSArray;

@interface HTSLiveArtTextLabel : UILabel

@property (nonatomic) double letterSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double shadowBlur;
@property (nonatomic) double innerShadowBlur;
@property (nonatomic) struct CGSize { double width; double height; } innerShadowOffset;
@property (retain, nonatomic) UIColor *innerShadowColor;
@property (nonatomic) double strokeSize;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) long long strokePosition;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) struct CGPoint { double x; double y; } gradientStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } gradientEndPoint;
@property (nonatomic) unsigned long long fadeTruncatingMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (nonatomic) BOOL automaticallyAdjustTextInsets;

- (struct __CTFrame { } *)frameRefFromSize:(struct CGSize { double x0; double x1; })a0 textRectOutput:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)hasFadeTruncating;
- (double)strokeSizeDependentOnStrokePosition;
- (struct CGImage { } *)inverseMaskFromAlphaMask:(struct CGImage { } *)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGImage { } *)strokeImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameRef:(struct __CTFrame { } *)a1 strokeSize:(double)a2 strokeColor:(id)a3;
- (struct CGImage { } *)linearGradientImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fadeHead:(BOOL)a1 fadeTail:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fittingTextInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectFromSize:(struct CGSize { double x0; double x1; })a0 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectFromContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 framesetterRef:(struct __CTFramesetter { } *)a1;
- (void).cxx_destruct;
- (BOOL)hasShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDefaults;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasStroke;
- (BOOL)hasInnerShadow;
- (BOOL)hasGradient;

@end
