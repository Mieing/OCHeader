@class NSArray, NSDictionary, NSURL, NSMutableData, NSObject, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue, WARecorderDelegate;

@interface WABaseRecorder : NSObject <WARecordEncodeDelegate>

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) double recordTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSArray *inputSourceArr;
@property (nonatomic) BOOL timerOnFire;
@property (nonatomic) struct WARecorderData { id x0; id x1; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x2; struct OpaqueAudioQueue *x3; struct AudioQueueBuffer *x4[3]; id x5; } *aqData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (nonatomic) unsigned long long frameRecordByteSize;
@property (retain, nonatomic) NSMutableData *encodeBufferData;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *settings;
@property (nonatomic) unsigned long long state;
@property (readonly) double currentTime;
@property (readonly) BOOL isRecording;
@property (readonly) BOOL isPaused;
@property (readonly) BOOL isIdle;
@property (weak, nonatomic) id<WARecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recorderWithFilePath:(id)a0 settings:(id)a1;

- (void)dealloc;
- (id)initWithURL:(id)a0 settings:(id)a1;
- (void)prepareToRecord;
- (void)record;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)encodePCMBufferToOutputFormat:(struct WARecorderData { id x0; id x1; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x2; struct OpaqueAudioQueue *x3; struct AudioQueueBuffer *x4[3]; id x5; } *)a0 audioQueueRef:(struct OpaqueAudioQueue { } *)a1 audioQueueBufferRef:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a2 audioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a3 numPackets:(unsigned int)a4 packetDescription:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a5;
- (void)clearRecorderState;
- (BOOL)checkErrorAndStopIfError:(int)a0 withErrorString:(id)a1;
- (BOOL)checkErrorAndLogIfError:(int)a0 withErrorString:(id)a1;
- (BOOL)frameRecordByteSizeEnable;
- (id)fileHeadDataBeforeStop;
- (void)activeAudioSession;
- (void)unActiveAudioSession;
- (void)onNotifyFrameRecordOnMainThread:(id)a0 isLastFrame:(BOOL)a1;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)a0 error:(id)a1;
- (void)handleRouteChange:(id)a0;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)setInputSourceIfNeed;
- (BOOL)shouldForceUseBuiltinMic;
- (void).cxx_destruct;

@end
