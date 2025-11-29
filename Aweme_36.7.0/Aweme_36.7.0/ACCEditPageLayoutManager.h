@class ACCEditPageStrokeConfig;

@interface ACCEditPageLayoutManager : NSLayoutManager

@property (copy, nonatomic) id /* block */ beforeShowGlyhpBlock;
@property (copy, nonatomic) id /* block */ afterShowGlyphBlock;
@property (retain, nonatomic) ACCEditPageStrokeConfig *strokeConfig;

- (id /* block */)p_restoreContextBlock;
- (id /* block */)p_strokeContextBlockWithWidth:(double)a0 color:(id)a1 join:(int)a2;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(id)a3 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;
- (void)drawUnderlineForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 underlineType:(long long)a1 baselineOffset:(double)a2 lineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 lineFragmentGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 containerOrigin:(struct CGPoint { double x0; double x1; })a5;

@end
