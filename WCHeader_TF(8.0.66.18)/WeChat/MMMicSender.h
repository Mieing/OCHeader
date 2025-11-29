@protocol MMMicReceiver;

@interface MMMicSender : BaseAudioRecorder {
    long long startByteIndex;
}

@property (copy, nonatomic) id /* block */ queueAction;
@property (weak, nonatomic) id<MMMicReceiver> receiver;
@property (nonatomic) BOOL needRestartMusic;
@property (nonatomic) BOOL needRestartAudioTalk;
@property (nonatomic) unsigned long long firstTimeStamp;
@property (nonatomic) float pcmSampleRate;
@property (nonatomic) BOOL disableSendData;
@property (nonatomic) int channelCount;

- (void)handleQueue:(struct OpaqueAudioQueue { } *)a0 buffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a1 startTime:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 inNumPackets:(unsigned int)a3 inPacketDesc:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a4;
- (BOOL)shouldAutoRestartWith:(int)a0;
- (BOOL)canAutoRestart;
- (void)setDelegate:(id)a0;
- (BOOL)prepareRecord;
- (void)record;
- (void)cleanResource;
- (void)stop;
- (void)autostop;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)format;
- (void)setDataFormatPCM:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)prepareBuffers;
- (void).cxx_destruct;

@end
