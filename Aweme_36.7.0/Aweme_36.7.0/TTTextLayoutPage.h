@class NSString, TTEpubChapter;

@interface TTTextLayoutPage : NSObject {
    void *chapter_;
    void *page_;
}

@property (retain, nonatomic) NSString *page_text;
@property (retain, nonatomic) TTEpubChapter *chapter;
@property (nonatomic) long long page_idx_;

+ (void)drawBuffer:(id)a0 InContext:(struct CGContext { } *)a1 WithDrawerDelegate:(id)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLineIndex:(unsigned long long)a0;
- (unsigned long long)closestLineIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)lineIndexForPosition:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPosition:(unsigned long long)a0;
- (unsigned long long)lineIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLineIndex:(unsigned long long)a0;
- (void)removeLink:(id)a0;
- (void)addLink:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAllLink;
- (id)contentForFootnoteId:(id)a0;
- (BOOL)isLineLastOfParagraph:(unsigned long long)a0;
- (BOOL)isLineFirstOfParagraph:(unsigned long long)a0;
- (void)drawInContext:(struct CGContext { } *)a0 WithDrawerDelegate:(id)a1;
- (id)initWithChapter:(void *)a0 Index:(int)a1;
- (id)paragraph_list;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })ToNSRange:(struct Range { unsigned int x0; unsigned int x1; })a0;
- (struct CGSize { double x0; double x1; })ToCGSize:(struct TTSize { float x0; float x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ToCGRect:(struct RectF { float x0; float x1; float x2; float x3; })a0;
- (id)generateDrawBuffer:(id)a0 staticDataOnly:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })ToCGPoint:(struct PointF { float x0; float x1; })a0;
- (id)paragraphStyleForLineIndex:(unsigned long long)a0;
- (float)layoutedBottom;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForParagraph:(id)a0;
- (BOOL)IsLastParagraphAcrossPage;
- (BOOL)IsFirstParagraphAcrossPage;
- (struct CGSize { double x0; double x1; })layoutedSize;
- (id)lineStringForLineIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rectForFloatElementsInLine:(unsigned long long)a0;
- (void)drawInContext:(struct CGContext { } *)a0 WithDrawerDelegate:(id)a1 LimitedHeight:(float)a2;
- (id)generateDrawBuffer:(id)a0;
- (BOOL)compressSpaceWithBottomHeight:(double)a0 MaxCompressRate:(double)a1;
- (void)distributePageLineWithNewHeight:(double)a0 DelegateMaxRate:(double)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLink:(id)a0;
- (id)footnotes;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForFootnote:(id)a0;
- (id)getBackgroundDelegate;
- (void)addExtraDelegate:(id)a0;
- (id)extraDelegates;
- (void)setTextColor:(id)a0 Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTextBackgroundColor:(id)a0 Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTextBold:(BOOL)a0 Range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getTextColor:(int)a0;
- (id)getTextBackgroundColor:(int)a0;
- (BOOL)getTextBold:(int)a0;
- (id)links;
- (unsigned long long)rowCount;
- (void)drawInContext:(struct CGContext { } *)a0;
- (unsigned long long)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)attachments;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)text;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithPage:(void *)a0;
- (struct CGSize { double x0; double x1; })textBoundingSize;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForAttachment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
