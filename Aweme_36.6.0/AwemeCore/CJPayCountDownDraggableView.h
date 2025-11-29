@class UIView, UIPanGestureRecognizer;

@interface CJPayCountDownDraggableView : UIView

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dragHandle;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;

- (void)setupGesture;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0;
- (void)setupView;
- (void)handlePanGesture:(id)a0;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;

@end
