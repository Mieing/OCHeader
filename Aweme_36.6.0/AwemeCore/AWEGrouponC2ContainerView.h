@interface AWEGrouponC2ContainerView : UIView

@property (nonatomic) double lastTouchTime;
@property (nonatomic) double checkInterval;
@property (nonatomic) BOOL didViewTouched;
@property (nonatomic) long long pageType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 checkInterval:(double)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
