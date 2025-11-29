@class UIColor, UIFont, NSMutableDictionary, TextStyleAttributeObj, NSMutableArray;

@interface TextParser : BaseParser {
    NSMutableDictionary *m_dictWordLen;
    int m_maxAlphaWordLen;
    struct CGSize { double width; double height; } m_chineseWordSize;
    double m_cacheChineseWordFontSize;
}

@property (retain, nonatomic) NSMutableArray *currentStyles;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) BOOL customShadow;
@property (retain, nonatomic) TextStyleAttributeObj *textAttributeObj;
@property (nonatomic) BOOL lineBreakByClipping;
@property (nonatomic) long long inlineVerticalAlign;

+ (id)getAlphaSet;
+ (id)newInstance;
+ (void)initialize;

- (id)init;
- (struct CGSize { double x0; double x1; })calcWordSize:(id)a0;
- (id)substringOf:(id)a0 WithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStyle;
- (void)addAlphaWord:(id)a0 ToSplitArray:(id)a1;
- (BOOL)useWordWrapping;
- (BOOL)isChangeLineChar:(unsigned short)a0;
- (id)arrayWithWordSplit:(id)a0;
- (id)arrayWithWordSplit:(id)a0 wordWrapping:(BOOL)a1;
- (long long)FindtheIndexToFillFullLine:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 width:(long long)a3 withFont:(id)a4;
- (id)parseTextForStyles:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a1;
- (id)charWrappingTruncated:(id)a0 limitWidth:(double)a1 origin:(struct CGPoint { double x0; double x1; })a2 location:(double)a3;
- (void)markLastStyleAsEnd;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)attributeStringForContent:(id)a0;
- (void).cxx_destruct;

@end
