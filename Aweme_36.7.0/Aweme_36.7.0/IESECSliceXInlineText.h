@class NSString, UIFont, UIColor;

@interface IESECSliceXInlineText : IESECSliceXInlineContent

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic) double adaptedFontSize;
@property (nonatomic) double fontWeight;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) unsigned long long fontStyle;
@property (retain, nonatomic) NSString *fontFamily;
@property (nonatomic) BOOL disableCJKAutoKerning;

- (id)initWithElement:(id)a0 baseTextConfig:(const struct IESECSliceXInlineTextConfig { id x0; id x1; double x2; double x3; unsigned long long x4; id x5; } *)a1;
- (void)updateFontWithNewFontSize:(double)a0 fontContext:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;

@end
