@class NSString, UIFont, UIColor;

@interface SLITextInlineText : SLITextInlineContent

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

- (id)initWithElement:(id)a0 baseTextConfig:(const struct { id x0; id x1; id x2; unsigned long long x3; double x4; double x5; } *)a1;
- (void)updateFontWithNewFontSize:(double)a0 fontContext:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;

@end
