@class AVComposition, IESSCTimeline, AVAudioMix, NSMutableArray, AVVideoComposition;

@interface IESSCTimelineBuilder : NSObject

@property (retain, nonatomic) AVComposition *composition;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAudioMix *audioMix;
@property (retain, nonatomic) NSMutableArray *mainVideoTrackInfo;
@property (retain, nonatomic) NSMutableArray *mainAudioTrackInfo;
@property (retain, nonatomic) NSMutableArray *overlayTrackInfo;
@property (retain, nonatomic) NSMutableArray *audioTrackInfo;
@property (nonatomic) BOOL needRebuildComposition;
@property (nonatomic) BOOL needRebuildVideoComposition;
@property (nonatomic) BOOL needRebuildAudioMix;
@property (retain, nonatomic) IESSCTimeline *compositor;

- (id)buildSource;
- (id)buildComposition;
- (id)buildVideoComposition;
- (id)buildAudioMix;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForMediaTracks:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForAudioTracks:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForProviders:(id)a0;
- (void)resetSetupInfo;
- (void)fixCompositionAudioTimeRangeIfNeeded;
- (id)calculateSlicesForLayerInstructions:(id)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;

@end
