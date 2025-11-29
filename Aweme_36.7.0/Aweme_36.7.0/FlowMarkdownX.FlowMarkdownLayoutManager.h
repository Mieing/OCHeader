@interface FlowMarkdownX.FlowMarkdownLayoutManager : NSLayoutManager <NSLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ isSubscribed;
}

- (long long)layoutManager:(id)a0 shouldGenerateGlyphs:(const unsigned short *)a1 properties:(const long long *)a2 characterIndexes:(const long long *)a3 font:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutManager:(id)a0 boundingBoxForControlGlyphAtIndex:(long long)a1 forTextContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 glyphPosition:(struct CGPoint { double x0; double x1; })a4 characterIndex:(long long)a5;
- (long long)layoutManager:(id)a0 shouldUseAction:(long long)a1 forControlCharacterAtIndex:(long long)a2;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)fillBackgroundRectArray:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 color:(id)a3;
- (void)drawUnderlineForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 underlineType:(long long)a1 baselineOffset:(double)a2 lineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 lineFragmentGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 containerOrigin:(struct CGPoint { double x0; double x1; })a5;

@end
