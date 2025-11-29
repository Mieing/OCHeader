@class NSArray, NSString;

@interface MAPolygon : MAMultiPoint <MAOverlay> {
    NSArray *_origHollowShapes;
}

@property (retain, nonatomic) NSArray *hollowShapes;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polygonWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (void)createCppOverlay;
- (BOOL)canAddHollowShape:(id)a0;
- (void)updateCppOverlayHollows;
- (BOOL)setPolygonWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1;
- (BOOL)setPolygonWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(long long)a1;
- (void).cxx_destruct;

@end
