@interface WAMapUtils : NSObject

+ (id)SafeNumber:(double)a0;
+ (id)SafeNumber:(double)a0 To:(double)a1;
+ (id)DictionaryFromLocation:(id)a0;
+ (id)DictionaryFromLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })ParseCoord:(id)a0;

@end
