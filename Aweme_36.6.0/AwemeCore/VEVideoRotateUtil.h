@interface VEVideoRotateUtil : NSObject

+ (unsigned long long)rotationMode:(unsigned long long)a0 AddRotation:(float)a1;
+ (unsigned long long)degressFromVideoAsset:(id)a0 degress:(float)a1;
+ (void)calcVideoRotation:(unsigned long long)a0 rotateAngle:(double *)a1 flipX:(BOOL *)a2 flipY:(BOOL *)a3;
+ (BOOL)needRotateWithMode:(unsigned long long)a0;

@end
