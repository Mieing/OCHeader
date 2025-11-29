@class AVAssetWriterInputPixelBufferAdaptor, NSString, AVAssetWriterInput, AVURLAsset, NSObject, NSMutableArray, AVAssetWriter;
@protocol OS_dispatch_queue, BDPAPPKryptonDefaultMediaRecorderDelegate;

@interface BDPAPPKryptonMediaRecorder : NSObject <KryptonMediaRecorder> {
    id<BDPAPPKryptonDefaultMediaRecorderDelegate> _delegate;
    id /* block */ _recordEndCallback;
    NSString *_mimeType;
    unsigned long long _maxDuration;
    unsigned long long _videoWidth;
    unsigned long long _videoHeight;
    unsigned long long _videoBPS;
    unsigned long long _videoFPS;
    BOOL _useAudio;
    unsigned long long _audioBPS;
    unsigned long long _audioSampleRate;
    unsigned long long _audioChannels;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoBuffer;
    AVURLAsset *_avAsset;
    NSString *_localVideoPath;
    NSString *_localVideoUrl;
    NSMutableArray *_cachedPathArray;
    struct opaqueCMFormatDescription { } *_audioFormat;
    NSObject<OS_dispatch_queue> *_recordQueue;
    double _duration;
    unsigned long long _frameCount;
    unsigned long long _startTime;
    unsigned long long _pausedTime;
    unsigned long long _lastPauseTime;
    unsigned long long _lastFrameCurrentTime;
    unsigned long long _lastFrameTime;
    BOOL _running;
    BOOL _paused;
    BOOL _isSessionStarted;
    BOOL _checkAudioTimeStamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _totalAudioDurationTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _audioStartTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)pauseRecord;
- (void)appendZeroAudioData:(int)a0 audio_input:(id)a1;
- (void)onFrameAvailable:(struct __CVBuffer { } *)a0;
- (id)generateTempVideoPath:(BOOL)a0;
- (void)postWritingWithCompletion;
- (void)doStopRecordTask;
- (void)dispatchRecorderTask:(id /* block */)a0;
- (void)tryToRemoveFile:(id)a0;
- (void)notifyErrorStop:(id)a0;
- (BOOL)doStartRecordWithEndCallback:(id /* block */)a0;
- (id)generateVideoPathInfo:(BOOL)a0;
- (void)startAudio;
- (unsigned long long)getMicroSecondTime;
- (void)initAudioFormat;
- (void)notifyClipErrorEndWithCallback:(id /* block */)a0 path:(id)a1 error:(id)a2;
- (void)postClipWithCallback:(id /* block */)a0 path:(id)a1 url:(id)a2 status:(long long)a3 durationUs:(unsigned long long)a4;
- (void)configVideoWithMimeType:(id)a0 duration:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bps:(unsigned long long)a4 fps:(unsigned long long)a5;
- (void)configAudioWithChanels:(unsigned long long)a0 bps:(unsigned long long)a1 sampleRate:(unsigned long long)a2;
- (void)startRecordWithStartCallback:(id /* block */)a0 endCallback:(id /* block */)a1;
- (void)resumeRecord;
- (void)onAudioSample:(void *)a0 length:(int)a1;
- (void)clipWithTimeRanges:(id)a0 andEndCallback:(id /* block */)a1;
- (void)destroy:(BOOL)a0;
- (void)clipVideoSuccessWithPath:(id)a0;
- (void)doStartRecordWithStartCallback:(id /* block */)a0 endCallback:(id /* block */)a1;
- (void)pushVideoFrame:(struct __CVBuffer { } *)a0;
- (void)pushAudioSample:(void *)a0 length:(int)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)lastPresentationTime;

@end
