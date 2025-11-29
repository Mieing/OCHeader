@protocol AWEEcomSearchPassthroughViewProtocol;

@interface AWEEcomSearchPassthroughView : UIView

@property (weak, nonatomic) id<AWEEcomSearchPassthroughViewProtocol> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
