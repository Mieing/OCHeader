@interface BDPDirectionRouteUtil : NSObject

+ (void)onDirectionWithOrigin:(struct CLLocationCoordinate2D { double x0; double x1; })a0 destination:(struct CLLocationCoordinate2D { double x0; double x1; })a1 type:(long long)a2 callback:(id /* block */)a3;
+ (id)buildPolylinesWithPath:(id)a0 type:(long long)a1 origin:(struct CLLocationCoordinate2D { double x0; double x1; })a2 destination:(struct CLLocationCoordinate2D { double x0; double x1; })a3;

@end
