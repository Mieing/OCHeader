@interface CJPayVibrationUtil : NSObject

+ (void)playAfterPayVibration;
+ (void)playCustomVibrationWithIntensity:(float)a0 duration:(double)a1;
+ (id)sharedHapticEngineInstance;
+ (void)playCustomVibrationWithEngine:(id)a0 Intensity:(float)a1 duration:(double)a2;

@end
