@class NSString, AVAssetWriterInput, NSURL, VEAudioEncodeConfig, AVAssetWriter;
@protocol IESGLAudioWriterDelegate;

@interface IESGLAudioWriter : IESMMObject {
    BOOL alreadyFinishedRecording;
    NSURL *audioURL;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } previousAudioTime;
    BOOL audioEncodingIsFinished;
    BOOL videoEncodingIsFinished;
    BOOL isRecording;
    BOOL allowWriteAudio;
}

@property (retain, nonatomic) VEAudioEncodeConfig *audioSettings;
@property (nonatomic) double progressStartTime;
@property (nonatomic) double progressTotalTime;
@property (nonatomic) double progressCurrentTime;
@property (nonatomic) BOOL isAudioReady;
@property (nonatomic) BOOL shouldInvalidateAudioSampleWhenDone;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (weak, nonatomic) id<IESGLAudioWriterDelegate> delegate;

- (double)getProgress;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)initializeAudioWithOutputSettings;
- (void)finishRecordingWithCompletionHandler:(id /* block */)a0;
- (void)setAllowWriteAudio:(BOOL)a0;
- (id)initWithAudioURL:(id)a0 fileType:(id)a1 audioSettings:(id)a2;
- (void).cxx_destruct;
- (void)startRecording;
- (void)cancelRecording;
- (void)finishRecording;

@end
