@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, NSURL, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue;

@interface BDCTVideoRecorder : NSObject {
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterPixelBufferInput;
    struct __CVBuffer { } *_pixelBuffer;
    NSObject<OS_dispatch_queue> *_writingQueue;
}

@property (nonatomic) float outputScale;
@property (nonatomic) BOOL recordAudio;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterAudioInput;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterVideoInput;
@property (readonly, nonatomic) NSURL *outputURL;

+ (id)formattedTimestampStringFromDate:(id)a0;

- (id)initWithOutputURL:(id)a0;
- (id)initWithOutputURL:(id)a0 outputScale:(float)a1;
- (id)initWithOutputURL:(id)a0 outputScale:(float)a1 recordAudio:(BOOL)a2;
- (id)_metadataArray;
- (BOOL)p_setupAudioWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)p_setupVideoWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 mediaType:(id)a1;
- (void)p_appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 mediaType:(id)a1;
- (void)finishWritingWithCompletion:(id /* block */)a0;
- (void)p_finishWritingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;

@end
