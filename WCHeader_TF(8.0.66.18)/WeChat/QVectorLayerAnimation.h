@interface QVectorLayerAnimation : NSObject

+ (id)createTranslateAnimationWithLocations:(id)a0 duration:(double)a1 animKey:(id)a2 withMode:(id)a3;
+ (id)createRotateAnimationWithLocations:(id)a0 initialRotation:(double)a1 offsetRotate:(double)a2 duration:(double)a3 withKey:(id)a4;
+ (id)validateLocationData:(id)a0;
+ (id)compressLocationData:(id)a0;

@end
