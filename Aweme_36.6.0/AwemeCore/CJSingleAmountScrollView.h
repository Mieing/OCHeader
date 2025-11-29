@class UIView;

@interface CJSingleAmountScrollView : UIScrollView {
    int _count;
}

@property (retain, nonatomic) UIView *scrollContentView;
@property (nonatomic) int currentIndex;
@property (nonatomic) double amountCellFontSize;
@property (nonatomic) double amountCellHeight;
@property (nonatomic) double amountCellWidth;

- (void)scrollToModel:(id)a0;
- (void)scrollToIndex:(int)a0 isAscending:(BOOL)a1 animated:(BOOL)a2;
- (void)resetCellContent:(id)a0 defaultIndex:(int)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
