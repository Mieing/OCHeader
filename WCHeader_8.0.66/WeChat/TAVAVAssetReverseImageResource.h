@class NSObject, AVAsset, AVAssetReader, AVAssetReaderOutput, NSMutableArray, AVVideoComposition;
@protocol OS_dispatch_queue;

@interface TAVAVAssetReverseImageResource : TAVImageResource

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderOutput *trackOutput;
@property (retain, nonatomic) NSMutableArray *sampleBuffers;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReaderTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadBufferQueue;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } bufferDuration;
@property (nonatomic) BOOL isPreloading;

- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)a0;
- (id)initWithAsset:(id)a0 videoComposition:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)fixOritationIfNeed:(id)a0;
- (struct opaqueCMSampleBuffer { } *)loadSampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct opaqueCMSampleBuffer { } *)currentSampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeUnusedBuffersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)forceLoadSampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)preloadSampleBuffersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)createAssetReaderForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)createAssetReaderOutputAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)resetReaderAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)cleanReader;
- (void)runSyncInQueueWithBlock:(id /* block */)a0;
- (id)formattedBuffersTimeString;
- (void).cxx_destruct;

@end
