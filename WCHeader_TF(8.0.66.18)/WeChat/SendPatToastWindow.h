@protocol SendPatToastWindowDelegate;

@interface SendPatToastWindow : MMUIWindow

@property (weak, nonatomic) id<SendPatToastWindowDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toastFrame;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
