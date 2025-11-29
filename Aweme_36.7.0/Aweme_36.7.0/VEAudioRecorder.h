@class IESAudioConfig, IESWaveformConfig, IESMMAudioWaveformRT, IESExtAudioFileWriter;

@interface VEAudioRecorder : IESMMObject {
    double AUDIO_SAMPLE_RATE;
    double KPREFERRED_IO_BUFFER_DURATION;
    long long MAX_CACHE_FRAMES;
}

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct OpaqueAudioComponent { } *component;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *componetInstance;
@property (retain, nonatomic) IESExtAudioFileWriter *fileWriter;
@property (nonatomic) BOOL prepared;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *renderBufferList;
@property (retain, nonatomic) IESMMAudioWaveformRT *waveformRT;
@property (retain, nonatomic) IESWaveformConfig *waveConfig;
@property (retain, nonatomic) IESAudioConfig *audioConfig;
@property (copy, nonatomic) id /* block */ waveResultBlock;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, nonatomic) double recordDuration;
@property (copy, nonatomic) id /* block */ currentAudioBufferProcessBlock;

+ (BOOL)isMicAuth;

- (id)stopRecord;
- (void)startRecord;
- (void)pauseRecord;
- (id)initWithWaveformConfig:(id)a0 audioConfig:(id)a1;
- (void)stopRecord:(id /* block */)a0;
- (void)resetDuration;
- (void)setupInstance;
- (void)initAudioUnitComponent;
- (void)prepareSync;
- (void)startRecordWithPrivacyCert:(id)a0;
- (void)stopRecord:(id /* block */)a0 withPrivacyCert:(id)a1;
- (id)initWithWaveformConfig:(id)a0;
- (double)getAudioSampleRate;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })queryASBD;
- (void)updateCurrrentSampleRate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepare:(id /* block */)a0;

@end
