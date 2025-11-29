@interface MMBottomBarButton : UIButton

@property (nonatomic) BOOL extendTouchArea;
@property (nonatomic) unsigned long long barButtonStyle;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
