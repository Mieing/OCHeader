@interface BDXLynxMapPolygonModel : BDXLynxMapBridgeModel

- (id)addNewCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 index:(unsigned long long)a1;
- (id)updateCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 newCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

@end
