@protocol BaseParserStyleDelegate, TextLayoutDelegate;

@interface BaseParser : NSObject

@property (weak, nonatomic) id<BaseParserStyleDelegate> styleDelegate;
@property (weak, nonatomic) id<TextLayoutDelegate> layoutDelegate;
@property (nonatomic) unsigned long long parserType;
@property (nonatomic) double lineSpacing;

+ (id)newInstance;
+ (id)sharedInstance;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (void)insertString:(id)a0 stringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)parseTextForStyles:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a1;
- (double)getNextLineOriginWithCurrentY:(double)a0 lineHeight:(double)a1 withMaxWidth:(double)a2;
- (double)getCurrentLineWidthWithCurrentY:(double)a0 lineIndex:(long long)a1 lineHeight:(double)a2;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1;
- (unsigned int)perferedLinkTextVisiableLength;
- (id)attributeStringForContent:(id)a0;
- (id)previousParsedStyles;
- (void).cxx_destruct;

@end
