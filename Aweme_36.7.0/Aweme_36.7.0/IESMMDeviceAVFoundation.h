@interface IESMMDeviceAVFoundation : NSObject

+ (struct CGSize { double x0; double x1; })ratioSizeFromHeight:(double)a0 ratio:(long long)a1;
+ (struct CGSize { double x0; double x1; })ratioSizeFromOriginSize:(struct CGSize { double x0; double x1; })a0 ratio:(long long)a1;
+ (struct CGSize { double x0; double x1; })reduceSizeTo1080P:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })suggestedAutoRatioCaptureSize;
+ (id)suggestedCapturePresetByRatio:(long long)a0;
+ (struct CGSize { double x0; double x1; })suggestedOutputSizeForPreset:(id)a0;
+ (struct CGSize { double x0; double x1; })suggestedOutputSizeForPreset:(id)a0 specialPresetPhoto:(BOOL)a1;

@end
