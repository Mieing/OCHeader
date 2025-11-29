@class NSString, UIFont, UIColor;

@interface WCCustomLinkParser : TextParser {
    UIColor *_highlightedColor;
    BOOL _bBackgroundEnabled;
}

@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *sourceUrl;

+ (id)newInstance;

- (id)init;
- (void)setFont:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)parseTargetContent:(id)a0 tailWidth:(double *)a1;
- (id)getStyle;
- (id)attributeStringForContent:(id)a0;
- (id)parseFontFromAttrNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
