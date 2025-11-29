@class UIColor, UIFont, NSString, NSArray;

@interface PaintSettingCommand : LolaDrawCommand

@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) long long textAlign;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long baseLine;
@property (nonatomic) double lineWidth;
@property (nonatomic) int blendMode;
@property (nonatomic) double shadowX;
@property (nonatomic) double shadowY;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double miterLimit;
@property (nonatomic) double globalAlpha;
@property (nonatomic) BOOL antiAlias;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) struct CGPoint { double x; double y; } start;
@property (nonatomic) struct CGPoint { double x; double y; } end;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (void)configLineCap:(id)a0;
- (void)configLineJoin:(id)a0;
- (void)configTextAlign:(id)a0;
- (void)configFontStyle:(id)a0;
- (void)configLinearGradient:(id)a0;
- (void)configBlendMode:(id)a0;
- (void)setShadow:(struct CGContext { } *)a0 drawContext:(id)a1;
- (void)drawGradient:(struct CGContext { } *)a0 drawContext:(id)a1 linear:(BOOL)a2;
- (void)configBaseLine:(id)a0;
- (void)configRadialGradient:(id)a0;
- (void).cxx_destruct;
- (id)typeStr;
- (void)recycle;

@end
