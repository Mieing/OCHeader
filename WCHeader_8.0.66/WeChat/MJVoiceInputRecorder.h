@class NSString;
@protocol MJVoiceInputRecorderDelegate;

@interface MJVoiceInputRecorder : NSObject <WCAudioModuleDelegate, SimpleRecordBufferDelegate>

@property (nonatomic) BOOL hasStopped;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int outputPCMBufferLength;
@property (nonatomic) long long sampleRate;
@property (weak, nonatomic) id<MJVoiceInputRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)durationFromPCMBufLength:(long long)a0 bitsPerChannel:(long long)a1 channelCount:(long long)a2 sampleRate:(long long)a3;

- (id)initWithSampleRate:(long long)a0;
- (BOOL)isRecording;
- (long long)currentRecordingTime;
- (BOOL)startRecordWithOptions:(unsigned long long)a0;
- (void)startRecordAsyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)stopRecord;
- (BOOL)isRecordingImpl;
- (long long)currentRecordingTimeImpl;
- (BOOL)startRecordImplWithOptions:(unsigned long long)a0;
- (void)stopRecordImpl;
- (BOOL)isBackingRecorderExist;
- (void)initBackingRecorder;
- (void)releaseBackingRecorder;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)outputPeakPower:(float)a0;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (double)simpleRateForBuffer;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)handleInterruptionBy3rdApp;
- (void).cxx_destruct;

@end
