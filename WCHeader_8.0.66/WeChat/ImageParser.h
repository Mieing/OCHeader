@class NSString, UIFont, UIColor;

@interface ImageParser : BaseParser {
    NSString *_nsImgSrc;
    NSString *_nsDarkImgSrc;
    UIColor *_imgColor;
}

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL customImageProvider;

+ (id)newInstance;

- (void)setImageSrc:(id)a0;
- (id)getImage;
- (id)getImageWithSrc:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfObjectInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStylesForString:(id)a0 withStyleString:(id)a1;
- (id)getImageStylesForString:(id)a0 withStyleString:(id)a1;
- (id)styleStringForContent:(id)a0 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; })a1 outputLastPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)stylesForString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withParserPosition:(struct _NSParserPosition { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; } *)a2;
- (id)getImageForText:(id)a0;
- (id)getColorWithString:(id)a0;
- (id)imageStyleOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
