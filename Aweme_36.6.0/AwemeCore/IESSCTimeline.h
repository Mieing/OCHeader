@class CIColor, NSString, NSArray;
@protocol ISSCVideoTimeline, ISSCVideoTimelineMixer;

@interface IESSCTimeline : NSObject

@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (retain, nonatomic) CIColor *backgroundColor;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) BOOL cacheDecodedFrameAsEmptyFrame;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (copy, nonatomic) NSArray *videoTracks;
@property (copy, nonatomic) NSArray *audioTracks;
@property (retain, nonatomic) NSArray *overlays;
@property (retain, nonatomic) NSArray *audios;
@property (retain, nonatomic) id<ISSCVideoTimeline> videoComposition;
@property (retain, nonatomic) id<ISSCVideoTimelineMixer> videoCompositionMixer;

+ (void)reloadStartTimeWithProviders:(id)a0 transitionTime:(id /* block */)a1;
+ (void)reloadVideoStartTimeWithProviders:(id)a0;
+ (void)reloadAudioStartTimeWithProviders:(id)a0;

- (struct CGSize { double x0; double x1; })naturalSizeWithAVAssetTrack:(id)a0;
- (void)iessc_updateVideoInfoWithAsset:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformWithAVAssetTrack:(id)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getTotalDuration;
- (void).cxx_destruct;
- (id)init;

@end
