@interface MAPointAnnotation : MAShape

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic, getter=isLockedToScreen) BOOL lockedToScreen;
@property (nonatomic) struct CGPoint { double x; double y; } lockedScreenPoint;

- (void)updateCoordinateWithMapview:(id)a0;

@end
