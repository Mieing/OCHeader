@interface MMFinderLiveZoomPinchGestureRecognizer : UIPinchGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } initialLocation;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
