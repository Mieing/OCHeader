@interface EmoticonRecordConfigUtility : NSObject

+ (id)getCameraPreset;
+ (struct CGSize { double x0; double x1; })getCameraPresetSize;
+ (struct CGSize { double x0; double x1; })getCameraVisibleSize;
+ (long long)getVideoFrameRate;
+ (long long)getAnimationFrameRate;
+ (struct CGSize { double x0; double x1; })getPreviewVisibleSize;
+ (struct CGSize { double x0; double x1; })getRecordVideoSize;
+ (double)getCameraTopOffset;
+ (double)getPreviewTopOffset;
+ (BOOL)isLowPerformanceDevice;

@end
