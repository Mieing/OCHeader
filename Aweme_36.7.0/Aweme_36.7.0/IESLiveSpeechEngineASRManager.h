@class NSString, SpeechEngine, NSObject, IESLiveSpeechASRMonitor;
@protocol OS_dispatch_queue, IESLiveClientAIService, IESLiveSpeechASRDelegate;

@interface IESLiveSpeechEngineASRManager : NSObject <SpeechEngineDelegate>

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *reqId;
@property (retain, nonatomic) NSString *resultText;
@property (retain, nonatomic) SpeechEngine *engine;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL needUpdateModel;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *unzipModelPath;
@property (weak, nonatomic) id<IESLiveSpeechASRDelegate> delegate;
@property (retain, nonatomic) IESLiveSpeechASRMonitor *monitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioProcessQueue;
@property (nonatomic) BOOL anchorRisk;
@property (copy, nonatomic) NSString *anchorRiskReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)feedAudio:(short *)a0 length:(int)a1;
- (void)finishTalking;
- (void)startASREngine;
- (void)p_engineDidStartWithData:(id)a0;
- (void)p_engineDidStop;
- (void)p_engineError:(id)a0;
- (void)p_engineCallbackWithResult:(id)a0 complete:(BOOL)a1;
- (void)p_setupAsrSDK;
- (void)setupASREngine;
- (void)unzipModel;
- (void)p_handleASRPrepareError:(id)a0;
- (void)p_handleASRPrepareSuccess;
- (void)unzipGuideTempZip:(id)a0 destination:(id)a1 retryCount:(int)a2 completion:(id /* block */)a3;
- (void)requestModelsPath;
- (void).cxx_destruct;
- (id)init;
- (void)destroyEngine;
- (void)stopEngine;

@end
