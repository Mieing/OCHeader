@interface MJPassthroughButton : MMUIButton {
    double _lastTapTime;
}

@property (copy, nonatomic) id /* block */ tapHandler;
@property (nonatomic) double throttleInterval;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
