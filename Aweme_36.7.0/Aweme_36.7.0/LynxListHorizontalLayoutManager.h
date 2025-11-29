@interface LynxListHorizontalLayoutManager : LynxListLayoutManager

- (struct CGSize { double x0; double x1; })getContentSize;
- (BOOL)isVerticalLayout;
- (double)layoutOffsetForFullSpanItem:(long long)a0;
- (BOOL)layoutModelVisibleInIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateModelFrame:(double)a0 crossAxisOffset:(double)a1 itemMainSize:(double)a2 itemCrossSize:(double)a3;
- (double)crossSize:(BOOL)a0;
- (double)mainSize:(long long)a0;
- (double)crossUpperInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultModelFrame:(id)a0;

@end
