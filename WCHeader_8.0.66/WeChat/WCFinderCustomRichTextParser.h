@class UIColor, UIFont, TextParser, WCFinderImgParser;

@interface WCFinderCustomRichTextParser : BaseParser

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) TextParser *textParser;
@property (retain, nonatomic) WCFinderImgParser *imgParser;

+ (id)_testRegular;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)parseTextForStyles:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a1;
- (id)_styleForText:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 content:(id)a1 position:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)_styleForDynamicIcon:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 content:(id)a1 position:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (void).cxx_destruct;

@end
