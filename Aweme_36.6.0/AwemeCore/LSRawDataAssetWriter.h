@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, LSRawDataRecordConfig, NSError, NSMutableArray, AVAssetWriter;

@interface LSRawDataAssetWriter : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) LSRawDataRecordConfig *recordConfig;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL videoEncodingIsFinished;
@property (nonatomic) BOOL videoDumpIsFinished;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *assetWriterPixelBufferInput;
@property (nonatomic) long long firstTimeStamp;
@property (nonatomic) long long dumpBufCount;
@property (retain, nonatomic) NSMutableArray *metadata;

- (BOOL)cancelWriter;
- (BOOL)prepareWriter;
- (BOOL)startVideoWriter;
- (BOOL)prepareVideoWriter;
- (void)completeVideoWriterInput;
- (BOOL)completeWriterWithBlock:(id /* block */)a0;
- (BOOL)isMPEGFile:(id)a0;
- (id)initWithConfig:(id)a0 WithCompletionHandler:(id /* block */)a1;
- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (void)setUserData:(id)a0;
- (id)init;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (id)videoSettings;
- (BOOL)startWriter;

@end
