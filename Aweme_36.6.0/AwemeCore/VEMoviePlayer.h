@class NSString, CADisplayLink, AVPlayerItem, AVPlayerItemVideoOutput, VELimitLogger, VEInsertFramePlayer, NSObject, VEPlayerUnitConfig;
@protocol VEProcessSampleDelegate, OS_dispatch_queue, HTSMoviePlayerDelegate;

@interface VEMoviePlayer : NSObject <AVPlayerItemOutputPullDelegate, VEProcessSampleDelegate> {
    AVPlayerItemVideoOutput *_playerItemOutput;
    CADisplayLink *_displayLink;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _processingFrameTime;
    double _previousActualFrameTime;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_videoProcessingQueue;
    void *_HTSPlayerOperationQueueKey;
    double _videoDuration;
    struct __CVBuffer { } *_lastPixelBuffer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRenderTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPixelBufferTime;
}

@property (nonatomic) unsigned long long moviePlayerType;
@property (nonatomic) long long copyBufferFailedCount;
@property (retain, nonatomic) VEInsertFramePlayer *insertPlayer;
@property (retain, nonatomic) VEPlayerUnitConfig *config;
@property (retain, nonatomic) VELimitLogger *limitLogger;
@property (nonatomic) BOOL isFirstFrame;
@property (weak, nonatomic) id<HTSMoviePlayerDelegate> delegate;
@property (nonatomic) BOOL enableResetPlayer;
@property (nonatomic) BOOL pauseAndStillRender;
@property (nonatomic) BOOL isHighFrameRateRender;
@property (nonatomic) unsigned long long pixelformat;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downStream;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPlayerTime;
@property (nonatomic) BOOL isFastImport;
@property (nonatomic) BOOL noAvplayer;
@property (copy, nonatomic) id /* block */ readSampleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *route;

- (void)endProcessing;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)displayLinkCallbackWithNoPlayerItem:(id)a0;
- (id)initWithPlayerItem:(id)a0 config:(id)a1 mode:(unsigned long long)a2;
- (void)createPlayerItemOutput;
- (void)processPlayerItem;
- (void)processPixelBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 isSeek:(BOOL)a1;
- (void)processNoPlayerItem;
- (void)processFrame:(struct __CVBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)processFrame:(struct __CVBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isSeek:(BOOL)a2;
- (void)processLastPixelBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithPlayerItem:(id)a0 config:(id)a1;
- (void)processLastPixelBuffer;
- (void)clearOutputItem;
- (void)resetBufFailedCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getLastPixelbufferTime;
- (void)runAsync:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (void).cxx_destruct;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)cancelProcessing;
- (void)displayLinkCallback:(id)a0;
- (void)startProcessing;

@end
