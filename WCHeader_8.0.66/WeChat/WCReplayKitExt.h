@class NSObject, WCLocalSocketClient, NSString, NSLock, MMFinderReplayKitVideoEncoder;
@protocol OS_dispatch_queue, OS_dispatch_source, WCReplayKitExtDelegate;

@interface WCReplayKitExt : NSObject <WCLocalSocketClientDelegate, MMFinderReplayKitVideoEncoderDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long audioFrameCount;
@property (nonatomic) unsigned long long videoFrameCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) unsigned long long liveState;
@property (retain, nonatomic) NSLock *sockLock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *frameEmitter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameEmitterQueue;
@property (nonatomic) unsigned short fps;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property BOOL needsIFrame;
@property (retain, nonatomic) MMFinderReplayKitVideoEncoder *encoder;
@property (nonatomic) struct { unsigned int serviceIndex; unsigned int fps; unsigned int transportType; unsigned int videoType; unsigned int pausedByMainApp; unsigned int orientation; unsigned int rcLimit; } config;
@property (nonatomic) struct { int type; int state; long long size; int transportType; float curMem; long long videoFrameCount; float videoFrameWidth; float videoFrameHeight; int videoFrameType; } header;
@property BOOL pausedByMainApp;
@property (retain, nonatomic) WCLocalSocketClient *socketClient;
@property (weak, nonatomic) id<WCReplayKitExtDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)stopRecord;
- (void)sendVideoBufferToHostApp:(struct opaqueCMSampleBuffer { } *)a0;
- (void)sendH264ideoBufferToHostApp:(struct opaqueCMSampleBuffer { } *)a0;
- (void)sendYUVVideoBufferToHostApp:(struct opaqueCMSampleBuffer { } *)a0;
- (void)onEncodeOneFrame:(id)a0;
- (id)dictionaryToJson:(id)a0;
- (void)realWriteDataWithData:(id)a0 header:(struct { int x0; int x1; long long x2; int x3; float x4; long long x5; float x6; float x7; int x8; })a1;
- (void)sendAudioBufferToHostApp:(struct opaqueCMSampleBuffer { } *)a0;
- (void)checkSocket:(unsigned long long)a0;
- (void)checkOther;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)dequeueSampleBuffer;
- (void)consumeFrameBuffer;
- (void)changeFPS:(unsigned short)a0;
- (void)didReadData:(id)a0;
- (void)updateConfig:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })a0;
- (void)checkConfig;
- (BOOL)hasConfig:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })a0;
- (void)onReceiveRequestPause;
- (void)onReceiveRequestResume;
- (void)updatePausedByMainApp:(unsigned short)a0;
- (void)didConnectToUrl;
- (void)didConnectToHost;
- (void)resetHeader;
- (void).cxx_destruct;

@end
