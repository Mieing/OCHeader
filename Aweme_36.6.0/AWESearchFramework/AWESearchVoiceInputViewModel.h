@class AWESearchVoiceInputContext, NSString, NSTimer, NSObject, AWEVoiceSearchTranslater;
@protocol OS_dispatch_queue, AWEVoiceSearchAudioRecorderProvider, AWESearchVoiceInputProtocol;

@interface AWESearchVoiceInputViewModel : NSObject <AWESearchAudioRecorderDelegate>

@property (retain, nonatomic) AWESearchVoiceInputContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordSerialQueue;
@property (retain, nonatomic) id<AWEVoiceSearchAudioRecorderProvider> recorder;
@property (retain, nonatomic) AWEVoiceSearchTranslater *voiceTranslater;
@property (nonatomic) BOOL isGetResult;
@property (nonatomic) BOOL recordHasStop;
@property (nonatomic) BOOL isFirstVoiceSend;
@property (nonatomic) BOOL asrReady;
@property (nonatomic) BOOL recordReady;
@property (copy, nonatomic) NSString *voiceID;
@property (copy, nonatomic) NSString *translateResult;
@property (retain, nonatomic) NSTimer *taskTimer;
@property (nonatomic) long long countdownNumber;
@property (weak, nonatomic) id<AWESearchVoiceInputProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)startRecord;
- (void)checkMicroPhoneAuthWithCompeletion:(id /* block */)a0;
- (void)recorderDidStart:(id)a0;
- (void)recorder:(id)a0 didReceivedAudioData:(struct AWESearchAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; } *)a1;
- (void)recorderDidStop:(id)a0;
- (void)recorderWithError:(id)a0;
- (void)updateCountdown;
- (void)startVoiceInput;
- (void)stopVoiceInput;
- (void)actionStart;
- (void)actionStop;
- (void)actionTimeoutRemind;
- (void)actionTimeout;
- (void)setTranslateCallBack;
- (id)buildAsrAppKey;
- (id)buildAsrToken;
- (id)buildAsrExtra;
- (void)actionTranslate:(id)a0 isInterIM:(BOOL)a1 isSoftFinished:(BOOL)a2 vosDuration:(long long)a3 searchExtra:(id)a4;
- (void)trackASRConnection:(double)a0;
- (void)actionDisconnected;
- (void)actionFinish;
- (void)recorderAveragePowerDidChange:(float)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithContext:(id)a0;
- (void)stopConnection;
- (void)startConnection;
- (void)releaseTimer;

@end
