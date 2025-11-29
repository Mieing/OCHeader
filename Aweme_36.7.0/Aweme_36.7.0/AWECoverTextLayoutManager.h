@class AWECoverTextConfig, UITextView;

@interface AWECoverTextLayoutManager : NSLayoutManager

@property (copy, nonatomic) id /* block */ beforeShowGlyhpBlock;
@property (copy, nonatomic) id /* block */ afterShowGlyphBlock;
@property (nonatomic) BOOL placeHolder;
@property (retain, nonatomic) AWECoverTextConfig *textConfig;
@property (weak, nonatomic) UITextView *textView;

- (id)p_drawText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)p_drawImageWithContext:(struct CGContext { } *)a0 image:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_drawCoverText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)p_drawStrokeText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)p_drawShadowWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 point:(struct CGPoint { double x0; double x1; })a1 shadowColor:(id)a2 offset:(struct CGSize { double x0; double x1; })a3 radius:(double)a4 textColor:(id)a5;
- (id /* block */)p_fillContextBlockWithColor:(id)a0;
- (id /* block */)p_restoreContextBlock;
- (id)p_drawGradientColorWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 point:(struct CGPoint { double x0; double x1; })a1 startColor:(id)a2 endColor:(id)a3 horizontal:(BOOL)a4;
- (id /* block */)p_strokeContextBlockWithWidth:(double)a0 color:(id)a1 join:(int)a2;
- (id /* block */)p_shadowContextBlockWithShadowColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1 radius:(double)a2 textColor:(id)a3;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(id)a3 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;

@end
