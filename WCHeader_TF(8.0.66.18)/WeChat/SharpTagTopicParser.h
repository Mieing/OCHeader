@class NSString;

@interface SharpTagTopicParser : TextParser

@property (retain, nonatomic) NSString *query;

+ (id)newInstance;

- (BOOL)useWordWrapping;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getStyle;
- (id)attributeStringForContent:(id)a0;
- (void).cxx_destruct;

@end
