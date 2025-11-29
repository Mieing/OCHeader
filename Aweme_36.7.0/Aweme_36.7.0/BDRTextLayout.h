@class NSArray, NSAttributedString;

@interface BDRTextLayout : NSObject {
    struct __CTFramesetter { } *_framesetter;
}

@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visableRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBoundingRect;
@property (retain, nonatomic) NSArray *lines;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textBoundingSize;
@property (nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;

- (void)buildLinesWithTypesetter;
- (struct CGPoint { double x0; double x1; })algorithmWebKit_BaselineOriginToPositionLine:(id)a0 afterLine:(id)a1;
- (double)_algorithmWebKit_halfLeadingOfLine:(id)a0;
- (BOOL)isLineLastInParagraph:(id)a0;
- (BOOL)isLineFirstInParagraph:(id)a0;
- (void)drawTextBlockInContext:(struct CGContext { } *)a0;
- (void)_drawTextBlock:(id)a0 inContext:(struct CGContext { } *)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_enumerateTextBlocksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)prehandleRadius:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawBackgroundWithRadius:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)drawBorder:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (BOOL)saveAndUpdateLineStlyleIfNeeded:(long long)a0 width:(double)a1 context:(struct CGContext { } *)a2;
- (void)drawArc:(struct CGContext { } *)a0 radius:(double)a1 width:(double)a2 center:(struct CGPoint { double x0; double x1; })a3 start:(double)a4 end:(double)a5 style:(id)a6;
- (void)drawAngle:(struct CGContext { } *)a0 outerPoint:(struct CGPoint { double x0; double x1; })a1 innerPoint:(struct CGPoint { double x0; double x1; })a2 rightPoint:(struct CGPoint { double x0; double x1; })a3 style:(id)a4;
- (void)drawLine:(struct CGContext { } *)a0 start:(struct CGPoint { double x0; double x1; })a1 end:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 style:(id)a4;
- (void)restoreLineStyleIfNeeded:(BOOL)a0 context:(struct CGContext { } *)a1;
- (void)drawShape:(struct CGContext { } *)a0 points:(id)a1;
- (void)realDrawLine:(struct CGContext { } *)a0 start:(struct CGPoint { double x0; double x1; })a1 end:(struct CGPoint { double x0; double x1; })a2 width:(double)a3;
- (BOOL)_enumerateTextBlocksAtLevel:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_blockFrameForEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 level:(unsigned long long)a1;
- (id)lineContainingIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLineIndex:(unsigned long long)a0;
- (unsigned long long)closestLineIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })correctedRangeWithEdge:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)lineIndexForPosition:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPosition:(unsigned long long)a0;
- (double)offsetForTextPosition:(unsigned long long)a0 lineIndex:(unsigned long long)a1;
- (unsigned long long)lineIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLineIndex:(unsigned long long)a0;
- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (unsigned long long)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)paragraphRanges;

@end
