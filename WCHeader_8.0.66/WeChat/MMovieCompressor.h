@class AVAssetWriterInputPixelBufferAdaptor, NSString, MMovieDecoder, AVAssetWriterInput, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue, MMovieCompressorDelegate;

@interface MMovieCompressor : MMObject <MMovieDecoderDelegate> {
    MMovieDecoder *m_decoder;
    NSString *m_moviePath;
    NSString *m_originalPath;
    struct CGSize { double width; double height; } m_videoSize;
    double m_bitrate;
    unsigned int m_type;
    AVAssetWriter *m_writer;
    AVAssetWriterInput *m_audioInput;
    AVAssetWriterInput *m_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput;
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    unsigned int inputTextureForMovieRendering;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_previousFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_previousAudioTime;
    NSObject<OS_dispatch_queue> *audioQueue;
    BOOL audioEncodingIsFinished;
    BOOL videoEncodingIsFinished;
    BOOL hasCaptureFirstFrame;
    double inputWidth;
    double inputHeight;
}

@property (weak, nonatomic) id<MMovieCompressorDelegate> delegate;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL audioOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilePath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFilePath:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1 andBitRate:(double)a2;
- (id)makeNewPath:(id)a0 gap:(unsigned long long)a1;
- (void)dealloc;
- (void)initWritterOutput;
- (void)startCompress;
- (void)mMovieDecoder:(id)a0 onNewVideoFrameReady:(struct opaqueCMSampleBuffer { } *)a1;
- (void)mMovieDecoder:(id)a0 onNewAudioFrameReady:(struct opaqueCMSampleBuffer { } *)a1;
- (void)mMovieDecoderOnDecodeFinished:(id)a0;
- (void)compressMovieWithExport;
- (void).cxx_destruct;

@end
