@interface WCPlayerVideoUtils : NSObject

+ (float)getVideoBitRateWithAsset:(id)a0;
+ (float)getAudioBitRateWithAsset:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getVideoTransformWithAsset:(id)a0;
+ (double)getVideoDurationWithPlayerItem:(id)a0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getVideoBufferTimeRange:(id)a0;
+ (id)getPlayerObserveChangeWithItem:(id)a0;
+ (id)getCurSnapshotWithPlaybackInfo:(id)a0 VideoOutput:(id)a1 Asset:(id)a2 CurTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
+ (struct CGImage { } *)getCurSnapshotWithPlaybackInfo:(id)a0 Asset:(id)a1;
+ (struct CGImage { } *)getCurSnapshotWithPlaybackInfo:(id)a0 VideoOutput:(id)a1 CurTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (unsigned int)getVideoCodecWithPath:(id)a0;
+ (id)getVideoMetaWithPath:(id)a0;
+ (double)syncAVGetDurationWithPath:(id)a0;
+ (double)syncGetDurationWithPath:(id)a0;
+ (struct CGSize { double x0; double x1; })getVideoSizeWithPath:(id)a0;
+ (float)asset:(id)a0 syncGetDurationWithTimeout:(float)a1;
+ (BOOL)isDecoderErrorCode:(long long)a0;
+ (BOOL)isMediaNotSupportedCode:(long long)a0;

@end
