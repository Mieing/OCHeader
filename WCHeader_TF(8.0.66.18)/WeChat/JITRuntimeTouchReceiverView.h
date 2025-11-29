@class NSArray, JITRuntimeView;

@interface JITRuntimeTouchReceiverView : UIView

@property (weak, nonatomic) JITRuntimeView *view;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtimeView:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)convertTouches:(id)a0;
- (void)handleTouches:(id)a0 timestamp:(double)a1 touches:(id)a2 changedTouches:(id)a3;
- (void).cxx_destruct;

@end
