@interface AWEIMPopoverBubbleViewUtils : NSObject

+ (id)showSimpleTextStyleBubbleForView:(id)a0 withContent:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 targetPointOffset:(id)a3 position:(unsigned long long)a4 autoDismissTime:(double)a5 clickBlock:(id /* block */)a6;
+ (id)showLinkViewStyleBubbleForView:(id)a0 withContent:(id)a1 icon:(id)a2 targetPoint:(struct CGPoint { double x0; double x1; })a3 targetPointOffset:(id)a4 position:(unsigned long long)a5 autoDismissTime:(double)a6 clickBlock:(id /* block */)a7;
+ (id)popoverForView:(id)a0 withContent:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 targetPointOffset:(id)a3 position:(unsigned long long)a4 autoDismissTime:(double)a5 clickBlock:(id /* block */)a6;
+ (id)showMultilineTextStyleBubbleForView:(id)a0 withContent:(id)a1 contentWidth:(double)a2 textAlignment:(long long)a3 targetPoint:(struct CGPoint { double x0; double x1; })a4 targetPointOffset:(id)a5 position:(unsigned long long)a6 autoDismissTime:(double)a7 clickBlock:(id /* block */)a8;
+ (id)__popoverViewWithText:(id)a0 contentWidth:(double)a1 textAlignment:(long long)a2;

@end
