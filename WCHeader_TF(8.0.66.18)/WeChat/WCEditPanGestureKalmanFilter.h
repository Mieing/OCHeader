@class MMKalmanFilter;

@interface WCEditPanGestureKalmanFilter : WCEditPanGestureFilter

@property (retain, nonatomic) MMKalmanFilter *xFilter;
@property (retain, nonatomic) MMKalmanFilter *yFilter;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;

- (id)init;
- (id)genKalmanFilter;
- (struct CGPoint { double x0; double x1; })filterWithMeasurePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)clearData;
- (void).cxx_destruct;

@end
