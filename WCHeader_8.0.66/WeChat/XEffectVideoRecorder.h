@class AVAssetWriterInputPixelBufferAdaptor, NSString, AVAssetWriterInput, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue;

@interface XEffectVideoRecorder : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetWriterQueue;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (id)initWithFilePath:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (void)initAssetWriter;
- (void)startRecordWithCompletion:(id /* block */)a0;
- (void)finishRecord:(id /* block */)a0;
- (void)cancelRecord;
- (BOOL)appendRawSample:(struct opaqueCMSampleBuffer { } *)a0 trimRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)appendRawPixel:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 trimRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)appendSnapshot:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)startRecord;
- (BOOL)realAppendSnapshot:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isWriting;
- (void).cxx_destruct;

@end
