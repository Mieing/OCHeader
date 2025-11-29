@class YYSelectionGrabberDot, UIColor;

@interface YYSelectionGrabber : UIView

@property (readonly, nonatomic) YYSelectionGrabberDot *dot;
@property (nonatomic) unsigned long long dotDirection;
@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })touchRect;

@end
