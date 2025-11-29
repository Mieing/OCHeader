@interface LynxTextLayoutManager : NSLayoutManager

@property (nonatomic) struct CGPoint { double x; double y; } overflowOffset;
@property (nonatomic) struct CGSize { double width; double height; } textBoundingRectSize;
@property (nonatomic) long long glyphCount;
@property (nonatomic) struct CGPoint { double x; double y; } preEndPosition;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } preDrawableRange;

- (void)drawTextClipMaskWithFont:(id)a0 glyphCount:(unsigned long long)a1 glyphs:(const unsigned short *)a2 maskContext:(struct CGContext { } *)a3 mutableAttr:(id)a4 positions:(const struct CGPoint { double x0; double x1; } *)a5 size:(const struct CGSize { double x0; double x1; } *)a6 textMatrix:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a7 adjustOffset:(const struct CGPoint { double x0; double x1; } *)a8;
- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showCGGlyphs:(const unsigned short *)a0 positions:(const struct CGPoint { double x0; double x1; } *)a1 count:(unsigned long long)a2 font:(id)a3 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 attributes:(id)a5 inContext:(struct CGContext { } *)a6;

@end
