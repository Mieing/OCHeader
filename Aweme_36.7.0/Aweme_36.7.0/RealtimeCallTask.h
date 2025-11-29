@class SAMICore, NSString, RealtimeCallTaskParam, SpeechSessionManager;
@protocol ISpeechCallback;

@interface RealtimeCallTask : NSObject <SAMICoreCallbackListener, SAMICoreHostCallBackListener>

@property (retain, nonatomic) SAMICore *samiCore;
@property (retain, nonatomic) RealtimeCallTaskParam *realtimeCallTaskParam;
@property (retain, nonatomic) id<ISpeechCallback> userCallback;
@property (nonatomic) SpeechSessionManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void)onSendToHost:(long long)a0 withBlock:(id)a1;
- (id)initWithParam:(id)a0 callback:(id)a1 manager:(id)a2;
- (int)reset:(id)a0 context:(id)a1;
- (int)sendAudioWithDataParam:(id)a0 context:(id)a1;
- (int)sendEventWithDataParam:(id)a0 context:(id)a1;
- (int)processAudioReceivedWithDataParam:(id)a0 context:(id)a1;
- (int)processEventReceivedWithDataParam:(id)a0 context:(id)a1;
- (int)_createSAMICoreHandle;
- (int)_releaseSAMICoreHandle;
- (int)_startNetConnect;
- (int)_stopNetConnect;
- (int)_sendStartTask:(id)a0;
- (int)_sendFinishTask:(id)a0;
- (int)_setAsrParam;
- (int)_setTtsParam;
- (int)_sendStartSession:(id)a0;
- (int)_sendFinishSession:(id)a0;
- (int)start:(id)a0;
- (int)stop:(id)a0;
- (void)destroy;
- (void)dealloc;

@end
