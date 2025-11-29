@class UIColor, AWEIMSwipeActionButton;

@interface AWEIMSwipeActionButtonWrapperView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain, nonatomic) AWEIMSwipeActionButton *swipeActionButton;
@property (retain, nonatomic) UIColor *actionBackgroundColor;

- (void)__configureBackgroundColorWithAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 action:(id)a1 orientation:(long long)a2 contentWidth:(double)a3;
- (void)updateReconfirmExpanded:(BOOL)a0 withVisibleWidth:(double)a1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
