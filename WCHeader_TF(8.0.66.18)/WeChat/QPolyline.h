@class WAMapPolyLineData, QIndoorInfo;

@interface QPolyline : QMultiPoint

@property (retain, nonatomic) WAMapPolyLineData *userData;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (retain, nonatomic) QIndoorInfo *indoorInfo;

+ (id)polylineWithEncodedString:(id)a0;
+ (id)polylineWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (id)initWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;

@end
