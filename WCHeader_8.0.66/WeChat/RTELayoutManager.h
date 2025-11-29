@protocol RTELayoutManagerDelegate;

@interface RTELayoutManager : NSLayoutManager

@property (weak, nonatomic) id<RTELayoutManagerDelegate> layoutDelegate;

- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setNeedsLayout:(id)a0;
- (void)setNeedsDisplay:(id)a0;
- (void)relayoutForContentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)storage;
- (void).cxx_destruct;

@end
