@interface VERecorder : NSObject

+ (BOOL)isRawCaptureSupported;
+ (id)aecModelName;
+ (id)aecModelrequeirements;
+ (id)createRecorderWithView:(id)a0 config:(id)a1 cameraComplete:(id /* block */)a2;
+ (BOOL)isLogCaptureSupported;
+ (float)supportMaxSwitchOverVideoZoomFactors;
+ (BOOL)isMultiCamSupported;

@end
