@class IESMMMVEffectFilter, AVAsset, HTSVideoData, NSMutableDictionary, NSMutableArray, IESMMTimeMachine, NSObject, IESMMMVModel;
@protocol OS_dispatch_queue, HTSGLInput, OS_dispatch_semaphore;

@interface IESMediaInfo : NSObject {
    void *operationQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resourceSemaphore;
@property (nonatomic) long long noLockOperationCount;
@property (retain, nonatomic) id<HTSGLInput> outputFilter;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL useSystemVideoCompostion;
@property (weak, nonatomic) IESMMMVEffectFilter *mvEffectFilter;
@property (weak, nonatomic) IESMMMVModel *mvModel;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL allVideoInOneTrack;
@property (nonatomic) BOOL allAudioInOneTrack;
@property (nonatomic) long long mediaType;
@property (nonatomic) double animationDuration;
@property (nonatomic) double movieDuration;
@property (retain, nonatomic) NSMutableArray *videoAssets;
@property (retain, nonatomic) NSMutableArray *subTrackVideoAssets;
@property (retain, nonatomic) NSMutableArray *audioAssets;
@property (retain, nonatomic) NSMutableDictionary *videoTimeClipInfo;
@property (retain, nonatomic) NSMutableDictionary *videoTimeScaleInfo;
@property (retain, nonatomic) NSMutableDictionary *audioTimeClipInfo;
@property (retain, nonatomic) NSMutableDictionary *assetMattingInfos;
@property (retain, nonatomic) NSMutableDictionary *volumnInfo;
@property (retain, nonatomic) NSMutableArray *filterTimeLine;
@property (retain, nonatomic) NSMutableArray *filterZoom;
@property (retain, nonatomic) NSMutableDictionary *mediaFilter;
@property (retain, nonatomic) IESMMTimeMachine *timeMachine;
@property (nonatomic) BOOL isMicMuted;
@property (nonatomic) unsigned long long audioRepeatCount;
@property (retain, nonatomic) NSMutableArray *extraMusicEffectInfo;
@property (retain, nonatomic) NSMutableArray *extraMusicEffectAsset;
@property (nonatomic) double totalDurationWithTimeMachine;
@property (retain, nonatomic) AVAsset *endingWaterMarkAudio;
@property (retain, nonatomic) NSMutableDictionary *mvResourceID;
@property (nonatomic) BOOL enableHighFrameRatePreview;

+ (long long)getSubTrackNums:(id)a0;
+ (id)sortVideoTrack:(id)a0;
+ (BOOL)isSubTrack:(id)a0;
+ (long long)getMainTrackNums:(id)a0;
+ (unsigned long long)rotationModeFromDegress:(float)a0;
+ (long long)getScaleModeWithFillMode:(long long)a0;

- (unsigned long long)rotationMode:(unsigned long long)a0 AddRotation:(float)a1;
- (unsigned long long)degressFromVideoAsset:(id)a0 degress:(float)a1;
- (double)videoRateForAsset:(id)a0;
- (id)volumeForAsset:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })audioTimeClipRangeForAsset:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })videoTimeClipRangeForAsset:(id)a0;
- (BOOL)hasMV;
- (id)initWithVideoData:(id)a0 enableMultiTrack:(BOOL)a1;
- (void)setMediatype:(id)a0;
- (void)createMediaAssets:(id)a0 videoData:(id)a1;
- (long long)getmediaDataFilter:(id)a0;
- (void)runAsync:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)initOperationQueue;
- (id)init;

@end
