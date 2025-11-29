@class CADisplayLink;

@interface FlutterTextInputViewInputAccess : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastHeight;
@property (copy, nonatomic) id /* block */ onKeyboardHeightChange;
@property (copy, nonatomic) id /* block */ onInputViewAdded;
@property (copy, nonatomic) id /* block */ onInputViewRemoved;

- (void)didMoveToWindow;
- (void)tick;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
