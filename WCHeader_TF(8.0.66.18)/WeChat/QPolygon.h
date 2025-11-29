@class NSArray, WAMapPolygonData;

@interface QPolygon : QMultiPoint

@property (retain, nonatomic) WAMapPolygonData *userData;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (copy, nonatomic) NSArray *interiorPolygons;

+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polygonWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1 interiorPolygons:(id)a2;
+ (id)polygonWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1 interiorPolygons:(id)a2;

- (id)initWithWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)initWithPoints:(struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;

@end
