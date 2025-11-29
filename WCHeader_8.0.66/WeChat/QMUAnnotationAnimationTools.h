@interface QMUAnnotationAnimationTools : NSObject

+ (id)createTranslateAnimationWithLocations:(id)a0 duration:(double)a1;
+ (id)createRotateAnimationWithLocations:(id)a0 initialRotation:(double)a1 duration:(double)a2 distance:(double)a3;
+ (id)validateLocationData:(id)a0;
+ (id)compressLocationData:(id)a0;
+ (double)annotationViewRotation:(id)a0;
+ (double)getTranslateTotalDistance:(id)a0;
+ (BOOL)checkPointOnSegment:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withStartPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a1 andEndPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a2;

@end
