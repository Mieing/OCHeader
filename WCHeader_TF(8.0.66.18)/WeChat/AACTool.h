@interface AACTool : NSObject

+ (BOOL)isSupport3DTouch;
+ (BOOL)supportsHaptics;
+ (BOOL)applicationIsActive;
+ (BOOL)isJsonString:(id)a0;
+ (BOOL)judgeFileExist:(id)a0 type:(id)a1;
+ (id)convertToJsonData:(id)a0;
+ (id)HeModel2AHAP:(id)a0;
+ (id)He2Model2AHAP:(id)a0;
+ (id)HeDicAry2SystemVibrationAry:(id)a0 measureRatio:(float)a1;
+ (void)baseHeModelToAHAPPattern:(id)a0 :(long long)a1 :(id)a2;
+ (id)parameterConversion2AHAP:(int)a0 :(int)a1;
+ (id)AHAPModelToDic:(id)a0 error:(id)a1;
+ (BOOL)containTransientAndContinuous:(id)a0;
+ (id)splitArray:(id)a0 withSubSize:(int)a1;
+ (double)getHE2ModelDuration:(id)a0;
+ (double)getAHAPModelDuration:(id)a0;
+ (double)getDuration:(long long)a0;
+ (id)replyDataAndTime;
+ (id)resumeSystemVibrationAtTime:(int)a0 model:(id)a1;
+ (id)resumeAtTime:(int)a0 model:(id)a1;
+ (id)hapticQueue;

@end
