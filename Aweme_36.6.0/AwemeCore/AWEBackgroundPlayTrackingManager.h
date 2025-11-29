@interface AWEBackgroundPlayTrackingManager : NSObject

+ (id)videoPlayAspect;
+ (id)videoPlayFinishAspect;
+ (id)playTimeAspect;
+ (id)backgroundPlayType;
+ (BOOL)canReportAccordingRemoteAndBKGExp;
+ (id)getBackgroundTypeWithModel:(id)a0 logExtra:(id)a1;
+ (BOOL)isInPinchBackgroundWithLogExtra:(id)a0;
+ (BOOL)isPipWindowMode;
+ (void)trackExternalDeviceDurationWithModel:(id)a0 logExtra:(id)a1 params:(id)a2 trackContext:(id)a3;
+ (BOOL)isBackgroundPlayModeWithModel:(id)a0 logExtra:(id)a1;
+ (id)videoPlayPauseAspect;
+ (id)videoClickPlayAspect;

@end
