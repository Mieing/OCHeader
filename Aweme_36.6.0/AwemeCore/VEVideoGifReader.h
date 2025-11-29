@class VECurveTransUtils, NSObject, NSLock, NSURL, VEVideoConfig, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VEVideoGifReader : VEVideoReader

@property (retain, nonatomic) NSURL *picUrl;
@property (retain, nonatomic) VEVideoConfig *config;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } gifSrcDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } gifTrimDuration;
@property (nonatomic) long long gifFrameCount;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) long long lastBufferSrcPts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastDuration;
@property (nonatomic) long long gifFrameDelayUs;
@property (nonatomic) struct CGImageSource { } *imageSrouce;
@property (nonatomic) struct CGSize { double width; double height; } gifImageSize;
@property (retain, nonatomic) NSMutableArray *gifMetaDataArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (nonatomic) BOOL threadStopped;
@property (nonatomic) BOOL needSeek;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (retain, nonatomic) NSMutableArray *outBufferQueue;
@property (nonatomic) long long maxCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } gifStartTime;
@property (retain, nonatomic) NSLock *bufferQueueLock;
@property (nonatomic) long long nextRequestIndex;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekPreLoadTime;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (id)resUrl;
- (void)p_updateLastPixelBuffer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)p_updateVideoBufferWithLast:(id)a0;
- (void)initGifResources:(id)a0;
- (void)p_openGif;
- (void)p_startThread;
- (void)p_processTask;
- (long long)p_getGifIndexFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)p_removeBufferData;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToGifTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)p_getSampleBufferFromQueue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)p_getImageBufferFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)p_getGifTimeUs:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)releaseGifResources;
- (long long)p_getBestCacheCount;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)copyNextSampleBuffer;
- (void)updateVideoConfig:(id)a0;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
