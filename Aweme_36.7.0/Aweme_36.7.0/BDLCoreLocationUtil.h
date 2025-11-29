@interface BDLCoreLocationUtil : NSObject

+ (struct CLLocationCoordinate2D { double x0; double x1; })safeCoordinate2D:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)changeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 location:(id)a1;
+ (id)coordinateSystemForCoordinate2D:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (long long)locationSourceTypeWithLocation:(id)a0;
+ (id)safeLocation:(id)a0;

@end
