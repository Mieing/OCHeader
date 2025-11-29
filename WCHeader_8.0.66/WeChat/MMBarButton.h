@interface MMBarButton : MMUIButton

@property (nonatomic) unsigned long long eBarButtonStyle;
@property (nonatomic) double extendWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tintColorDidChange;

@end
