@interface AWEIMAroundPOIManagerWrapper : AWEIMPOIManagerWrapper

- (void)startSearchAround:(struct CLLocationCoordinate2D { double x0; double x1; })a0 userCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 withPriortyPoiItem:(id)a2 needCandidate:(BOOL)a3 completion:(id /* block */)a4;
- (void)startSearchAround:(struct CLLocationCoordinate2D { double x0; double x1; })a0 userCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 withPriortyPoiItem:(id)a2 needCandidate:(BOOL)a3;
- (id)init;

@end
