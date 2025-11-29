@interface MAMultiPoint : MAShape {
    struct MAMapPoint { double x0; double x1; } *_points;
}

@property (readonly, nonatomic) struct MAMapPoint { double x0; double x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) BOOL cross180Longitude;

- (BOOL)setWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1;
- (BOOL)setWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(long long)a1;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })getInternalBoundingRect;
- (BOOL)isCross180Longitude;
- (void)reset;
- (void)dealloc;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;

@end
