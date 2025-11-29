@class NSArray;

@interface MAMultiPolyline : MAPolyline

@property (retain, nonatomic) NSArray *drawStyleIndexes;

+ (id)polylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;

- (void)createCppOverlay;
- (BOOL)checkDrawIndexes:(id)a0;
- (id)initWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;
- (BOOL)setPolylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;
- (BOOL)setPolylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 drawStyleIndexes:(id)a2;
- (void).cxx_destruct;

@end
