@class NSString, IESLiveCombineSubject, NSObject;
@protocol OS_dispatch_queue, IESLiveGiftASRServiceAdapter;

@interface IESLiveAioLinkASRManagerServiceAdapterImpl : IESLiveBaseAdapter <IESLiveGiftASRServiceDelegate, IESLiveAnchorAudioListener, IESLiveAioLinkASRManagerServiceAdapter>

@property (retain, nonatomic) id<IESLiveGiftASRServiceAdapter> giftASRServiceAdapter;
@property (nonatomic) long long asrCallbackDuration;
@property (nonatomic) BOOL blockASRCallback;
@property (nonatomic) long long timeoutDuration;
@property (retain, nonatomic) IESLiveCombineSubject *giftASRInfoSubject;
@property (nonatomic) long long hotWordsScale;
@property (copy, nonatomic) NSString *currentHotWords;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioProcessQueue;
@property (copy, nonatomic) NSString *curReqId;
@property (copy, nonatomic) NSString *speechResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)ASREngineRecognizeResult:(id)a0 complete:(BOOL)a1;
- (void)ASREngineDidStartWithReqId:(id)a0;
- (void)ASREngineDidStop;
- (void)stopASREngine;
- (void)processASRInAudioQueueWithAudioData:(id)a0 numberOfFrames:(int)a1 sampleRate:(double)a2 channels:(int)a3;
- (void)audioFeedbackWithData:(id)a0 numberOfFrames:(int)a1 sampleRate:(double)a2 channels:(int)a3 pts:(long long)a4 type:(long long)a5;
- (id)getHotWordsString:(id)a0;
- (void)asrTimeout;
- (void)sendCurrentResultText;
- (void)ASREngineError:(long long)a0 errorMsg:(id)a1;
- (id)startASREngine:(id)a0;
- (void)updateASRHotWords:(id)a0;
- (void).cxx_destruct;

@end
