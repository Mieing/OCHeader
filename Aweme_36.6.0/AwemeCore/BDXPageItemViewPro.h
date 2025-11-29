@class UIScrollView;

@interface BDXPageItemViewPro : BDXPageListView

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewPadding;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
