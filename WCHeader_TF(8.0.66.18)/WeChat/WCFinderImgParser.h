@class UIColor;

@interface WCFinderImgParser : WCCustomImgParser

@property (nonatomic) BOOL hasParseImageAttr;
@property (retain, nonatomic) UIColor *color;

+ (id)newInstance;

- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (void).cxx_destruct;

@end
