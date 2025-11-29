@class UIScrollView, UIView;

@interface AWEProfilePostAnalysisContainerView : UIView

@property (weak, nonatomic) UIView *lastTouchedView;
@property (weak, nonatomic) UIScrollView *lastFoundScrollView;
@property (copy, nonatomic) id /* block */ updateInnerScrollViewBlock;

- (BOOL)enableDragOptimize;
- (id)findScrollableScrollView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
