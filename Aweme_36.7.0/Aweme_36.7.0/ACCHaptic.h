@interface ACCHaptic : NSObject

+ (void)triggerWithType:(long long)a0;
+ (id)p_sharedHapticEngineInstance;
+ (void)startHapticWithIntensity:(double)a0 andSharpness:(double)a1 interval:(double)a2;
+ (void)notifyCustomSuccess;
+ (id)selectionFeedback;
+ (id)notificationFeedback;
+ (id)heavyImpact;
+ (id)mediumImpact;
+ (id)lightImpact;
+ (id)rigidImpact;
+ (id)softImpact;

@end
