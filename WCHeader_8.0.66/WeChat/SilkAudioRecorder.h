@class NSRecursiveLock;

@interface SilkAudioRecorder : BaseAudioRecorder {
    BOOL m_isNeedRestartAudioTalk;
    double m_smapleRate;
    double m_voiceRate;
}

@property (nonatomic) BOOL m_isPrepareSent;
@property (retain, nonatomic) NSRecursiveLock *m_prepareSentLock;

+ (double)GetDynmicSampleRate;
+ (double)GetDynmicVoiceRate;
+ (void)outputPcmBuffer:(short *)a0 withBufferSize:(unsigned int)a1 WithRecorderState:(struct RecorderState { id x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; struct OpaqueAudioQueue *x2; struct AudioQueueBuffer *x3[3]; unsigned int x4; long long x5; long long x6; struct OpaqueAudioFileID *x7; BOOL x8; unsigned int x9; BOOL x10; BOOL x11; BOOL x12; id x13; id x14; id x15; struct AMREncodeFloat *x16; BOOL x17; id x18; id x19; struct OpaqueAudioFileID *x20; unsigned int x21; unsigned int x22; id x23; unsigned char x24[1280]; int x25; BOOL x26; struct AudioCoder *x27; BOOL x28; long long x29; } *)a2;
+ (void)encodePcmBuffer:(short *)a0 withBufferSize:(unsigned int)a1 WithRecorderState:(struct RecorderState { id x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; struct OpaqueAudioQueue *x2; struct AudioQueueBuffer *x3[3]; unsigned int x4; long long x5; long long x6; struct OpaqueAudioFileID *x7; BOOL x8; unsigned int x9; BOOL x10; BOOL x11; BOOL x12; id x13; id x14; id x15; struct AMREncodeFloat *x16; BOOL x17; id x18; id x19; struct OpaqueAudioFileID *x20; unsigned int x21; unsigned int x22; id x23; unsigned char x24[1280]; int x25; BOOL x26; struct AudioCoder *x27; BOOL x28; long long x29; } *)a2 WithNumberPackets:(unsigned int)a3;
+ (id)encodePcmBuffer:(id)a0 Encoder:(struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *)a1 SampleRate:(double)a2 NoiseSupression:(BOOL)a3;

- (id)init;
- (void)ayncPrepareRecordWithBlock:(id /* block */)a0;
- (BOOL)prepareRecord;
- (void)notify;
- (BOOL)prepareQueue;
- (void)initSilkEncoder;
- (BOOL)isNeedSwitchBuiltInMicDataSource;
- (void)selectInputDevice;
- (void)createFile:(id)a0;
- (void)createSilkFile:(id)a0;
- (BOOL)prepareSend;
- (BOOL)prepareRecordButNotNotify;
- (void)stopButNotNotify;
- (void)cleanResource;
- (void)stop;
- (long long)getVoiceFormat;
- (void)setDataFormat;
- (void)TimerCheckMeter;
- (void)setSmapleRate:(double)a0;
- (void)setVoiceRate:(double)a0;
- (unsigned int)audioDuration;
- (void)prepareBuffers;
- (void).cxx_destruct;

@end
