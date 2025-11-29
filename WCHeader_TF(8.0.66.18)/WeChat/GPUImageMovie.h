@class AVAssetReader, NSURL, AVPlayerItemVideoOutput, AVPlayerItem, NSString, GPUImageMovieWriter, CADisplayLink, GLProgram, AVAsset;
@protocol GPUImageMovieDelegate;

@interface GPUImageMovie : GPUImageOutput <AVPlayerItemOutputPullDelegate> {
    BOOL audioEncodingIsFinished;
    BOOL videoEncodingIsFinished;
    GPUImageMovieWriter *synchronizedMovieWriter;
    AVAssetReader *reader;
    AVPlayerItemVideoOutput *playerItemOutput;
    CADisplayLink *displayLink;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } previousFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } processingFrameTime;
    double previousActualFrameTime;
    BOOL keepLooping;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    const float *_preferredConversion;
    BOOL isFullYUVRange;
    int imageBufferWidth;
    int imageBufferHeight;
}

@property BOOL isCancel;
@property (retain) AVAsset *asset;
@property (retain) AVPlayerItem *playerItem;
@property (retain) NSURL *url;
@property (nonatomic) BOOL runBenchmark;
@property (nonatomic) BOOL playAtActualSpeed;
@property (nonatomic) BOOL shouldRepeat;
@property (readonly, nonatomic) float progress;
@property (nonatomic) id<GPUImageMovieDelegate> delegate;
@property (readonly, nonatomic) AVAssetReader *assetReader;
@property (readonly, nonatomic) BOOL audioEncodingIsFinished;
@property (readonly, nonatomic) BOOL videoEncodingIsFinished;
@property (nonatomic) BOOL disableDisplayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)initWithPlayerItem:(id)a0;
- (void)yuvConversionSetup;
- (void)dealloc;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)a0;
- (void)startProcessing;
- (id)createAssetReader;
- (void)processAsset;
- (void)processPlayerItem;
- (void)outputMediaDataWillChange:(id)a0;
- (void)pauseMovieProcessing;
- (void)resumeMovieProcessing;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getTimeforInterval:(double)a0;
- (BOOL)hasNewPixelBufferForItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)displayLinkCallback:(id)a0 outputItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)displayLinkCallback:(id)a0;
- (BOOL)readNextVideoFrameFromOutput:(id)a0;
- (BOOL)readNextAudioSampleFromOutput:(id)a0;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)processMovieFrame:(struct __CVBuffer { } *)a0 withSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)endProcessing;
- (void)cancelProcessing;
- (void)convertYUVToRGBOutput;
- (void).cxx_destruct;

@end
