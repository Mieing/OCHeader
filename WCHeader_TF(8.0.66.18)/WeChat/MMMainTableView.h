@protocol MainTableDelegate;

@interface MMMainTableView : MMTableView

@property (nonatomic) BOOL enableDeselection;
@property (weak, nonatomic) id<MainTableDelegate> m_mainTableDelegate;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)ensureHierarchy;
- (void)deselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)forceDeselectRowAtIndexPath:(id)a0;
- (void)forceDeselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedContentInset;
- (BOOL)touchesShouldBegin:(id)a0 withEvent:(id)a1 inContentView:(id)a2;
- (BOOL)touchesShouldCancelInContentView:(id)a0;
- (void).cxx_destruct;

@end
