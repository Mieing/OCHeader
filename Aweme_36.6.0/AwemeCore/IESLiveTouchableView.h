@class UITapGestureRecognizer;
@protocol IESLiveTouchableViewDelegate;

@interface IESLiveTouchableView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isResponse;
@property (weak, nonatomic) id<IESLiveTouchableViewDelegate> delegate;

- (void)addGestures;
- (void)tapGestureAction:(id)a0;
- (void)panGestureAction:(id)a0;
- (void)p_handleTouchs:(id)a0 withEvent:(id)a1 touchType:(unsigned long long)a2;
- (void)longPressGestureAction:(id)a0;
- (void)pinchGestureAction:(id)a0;
- (void)rotationGestureAction:(id)a0;
- (struct CGPoint { double x0; double x1; })transformWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
