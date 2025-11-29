@interface WCEditPanGestureLowPassFilter : WCEditPanGestureFilter

@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;
@property (nonatomic) double factor;

- (id)init;
- (struct CGPoint { double x0; double x1; })filterWithMeasurePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)clearData;

@end
