@class NSString, UIColor, LinkWeAppJumpWrap;

@interface LinkAnchorParser : TextParser {
    UIColor *_highlightedColor;
    BOOL _bBackgroundEnabled;
    unsigned long long _jumpType;
    LinkWeAppJumpWrap *_weappJumpWrap;
    BOOL _isNativeWeApp;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *sourceUrl;

+ (id)newInstance;
+ (id)stringByStrippingHref:(id)a0;
+ (id)stringByStrippingWCCustomLink:(id)a0;

- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfWCCustomLinkInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)getStyle;
- (id)attributeStringForContent:(id)a0;
- (id)getPrefixStylesWithParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a0;
- (id)prefixStyleStringWithParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a0 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a1;
- (id)getPrefixStylesWithStyleString:(id)a0;
- (BOOL)isJumpWeApp;
- (id)getCustomImgParser;
- (id)openWeAppLogoCustomImageContent;
- (void).cxx_destruct;

@end
