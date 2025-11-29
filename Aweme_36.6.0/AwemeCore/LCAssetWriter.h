@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, LCRecordConfig, NSError, NSMutableArray, AVAssetWriter;

@interface LCAssetWriter : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) LCRecordConfig *recordConfig;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL videoEncodingIsFinished;
@property (nonatomic) BOOL audioEncodingIsFinished;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;
@property (nonatomic) double firstTimeStamp;
@property (nonatomic) long long dumpBufCount;
@property (retain, nonatomic) NSMutableArray *metadata;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (BOOL)cancelWriter;
- (BOOL)prepareWriter;
- (BOOL)startVideoWriter;
- (BOOL)prepareVideoWriter;
- (BOOL)prepareAudioInput;
- (void)completeVideoWriterInput;
- (void)completeAudioWriterInput;
- (BOOL)completeWriterWithBlock:(id /* block */)a0;
- (BOOL)isMPEGFile:(id)a0;
- (id)initWithConfig:(id)a0 WithCompletionHandler:(id /* block */)a1;
- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)processAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;
- (void)setUserData:(id)a0;
- (id)audioSettings;
- (id)init;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (id)videoSettings;
- (BOOL)startWriter;
- (void)stopWriter;

@end
