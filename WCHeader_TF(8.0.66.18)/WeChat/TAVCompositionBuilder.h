@class TAVComposition, AVComposition, AVAudioMix, NSMutableArray, AVVideoComposition;

@interface TAVCompositionBuilder : NSObject

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
@property (nonatomic) BOOL needBuildAudioMix;
@property (retain, nonatomic) TAVComposition *compositor;

- (id)initWithComposition:(id)a0;
- (id)buildSource;
- (void)fixCompositionAudioTimeRangeIfNeeded;
- (id)buildComposition;
- (id)buildVideoComposition;
- (id)buildAudioMix;
- (void)resetSetupInfo;
- (id)calculateSlicesForLayerInstructions:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForMediaChannels:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForProviders:(id)a0;
- (void).cxx_destruct;

@end
