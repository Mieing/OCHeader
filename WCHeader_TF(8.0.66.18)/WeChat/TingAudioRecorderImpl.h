@class NSTimer, NSDate, NSString, SimpleAudioRecorder, NSObject, NSMutableSet, NSMutableArray, AVAudioEngine;
@protocol OS_dispatch_queue;

@interface TingAudioRecorderImpl : MMUserService <SimpleRecordBufferDelegate, WCAudioSessionExt, MMServiceProtocol, TingAudioRecorder>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL didStopRecorder;
@property (nonatomic) BOOL getFinalBuffer;
@property (nonatomic) unsigned long long bufferId;
@property (retain, nonatomic) NSDate *lastBufferTime;
@property (nonatomic) double minBufferInterval;
@property (retain, nonatomic) NSDate *lastRetryTime;
@property (nonatomic) double minRetryInterval;
@property (retain, nonatomic) NSDate *lastNotifyLogTime;
@property (retain, nonatomic) NSMutableSet *listeners;
@property (retain, nonatomic) NSMutableArray *bufferQueue;
@property (retain, nonatomic) NSTimer *engineStatusTimer;
@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (nonatomic) BOOL receiveFirstBuffer;
@property (retain, nonatomic) SimpleAudioRecorder *audioRecorder;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (id)createSimpleAudioRecorder;
- (id)prepareAudioSession:(BOOL)a0;
- (void)deinitAudioSession;
- (void)prepare;
- (void)start:(id /* block */)a0;
- (void)startAsync:(id /* block */)a0;
- (void)errorToast;
- (id)startInner;
- (void)stop;
- (void)stopRunning:(BOOL)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)notifyStarted;
- (void)notifyListeners:(id)a0;
- (id)retrieveBuffer:(unsigned long long)a0;
- (void)enqueueRecorderBuffer:(id)a0;
- (id)nextBuffer:(id)a0;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)outputPeakPower:(float)a0;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionSetActive:(BOOL)a0;
- (BOOL)isPreloadState;
- (void)preloadAudioSession;
- (void)preloadAudioRecorder;
- (void).cxx_destruct;

@end
