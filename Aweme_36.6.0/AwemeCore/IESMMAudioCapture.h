@class VELimitLogger, NSString, IESWeakSelectorTarget;

@interface IESMMAudioCapture : NSObject <VEAudioCaptureProtocol>

@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long channelNum;
@property (nonatomic) BOOL isCaptureStarted;
@property (retain, nonatomic) IESWeakSelectorTarget *timer;
@property (nonatomic) double currentHeartBeat;
@property (nonatomic) double lastBufferInputTimeForLogging;
@property (nonatomic) struct OpaqueAudioComponent { } *component;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *componetInstance;
@property (nonatomic) struct OpaqueAudioConverter { } *audioConverter;
@property (nonatomic) struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } dstAudioBuffer;
@property (nonatomic) struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } bufferList;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } convertDesc;
@property (retain, nonatomic) VELimitLogger *audioLimitLogger;
@property (copy, nonatomic) id /* block */ audioCaptureBlock;
@property (copy, nonatomic) id /* block */ audioConvertCallback;
@property (copy, nonatomic) id /* block */ audioBGMOutputCallback;
@property (copy, nonatomic) id /* block */ audioBGMResultCallback;
@property (copy, nonatomic) id /* block */ audioBGMStatusCallback;
@property (nonatomic) BOOL needConvert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUseExternalPluggUseA2DP;
+ (void)setUseNewFormat:(BOOL)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;

- (void)setMusicVolume:(double)a0;
- (double)recordVolume;
- (void)setRecordVolume:(double)a0;
- (double)accompanyVolume;
- (void)heartBeatListen;
- (void)setAccompanyMusicFile:(id)a0 fromTime:(double)a1 OriginalSingMusicFile:(id)a2 startTime:(double)a3;
- (void)mutedAccompany:(BOOL)a0;
- (void)accompanySeekToTime:(double)a0;
- (void)convertAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 timeInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1;
- (void)echoEnable:(BOOL)a0;
- (double)getAccompanyCurrentTime;
- (double)getDuetKaraokeModeCurrentTime;
- (double)getOriginalSingCurrentTime;
- (void)initAudioConvert;
- (void)initMicrophoneSource;
- (BOOL)isAudioCaptureRuning;
- (void)logErrorStatus:(int)a0 func:(id)a1;
- (void)mutedOrignalSing:(BOOL)a0;
- (void)originalSingSeekToTime:(double)a0;
- (double)originalSingVolume;
- (void)releaseAudioCapture;
- (void)routeChanged;
- (void)seekDuetKaraokeModeToTime:(double)a0;
- (void)seekToAccompanyTime:(double)a0 accompanyStartWritingTime:(double)a1 originalSingTime:(double)a2 originalSingStartWritingTime:(double)a3;
- (void)setAccompanyVolume:(double)a0;
- (void)setAudioCaptureSampleRate;
- (void)setDuetKaraokeModeMusic:(id)a0 fromTime:(double)a1;
- (void)setEnableEarBack:(BOOL)a0;
- (void)setOriginalSingVolume:(double)a0;
- (void)startAudioCapture:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)stopAudioCapture:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)musicVolume;
- (id)init;
- (void)dealloc;

@end
