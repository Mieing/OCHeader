@interface ACCStickerViewPerfTracker : NSObject

+ (id)startStickerGestureBeginTrack;
+ (id)trackerForGestureBeginTrack;
+ (void)trackStickerGestureBeginWithTracker:(id)a0;
+ (id)startRecoverStickerTrackWithName:(id)a0;
+ (void)trackRecoverStickerWithTracker:(id)a0;
+ (BOOL)enableStickerGesturePerf;
+ (long long)gestureBeginThresholdTime;
+ (long long)gestureBeginThresholdCount;
+ (id)gestureBeginPerfConfig;

@end
