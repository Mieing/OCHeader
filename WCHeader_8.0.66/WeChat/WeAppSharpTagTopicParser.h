@interface WeAppSharpTagTopicParser : SharpTagTopicParser

- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getPrefixStylesWithParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a0;
- (id)getCustomImgParser;
- (id)openWeAppLogoCustomImageContent;

@end
