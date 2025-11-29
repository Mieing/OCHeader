@interface EmoticonParser : ImageParser {
    struct CGSize { double width; double height; } m_emptySpaceSize;
}

+ (id)newInstance;

- (id)getImage;
- (id)getImageForText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;

@end
