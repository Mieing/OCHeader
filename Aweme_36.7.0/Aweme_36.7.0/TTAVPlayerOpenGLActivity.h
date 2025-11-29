@interface TTAVPlayerOpenGLActivity : NSObject

+ (void)checkBroken;
+ (void)stop;
+ (void)start;
+ (BOOL)isActive;
+ (BOOL)isBroken;

@end
