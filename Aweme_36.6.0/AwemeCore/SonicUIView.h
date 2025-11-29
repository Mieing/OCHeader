@class SonicView;

@interface SonicUIView : UIView

@property (weak) SonicView *weak_sv;
@property BOOL need_gesture_processor;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSonicView:(id)a1 needGestureProcessor:(BOOL)a2;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
