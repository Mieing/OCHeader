@interface AWETeenHaptic : NSObject

+ (void)triggerWithType:(long long)a0;
+ (id)p_sharedHapticEngineInstance;
+ (void)startHapticWithIntensity:(double)a0 andSharpness:(double)a1 interval:(double)a2;
+ (void)notifyCustomSuccess;

@end
