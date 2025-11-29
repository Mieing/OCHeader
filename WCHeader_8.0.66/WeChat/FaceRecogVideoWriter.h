@class AVAssetWriterInput, AVAssetWriter, NSString;

@interface FaceRecogVideoWriter : MMObject

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL hadStartSession;

+ (id)writerForPath:(id)a0 Height:(long long)a1 width:(long long)a2 channels:(int)a3 samples:(double)a4;

- (void)dealloc;
- (id)initPath:(id)a0 Height:(long long)a1 width:(long long)a2 channels:(int)a3 samples:(double)a4;
- (void)initVideoInputHeight:(long long)a0 width:(long long)a1;
- (void)initAudioInputChannels:(int)a0 samples:(double)a1;
- (BOOL)startWriting;
- (long long)writerStatus;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)cancelWriting;
- (BOOL)encodeFrame:(struct opaqueCMSampleBuffer { } *)a0 isVideo:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromCurrentVideoOrientationToOrientation:(long long)a0;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)a0;
- (void).cxx_destruct;

@end
