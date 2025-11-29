@protocol MJShootBubbleSwitchTouchCaptureViewDelegate;

@interface MJShootBubbleSwitchTouchCaptureView : MMUIView

@property (weak, nonatomic) id<MJShootBubbleSwitchTouchCaptureViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
